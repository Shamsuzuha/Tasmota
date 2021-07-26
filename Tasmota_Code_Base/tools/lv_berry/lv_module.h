// LV Colors - we store in 24 bits format and will convert at runtime
// This is specific treatment because we keep colors in 24 bits format
WHITE=0xFFFFFF
SILVER=0xC0C0C0
GRAY=0x808080
BLACK=0x000000
RED=0xFF0000
MAROON=0x800000
YELLOW=0xFFFF00
OLIVE=0x808000
LIME=0x00FF00
GREEN=0x008000
CYAN=0x00FFFF
AQUA=0x00FFFF
TEAL=0x008080
BLUE=0x0000FF
NAVY=0x000080
MAGENTA=0xFF00FF
PURPLE=0x800080

LV_RADIUS_CIRCLE=0x7FFF
//
LV_SCR_LOAD_ANIM_NONE
LV_SCR_LOAD_ANIM_OVER_LEFT
LV_SCR_LOAD_ANIM_OVER_RIGHT
LV_SCR_LOAD_ANIM_OVER_TOP
LV_SCR_LOAD_ANIM_OVER_BOTTOM
LV_SCR_LOAD_ANIM_MOVE_LEFT
LV_SCR_LOAD_ANIM_MOVE_RIGHT
LV_SCR_LOAD_ANIM_MOVE_TOP
LV_SCR_LOAD_ANIM_MOVE_BOTTOM
LV_SCR_LOAD_ANIM_FADE_ON

LV_ALIGN_CENTER
LV_ALIGN_IN_TOP_LEFT
LV_ALIGN_IN_TOP_MID
LV_ALIGN_IN_TOP_RIGHT
LV_ALIGN_IN_BOTTOM_LEFT
LV_ALIGN_IN_BOTTOM_MID
LV_ALIGN_IN_BOTTOM_RIGHT
LV_ALIGN_IN_LEFT_MID
LV_ALIGN_IN_RIGHT_MID
LV_ALIGN_OUT_TOP_LEFT
LV_ALIGN_OUT_TOP_MID
LV_ALIGN_OUT_TOP_RIGHT
LV_ALIGN_OUT_BOTTOM_LEFT
LV_ALIGN_OUT_BOTTOM_MID
LV_ALIGN_OUT_BOTTOM_RIGHT
LV_ALIGN_OUT_LEFT_TOP
LV_ALIGN_OUT_LEFT_MID
LV_ALIGN_OUT_LEFT_BOTTOM
LV_ALIGN_OUT_RIGHT_TOP
LV_ALIGN_OUT_RIGHT_MID
LV_ALIGN_OUT_RIGHT_BOTTOM

LV_INDEV_STATE_REL
LV_INDEV_STATE_PR
LV_DRAG_DIR_HOR
LV_DRAG_DIR_VER
LV_DRAG_DIR_BOTH
LV_DRAG_DIR_ONE
LV_GESTURE_DIR_TOP
LV_GESTURE_DIR_BOTTOM
LV_GESTURE_DIR_LEFT
LV_GESTURE_DIR_RIGHT

LV_DISP_ROT_NONE
LV_DISP_ROT_90
LV_DISP_ROT_180
LV_DISP_ROT_270

LV_DISP_SIZE_SMALL
LV_DISP_SIZE_MEDIUM
LV_DISP_SIZE_LARGE
LV_DISP_SIZE_EXTRA_LARGE

LV_DRAG_DIR_HOR
LV_DRAG_DIR_VER
LV_DRAG_DIR_BOTH
LV_DRAG_DIR_ONE

LV_GESTURE_DIR_TOP
LV_GESTURE_DIR_BOTTOM
LV_GESTURE_DIR_LEFT
LV_GESTURE_DIR_RIGHT

LV_ANIM_OFF
LV_ANIM_ON

LV_BLEND_MODE_NORMAL
LV_BLEND_MODE_ADDITIVE
LV_BLEND_MODE_SUBTRACTIVE

