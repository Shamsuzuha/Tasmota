## Tasmota - digiDIM Something Something Temporary Fork @ 9.5.0.3

Precompiled bins supplied in the bins folder of this repo.

NOTE: Once you upgrade to 8.x you will only be able to downgrade to an older version via serial flash.  

If you receive a Buffer Miscompare/Not Enough Space error when flashing any bin files do not worry, the fix is easy.  All this means is you do not have enough free space on the flash.  You need to flash Tasmota-lite.bin first, then flash the bin for this fork.  You could also try the gzip versions if your base of Tasmota is recent enough to accept gzip'd files.

### Changes

- Dimming status sent at all power state changes 
- Power topic updated if a dimming change causes the power state to change
- Martin Jerry SD-01 (02,03) Dimmer support
- digiDIMv(X) indicated in the information tab for support purposes

I personally use this build on Tuya based dimmers and the Martin Jerry SD-01 Dimmer in our home with Home Assistant. [Shown here](https://www.digiblur.com/2018/12/state-of-dimmer-tasmota-dimmer-updates.html)

[Martin Jerry SD-01 Dimmer](https://amzn.to/2L8XeFS)	

[Tessan SD-02 Dimmer](https://amzn.to/2TfmTzh)	

[NTONPOWER Dimmer](https://amzn.to/30XoGzU)

### Martin Jerry SD-01 & Tessan SD-02 & Acenx SD-03 & NTONPOWER Dimmer Setup

## Manual Flashing(Soldering Method)

Unplug the faceplate from the rear dimming module until you are ready to connect it to mains power!  Do not connect the USB flasher to the faceplate while mains power is applied to the unit!  The magic smoke will come out or worse!

If you do not like to solder, you can use dupont jumpers in the hole as show in [this blog post](https://www.digiblur.com/2019/08/tuya-convert-whats-next-solderless.html) or you can also use a TYWES3 pogo pin jig as shown in [this blog post/video](https://www.digiblur.com/2020/07/free-your-smart-devices-from-cloud.html)

Solder the wires for flashing like you normally would for a Tuya module flash [as shown here](https://github.com/arendst/Sonoff-Tasmota/wiki/SM-SO301) .  You do not need to solder GPIO 0 as the UP button is also GPIO 0, simply hold this button up during boot.  Use the latest bin file provided in this [folder](https://github.com/digiblur/Sonoff-Tasmota/tree/development/bins).

## Tuya-Convert (OTA Method)

The device should be in pairing mode (fast blink) upon applying power to the switch.  Follow the standard Tuya-Convert process.  After the dimmer is on the network, download the latest latest bin file provided in this [folder](https://github.com/digiblur/Tasmota/tree/development/bins) to a folder on your computer.  Use the Firmware Upgrade button on the Tasmota GUI and browse to the bin file that was just downloaded.  If you receive a upload buffer miscompare error while uploading, this means you do not have enough flash space available on the dimmer.  To correct the issue, flash the tasmota-lite bin through the Tasmota GUI. Then flash the digiDIM bin file.

## Setup

Once you have the device connected to your WiFi please setup your MQTT tab information. Go to the Console and issue the following command:

```
module 72
```

This changes the Module Type to MJ-SD01 Dimmer.  Let the device reboot and issue the following backlog on the console.  Make sure every command takes effect:

```
backlog rule1 on switch3#state=2 do dimmer + endon on switch2#state=2 do dimmer - endon on switch2#state=3 do dimmer 20 endon on switch3#state=3 do dimmer 100 endon; rule1 1; ledtable 0; setoption32 8; setoption68 0; switchmode1 6; switchmode2 5; switchmode3 5
```

Once the switch reboots.  Issue a `switchmode3` command and make sure it comes back as a setting of "5".  This will verify all of the above backlog commands went through correctly.  If you do not see switchmode3 set to 5, you can issue each of the backlog commands separately one at a time and watch them go through.

In the rule1 you can change the "do dimmer 20" section to any value you like, a long press of down will set dimmer to 20%, a long press up will set the dimmer to 100%.  Modify these to your needs.

Optional Rule for ON/OFF long press to send an MQTT toggle message to another switch/topic (example):  
```
rule2 on switch1#state=3 do publish Table-Dimmer/Main TOGGLE endon 
```
```
rule2 1
```
NOTE: In the future, when you are preparing to flash a stock build of Tasmota to the MJ-SD01 Dimmer, select the Generic template first before flashing to prevent a possible conflict with another device template.

BONUS: Want the Red LED on while the light is off? Run this rule:  
```
Rule3 on power1#state=1 do ledpower 0 endon on power1#state=0 do ledpower 1 endon on power1#boot=1 do ledpower 0 endon on power1#boot=0 do ledpower 1 endon
```
```
Rule3 1
```

## Home Assistant Tasmota Integration

Verify you setup a Device Name and FriendlyName in Configure Other section Tasmota.  You can set them the same if you like, such as "Kitchen Light".  Install and/or open the Tasmota Integration.  It is that simple!

## Sample Manual Configuration YAML Code

```yaml
- platform: mqtt
  name: "TuyaTest"
  state_topic: "stat/TuyaTest/POWER"
  command_topic: "cmnd/TuyaTest/POWER"
  availability_topic: "tele/TuyaTest/LWT"
  brightness_state_topic: "stat/TuyaTest/RESULT"
  brightness_command_topic: "cmnd/TuyaTest/Dimmer"
  brightness_scale: 100
  brightness_value_template: "{{ value_json.Dimmer }}"
  qos: 1
  payload_on: "ON"
  payload_off: "OFF"
  payload_available: "Online"
  payload_not_available: "Offline"
  retain: false
```

## MultiPress Button Template

If you want to use the `setoption73 1` multipress feature with the dimmer to have 6 actions per button you can use this template. This is more of an advanced user setup as you'll need to assign your various rules to all the button press states as needed.  For more info check out [this video](https://youtu.be/jcdPRbWCGjE)

```
{"NAME":"digiDIM Buttons","GPIO":[19,18,255,0,56,0,0,0,0,37,0,122,0],"FLAG":0,"BASE":72}
```