// Obj parts
OBJ_PART_MAIN
// OBJ_PART_VIRTUAL_FIRST
// OBJ_PART_REAL_FIRST
OBJ_PART_ALL
// LV State
STATE_DEFAULT
STATE_CHECKED
STATE_FOCUSED
STATE_EDITED
STATE_HOVERED
STATE_PRESSED
STATE_DISABLED
// OPA opacity
OPA_TRANSP
OPA_0
OPA_10
OPA_20
OPA_30
OPA_40
OPA_50
OPA_60
OPA_70
OPA_80
OPA_90
OPA_100
OPA_COVER

// LV Groups
KEY_UP
KEY_DOWN
KEY_RIGHT
KEY_LEFT
KEY_ESC
KEY_DEL
KEY_BACKSPACE
KEY_ENTER
KEY_NEXT
KEY_PREV
KEY_HOME
KEY_END

// LV Style
BORDER_SIDE_NONE
BORDER_SIDE_BOTTOM
BORDER_SIDE_TOP
BORDER_SIDE_LEFT
BORDER_SIDE_RIGHT
BORDER_SIDE_FULL
BORDER_SIDE_INTERNAL

GRAD_DIR_NONE
GRAD_DIR_VER
GRAD_DIR_HOR

LV_TEXT_DECOR_NONE
LV_TEXT_DECOR_UNDERLINE
LV_TEXT_DECOR_STRIKETHROUGH

// LV Styles parts

LV_STYLE_RADIUS
LV_STYLE_CLIP_CORNER
LV_STYLE_SIZE
LV_STYLE_TRANSFORM_WIDTH
LV_STYLE_TRANSFORM_HEIGHT
LV_STYLE_TRANSFORM_ANGLE
LV_STYLE_TRANSFORM_ZOOM
LV_STYLE_OPA_SCALE

LV_STYLE_PAD_TOP
LV_STYLE_PAD_BOTTOM
LV_STYLE_PAD_LEFT
LV_STYLE_PAD_RIGHT
LV_STYLE_PAD_INNER
LV_STYLE_MARGIN_TOP
LV_STYLE_MARGIN_BOTTOM
LV_STYLE_MARGIN_LEFT
LV_STYLE_MARGIN_RIGHT

LV_STYLE_BG_BLEND_MODE
LV_STYLE_BG_MAIN_STOP
LV_STYLE_BG_GRAD_STOP
LV_STYLE_BG_GRAD_DIR
LV_STYLE_BG_COLOR
LV_STYLE_BG_GRAD_COLOR
LV_STYLE_BG_OPA

LV_STYLE_BORDER_WIDTH
LV_STYLE_BORDER_SIDE
LV_STYLE_BORDER_BLEND_MODE
LV_STYLE_BORDER_POST
LV_STYLE_BORDER_COLOR
LV_STYLE_BORDER_OPA

LV_STYLE_OUTLINE_WIDTH
LV_STYLE_OUTLINE_PAD
LV_STYLE_OUTLINE_BLEND_MODE
LV_STYLE_OUTLINE_COLOR
LV_STYLE_OUTLINE_OPA

LV_STYLE_SHADOW_WIDTH
LV_STYLE_SHADOW_OFS_X
LV_STYLE_SHADOW_OFS_Y
LV_STYLE_SHADOW_SPREAD
LV_STYLE_SHADOW_BLEND_MODE
LV_STYLE_SHADOW_COLOR
LV_STYLE_SHADOW_OPA

LV_STYLE_PATTERN_BLEND_MODE
LV_STYLE_PATTERN_REPEAT
LV_STYLE_PATTERN_RECOLOR
LV_STYLE_PATTERN_OPA
LV_STYLE_PATTERN_RECOLOR_OPA
LV_STYLE_PATTERN_IMAGE

LV_STYLE_VALUE_LETTER_SPACE
LV_STYLE_VALUE_LINE_SPACE
LV_STYLE_VALUE_BLEND_MODE
LV_STYLE_VALUE_OFS_X
LV_STYLE_VALUE_OFS_Y
LV_STYLE_VALUE_ALIGN
LV_STYLE_VALUE_COLOR
LV_STYLE_VALUE_OPA
LV_STYLE_VALUE_FONT
LV_STYLE_VALUE_STR

LV_STYLE_TEXT_LETTER_SPACE
LV_STYLE_TEXT_LINE_SPACE
LV_STYLE_TEXT_DECOR
LV_STYLE_TEXT_BLEND_MODE
LV_STYLE_TEXT_COLOR
LV_STYLE_TEXT_SEL_COLOR
LV_STYLE_TEXT_SEL_BG_COLOR
LV_STYLE_TEXT_OPA
LV_STYLE_TEXT_FONT

LV_STYLE_LINE_WIDTH
LV_STYLE_LINE_BLEND_MODE
LV_STYLE_LINE_DASH_WIDTH
LV_STYLE_LINE_DASH_GAP
LV_STYLE_LINE_ROUNDED
LV_STYLE_LINE_COLOR
LV_STYLE_LINE_OPA

LV_STYLE_IMAGE_BLEND_MODE
LV_STYLE_IMAGE_RECOLOR
LV_STYLE_IMAGE_OPA
LV_STYLE_IMAGE_RECOLOR_OPA

LV_STYLE_TRANSITION_TIME
LV_STYLE_TRANSITION_DELAY
LV_STYLE_TRANSITION_PROP_1
LV_STYLE_TRANSITION_PROP_2
LV_STYLE_TRANSITION_PROP_3
LV_STYLE_TRANSITION_PROP_4
LV_STYLE_TRANSITION_PROP_5
LV_STYLE_TRANSITION_PROP_6
LV_STYLE_TRANSITION_PATH

LV_STYLE_SCALE_WIDTH
LV_STYLE_SCALE_BORDER_WIDTH
LV_STYLE_SCALE_END_BORDER_WIDTH
LV_STYLE_SCALE_END_LINE_WIDTH
LV_STYLE_SCALE_GRAD_COLOR
LV_STYLE_SCALE_END_COLOR

LV_TXT_FLAG_NONE
LV_TXT_FLAG_RECOLOR
LV_TXT_FLAG_EXPAND
LV_TXT_FLAG_CENTER
LV_TXT_FLAG_RIGHT
LV_TXT_FLAG_FIT

LV_TXT_CMD_STATE_WAIT
LV_TXT_CMD_STATE_PAR
LV_TXT_CMD_STATE_IN

LV_FS_RES_OK
LV_FS_RES_HW_ERR
LV_FS_RES_FS_ERR
LV_FS_RES_NOT_EX
LV_FS_RES_FULL
LV_FS_RES_LOCKED
LV_FS_RES_DENIED
LV_FS_RES_BUSY
LV_FS_RES_TOUT
LV_FS_RES_NOT_IMP
LV_FS_RES_OUT_OF_MEM
LV_FS_RES_INV_PARAM
LV_FS_RES_UNKNOWN

LV_FS_MODE_WR
LV_FS_MODE_RD


LV_EVENT_PRESSED
LV_EVENT_PRESSING
LV_EVENT_PRESS_LOST
LV_EVENT_SHORT_CLICKED
LV_EVENT_LONG_PRESSED
LV_EVENT_LONG_PRESSED_REPEAT

LV_EVENT_CLICKED
LV_EVENT_RELEASED
LV_EVENT_DRAG_BEGIN
LV_EVENT_DRAG_END
LV_EVENT_DRAG_THROW_BEGIN
LV_EVENT_GESTURE
LV_EVENT_KEY
LV_EVENT_FOCUSED
LV_EVENT_DEFOCUSED
LV_EVENT_LEAVE
LV_EVENT_VALUE_CHANGED
LV_EVENT_INSERT
LV_EVENT_REFRESH
LV_EVENT_APPLY
LV_EVENT_CANCEL
LV_EVENT_DELETE


LV_PROTECT_NONE
LV_PROTECT_CHILD_CHG
LV_PROTECT_PARENT
LV_PROTECT_POS
LV_PROTECT_FOLLOW

LV_PROTECT_PRESS_LOST

LV_PROTECT_CLICK_FOCUS
LV_PROTECT_EVENT_TO_DISABLED

// LV Widgets
// LV Arc
ARC_TYPE_NORMAL
ARC_TYPE_SYMMETRIC
ARC_TYPE_REVERSE

ARC_PART_BG
ARC_PART_INDIC
ARC_PART_KNOB

// LV Bar
BAR_TYPE_NORMAL
BAR_TYPE_SYMMETRICAL
BAR_TYPE_CUSTOM

// Lv Btn
BTN_STATE_RELEASED
BTN_STATE_PRESSED
BTN_STATE_DISABLED
BTN_STATE_CHECKED_RELEASED
BTN_STATE_CHECKED_PRESSED
BTN_STATE_CHECKED_DISABLED

// Lv BtnMatrix
BTNMATRIX_CTRL_HIDDEN
BTNMATRIX_CTRL_NO_REPEAT
BTNMATRIX_CTRL_DISABLED
BTNMATRIX_CTRL_CHECKABLE
BTNMATRIX_CTRL_CHECK_STATE
BTNMATRIX_CTRL_CLICK_TRIG

// LV Calendar
CALENDAR_PART_BG
CALENDAR_PART_HEADER
CALENDAR_PART_DAY_NAMES
CALENDAR_PART_DATE

// LV Chart
CHART_TYPE_NONE
CHART_TYPE_LINE
CHART_TYPE_COLUMN

CHART_UPDATE_MODE_SHIFT
CHART_UPDATE_MODE_CIRCULAR

CHART_AXIS_PRIMARY_Y
CHART_AXIS_SECONDARY_Y

CHART_CURSOR_NONE
CHART_CURSOR_RIGHT
CHART_CURSOR_UP
CHART_CURSOR_LEFT
CHART_CURSOR_DOWN

CHART_AXIS_SKIP_LAST_TICK
CHART_AXIS_DRAW_LAST_TICK
CHART_AXIS_INVERSE_LABELS_ORDER

CHART_PART_BG
CHART_PART_SERIES_BG
CHART_PART_SERIES
CHART_PART_CURSOR

// LV Checkbox
CHECKBOX_PART_BG
CHECKBOX_PART_BULLET

// LV Cont
LAYOUT_OFF
LAYOUT_CENTER
LAYOUT_COLUMN_LEFT
LAYOUT_COLUMN_MID
LAYOUT_COLUMN_RIGHT
LAYOUT_ROW_TOP
LAYOUT_ROW_MID
LAYOUT_ROW_BOTTOM
LAYOUT_PRETTY_TOP
LAYOUT_PRETTY_MID
LAYOUT_PRETTY_BOTTOM
LAYOUT_GRID

FIT_NONE
FIT_TIGHT
FIT_PARENT
FIT_MAX

// LV Cpicker
CPICKER_TYPE_RECT
CPICKER_TYPE_DISC

CPICKER_COLOR_MODE_HUE
CPICKER_COLOR_MODE_SATURATION
CPICKER_COLOR_MODE_VALUE

CPICKER_PART_MAIN
CPICKER_PART_KNOB

// LV Dropdown
DROPDOWN_DIR_DOWN
DROPDOWN_DIR_UP
DROPDOWN_DIR_LEFT
DROPDOWN_DIR_RIGHT

DROPDOWN_PART_MAIN
DROPDOWN_PART_LIST
DROPDOWN_PART_SCROLLBAR
DROPDOWN_PART_SELECTED

// LV Gauge
GAUGE_PART_MAIN
GAUGE_PART_MAJOR
GAUGE_PART_NEEDLE

// LV Img
// LV Imgbtn

// LV Keyboard
KEYBOARD_MODE_TEXT_LOWER
KEYBOARD_MODE_TEXT_UPPER
KEYBOARD_MODE_SPECIAL
KEYBOARD_MODE_NUM

KEYBOARD_PART_BG
KEYBOARD_PART_BTN

// LV Label
LABEL_LONG_EXPAND
LABEL_LONG_BREAK
LABEL_LONG_DOT
LABEL_LONG_SROLL
LV_LABEL_LONG_SROLL_CIRC
LABEL_LONG_CROP

LABEL_ALIGN_LEFT
LABEL_ALIGN_CENTER
LABEL_ALIGN_RIGHT
LABEL_ALIGN_AUTO

// LV Led
LED_PART_MAIN

// LV Line
LINEMETER_PART_MAIN

// LV List
LIST_PART_BG
LIST_PART_SCROLLBAR
LIST_PART_EDGE_FLASH

// LV Msgbox
// enum {
    LV_MSGBOX_PART_BG

    LV_MSGBOX_PART_BTN_BG
    LV_MSGBOX_PART_BTN,
// };

// LV Objmask
OBJMASK_PART_MAIN

// // LV Templ
// TEMPL_STYLE_X
// TEMPL_STYLE_Y

// LV Page
SCROLLBAR_MODE_OFF
SCROLLBAR_MODE_ON
SCROLLBAR_MODE_DRAG
SCROLLBAR_MODE_AUTO
SCROLLBAR_MODE_HIDE
SCROLLBAR_MODE_UNHIDE

PAGE_EDGE_LEFT
PAGE_EDGE_TOP
PAGE_EDGE_RIGHT
PAGE_EDGE_BOTTOM
// enum {
    LV_PAGE_PART_BG
    LV_PAGE_PART_SCROLLBAR
    LV_PAGE_PART_EDGE_FLASH,
    _LV_PAGE_PART_VIRTUAL_LAST,

    LV_PAGE_PART_SCROLLABLE
    _LV_PAGE_PART_REAL_LAST,
// };

// LV Roller
ROLLER_MODE_NORMAL
ROLLER_MODE_INFINITE
// enum {
    LV_ROLLER_PART_BG
    LV_ROLLER_PART_SELECTED
//     _LV_ROLLER_PART_VIRTUAL_LAST,
// };

// LV Slider
SLIDER_TYPE_NORMAL
SLIDER_TYPE_SYMMETRICAL
SLIDER_TYPE_RANGE
// enum {
    LV_SLIDER_PART_BG, /** Slider background style. */
    LV_SLIDER_PART_INDIC, /** Slider indicator (filled area) style. */
    LV_SLIDER_PART_KNOB, /** Slider knob style. */
// };

// LV Spinbox
// enum {
    LV_SPINBOX_PART_BG
    LV_SPINBOX_PART_CURSOR
    _LV_SPINBOX_PART_VIRTUAL_LAST
    _LV_SPINBOX_PART_REAL_LAST
// };

// LV Spinner
SPINNER_TYPE_SPINNING_ARC
SPINNER_TYPE_FILLSPIN_ARC
SPINNER_TYPE_CONSTANT_ARC

SPINNER_DIR_FORWARD
SPINNER_DIR_BACKWARD
// enum {
    LV_SPINNER_PART_BG
    LV_SPINNER_PART_INDIC
    _LV_SPINNER_PART_VIRTUAL_LAST,

    _LV_SPINNER_PART_REAL_LAST
// };

// LV Switch
// enum {
    LV_SWITCH_PART_BG
    LV_SWITCH_PART_INDIC
    LV_SWITCH_PART_KNOB
    _LV_SWITCH_PART_VIRTUAL_LAST
// };

// LV Table
// enum {
    LV_TABLE_PART_BG,     /* Because of this member, LV_PART.*CELL1 has enum value of 1,        */
    LV_TABLE_PART_CELL1,  /*   LV_PART.*CELL2 has an enum value of 2 and so on up to the maximum */
    LV_TABLE_PART_CELL2,  /*   number of styles specified by LV_TABLE_CELL_STYLE_CNT            */
    LV_TABLE_PART_CELL3,
    LV_TABLE_PART_CELL4,  /* CELL 5-16 are not needed to be defined, the values in this enum
//                              are there for backward compatibility */
// };

// LV Tabview
TABVIEW_TAB_POS_NONE
TABVIEW_TAB_POS_TOP
TABVIEW_TAB_POS_BOTTOM
TABVIEW_TAB_POS_LEFT
TABVIEW_TAB_POS_RIGHT
// enum {
    LV_TABVIEW_PART_BG
    _LV_TABVIEW_PART_VIRTUAL_LAST

    LV_TABVIEW_PART_BG_SCROLLABLE
    LV_TABVIEW_PART_TAB_BG,
    LV_TABVIEW_PART_TAB_BTN,
    LV_TABVIEW_PART_INDIC,
    _LV_TABVIEW_PART_REAL_LAST,
// };

// LV Textarea
TEXTAREA_CURSOR_LAST
// enum {
    LV_TEXTAREA_PART_BG
    LV_TEXTAREA_PART_SCROLLBAR
    LV_TEXTAREA_PART_EDGE_FLASH
    LV_TEXTAREA_PART_CURSOR
    LV_TEXTAREA_PART_PLACEHOLDER, /**< Placeholder style */
    _LV_TEXTAREA_PART_VIRTUAL_LAST,

    _LV_TEXTAREA_PART_REAL_LAST
// };

// LV Tileview
// enum {
    LV_TILEVIEW_PART_BG
    LV_TILEVIEW_PART_SCROLLBAR
    LV_TILEVIEW_PART_EDGE_FLASH
    _LV_TILEVIEW_PART_VIRTUAL_LAST
    _LV_TILEVIEW_PART_REAL_LAST
// };

// LV Win
// enum {
    LV_WIN_PART_BG
    _LV_WIN_PART_VIRTUAL_LAST,
    LV_WIN_PART_HEADER
    LV_WIN_PART_CONTENT_SCROLLABLE, /**< Window content style. */
    LV_WIN_PART_SCROLLBAR, /**< Window scrollbar style. */
    _LV_WIN_PART_REAL_LAST
// };


LV_DRAW_MASK_RES_TRANSP
LV_DRAW_MASK_RES_FULL_COVER
LV_DRAW_MASK_RES_CHANGED
LV_DRAW_MASK_RES_UNKNOWN

LV_DRAW_MASK_TYPE_LINE
LV_DRAW_MASK_TYPE_ANGLE
LV_DRAW_MASK_TYPE_RADIUS
LV_DRAW_MASK_TYPE_FADE
LV_DRAW_MASK_TYPE_MAP

LV_DRAW_MASK_LINE_SIDE_LEFT
LV_DRAW_MASK_LINE_SIDE_RIGHT
LV_DRAW_MASK_LINE_SIDE_TOP
LV_DRAW_MASK_LINE_SIDE_BOTTOM

// LV IMG

LV_IMG_CF_UNKNOWN

LV_IMG_CF_RAW
LV_IMG_CF_RAW_ALPHA
LV_IMG_CF_RAW_CHROMA_KEYED

LV_IMG_CF_TRUE_COLOR
LV_IMG_CF_TRUE_COLOR_ALPHA
LV_IMG_CF_TRUE_COLOR_CHROMA_KEYED

LV_IMG_CF_INDEXED_1BIT
LV_IMG_CF_INDEXED_2BIT
LV_IMG_CF_INDEXED_4BIT
LV_IMG_CF_INDEXED_8BIT

LV_IMG_CF_ALPHA_1BIT
LV_IMG_CF_ALPHA_2BIT
LV_IMG_CF_ALPHA_4BIT
LV_IMG_CF_ALPHA_8BIT

// Design modes

LV_DESIGN_DRAW_MAIN
LV_DESIGN_DRAW_POST
LV_DESIGN_COVER_CHK

LV_DESIGN_RES_OK
LV_DESIGN_RES_COVER
LV_DESIGN_RES_NOT_COVER
LV_DESIGN_RES_MASKED
