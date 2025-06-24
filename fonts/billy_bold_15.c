/*******************************************************************************
 * Size: 15 px
 * Bpp: 1
 * Opts: --font /Users/user/Downloads/Fonts/Billy-Bold.ttf -r 0x20-0x7E --size 15 --format lvgl --bpp 1 -o usermodules/fonts/billy_bold_15.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef BILLY_BOLD_15
#define BILLY_BOLD_15 1
#endif

#if BILLY_BOLD_15

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xf8, 0xfc,

    /* U+0022 "\"" */
    0x67, 0xdf, 0xbe, 0x60,

    /* U+0023 "#" */
    0x73, 0x9f, 0xfd, 0xce, 0x39, 0xcf, 0xfe, 0xe7,
    0x0,

    /* U+0025 "%" */
    0x0,

    /* U+0026 "&" */
    0x0,

    /* U+0027 "'" */
    0x7f, 0xe0,

    /* U+0028 "(" */
    0x3b, 0x9d, 0xce, 0x73, 0x9c, 0xe7, 0x1c, 0xe3,
    0x80,

    /* U+0029 ")" */
    0xe3, 0x9c, 0x73, 0x9c, 0xe7, 0x39, 0xdc, 0xee,
    0x0,

    /* U+002A "*" */
    0xab, 0x9d, 0x50,

    /* U+002B "+" */
    0x38, 0x73, 0xf9, 0xc3, 0x80,

    /* U+002C "," */
    0xfc, 0xa0,

    /* U+002E "." */
    0xfc,

    /* U+002F "/" */
    0xe, 0x1c, 0x70, 0xe1, 0xc7, 0xe, 0x1c, 0x70,
    0xe1, 0xc7, 0xe, 0x0,

    /* U+0030 "0" */
    0x7e, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0x7e,

    /* U+0031 "1" */
    0xf7, 0x77, 0x77, 0x77, 0x70,

    /* U+0032 "2" */
    0x7e, 0xe7, 0xe7, 0x7, 0xe, 0x1c, 0x38, 0x70,
    0xff,

    /* U+0033 "3" */
    0x7e, 0xe7, 0xe7, 0x7, 0x1e, 0x7, 0xe7, 0xe7,
    0x7e,

    /* U+0034 "4" */
    0x3f, 0x3b, 0x9d, 0xce, 0xee, 0x77, 0x3b, 0xfe,
    0xe, 0x7, 0x0,

    /* U+0035 "5" */
    0xff, 0xc3, 0x87, 0xe0, 0xe1, 0xc3, 0xe7, 0x7c,

    /* U+0036 "6" */
    0x7e, 0xe1, 0xe0, 0xfe, 0xe7, 0xe7, 0xe7, 0xe7,
    0x7e,

    /* U+0037 "7" */
    0xfe, 0x1c, 0x38, 0xe1, 0xc3, 0x8e, 0x1c, 0x38,

    /* U+0038 "8" */
    0x7e, 0xe7, 0xe7, 0xe7, 0x7e, 0xe7, 0xe7, 0xe7,
    0x7e,

    /* U+0039 "9" */
    0x7e, 0xe7, 0xe7, 0xe7, 0xe7, 0x7f, 0x7, 0x87,
    0x7e,

    /* U+003A ":" */
    0xfc, 0x1, 0xf8,

    /* U+003B ";" */
    0xfc, 0x1, 0xf9,

    /* U+003C "<" */
    0x0,

    /* U+003D "=" */
    0xfc, 0xf, 0xc0,

    /* U+003E ">" */
    0x0,

    /* U+003F "?" */
    0x7d, 0xdf, 0xb8, 0x71, 0xc7, 0xe, 0x0, 0x38,
    0x70,

    /* U+0040 "@" */
    0xf, 0x80, 0xc1, 0x8e, 0x1, 0xf9, 0xe7, 0xed,
    0x9f, 0xb6, 0x7e, 0xd9, 0xfb, 0x67, 0xe7, 0xe3,
    0x80, 0x3, 0x6, 0x3, 0xe0,

    /* U+0041 "A" */
    0x7f, 0x71, 0xf8, 0xfc, 0x7f, 0xff, 0x1f, 0x8f,
    0xc7, 0xe3, 0x80,

    /* U+0042 "B" */
    0xfe, 0xe7, 0xe7, 0xe7, 0xfe, 0xe7, 0xe7, 0xe7,
    0xfe,

    /* U+0043 "C" */
    0x7f, 0x71, 0xf8, 0xfc, 0x7e, 0x7, 0x1f, 0x8f,
    0xc7, 0x7f, 0x0,

    /* U+0044 "D" */
    0xfe, 0x73, 0xb8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xce, 0xfe, 0x0,

    /* U+0045 "E" */
    0xff, 0xc3, 0x87, 0xf, 0xdc, 0x38, 0x70, 0xfe,

    /* U+0046 "F" */
    0xff, 0xc3, 0x87, 0xf, 0xdc, 0x38, 0x70, 0xe0,

    /* U+0047 "G" */
    0x7f, 0x71, 0xf8, 0xfc, 0x7e, 0x7, 0x7f, 0x8f,
    0xc7, 0x7f, 0x0,

    /* U+0048 "H" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7f, 0xff, 0x1f, 0x8f,
    0xc7, 0xe3, 0x80,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xe0,

    /* U+004A "J" */
    0x3, 0x81, 0xc0, 0xe0, 0x70, 0x3f, 0x1f, 0x8f,
    0xc7, 0x7f, 0x0,

    /* U+004B "K" */
    0xe7, 0xe7, 0xee, 0xfc, 0xfc, 0xee, 0xe7, 0xe7,
    0xe7,

    /* U+004C "L" */
    0xe1, 0xc3, 0x87, 0xe, 0x1c, 0x38, 0x70, 0xfe,

    /* U+004D "M" */
    0xee, 0x3b, 0xdf, 0x7e, 0x71, 0xf9, 0xc7, 0xe7,
    0x1f, 0x9c, 0x7e, 0x71, 0xf9, 0xc7, 0xe7, 0x1c,

    /* U+004E "N" */
    0xe3, 0xf9, 0xfa, 0xfc, 0xfe, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0x80,

    /* U+004F "O" */
    0x7f, 0x71, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0x7f, 0x0,

    /* U+0050 "P" */
    0xfe, 0xe7, 0xe7, 0xe7, 0xe7, 0xfe, 0xe0, 0xe0,
    0xe0,

    /* U+0051 "Q" */
    0x7f, 0x71, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0xaf,
    0xcf, 0x7f, 0x0, 0xc0,

    /* U+0052 "R" */
    0xfe, 0xe7, 0xe7, 0xe7, 0xe7, 0xfe, 0xfc, 0xee,
    0xe7,

    /* U+0053 "S" */
    0x7e, 0xe3, 0xe0, 0xe0, 0x7e, 0x7, 0x7, 0xc7,
    0x7e,

    /* U+0054 "T" */
    0xff, 0x8e, 0x7, 0x3, 0x81, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0x0,

    /* U+0055 "U" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0x7f, 0x0,

    /* U+0056 "V" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x9d,
    0xce, 0x7e, 0x0,

    /* U+0057 "W" */
    0xe3, 0x87, 0xe3, 0x87, 0xe3, 0x87, 0xe3, 0x87,
    0xe3, 0x87, 0xe3, 0x87, 0xe7, 0x8e, 0xe7, 0x8e,
    0x7c, 0xfc,

    /* U+0058 "X" */
    0xe7, 0xe7, 0xe7, 0xe7, 0x3c, 0xe7, 0xe7, 0xe7,
    0xe7,

    /* U+0059 "Y" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x77, 0xf0, 0xe0, 0x70,
    0x38, 0x1c, 0x0,

    /* U+005A "Z" */
    0xfe, 0x1c, 0x38, 0xe3, 0x8e, 0x38, 0x70, 0xfe,

    /* U+005C "\\" */
    0xe1, 0xc1, 0xc3, 0x87, 0x7, 0xe, 0x1c, 0x1c,
    0x38, 0x70, 0x70, 0xe0,

    /* U+005E "^" */
    0x0,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0xcf, 0x30,

    /* U+0061 "a" */
    0x7e, 0xc7, 0x7, 0x7f, 0xe7, 0xe7, 0x7f,

    /* U+0062 "b" */
    0xe0, 0xe0, 0xe0, 0xfe, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xfe,

    /* U+0063 "c" */
    0x7e, 0xe7, 0xe7, 0xe0, 0xe7, 0xe7, 0x7e,

    /* U+0064 "d" */
    0x7, 0x7, 0x7, 0x7f, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0x7f,

    /* U+0065 "e" */
    0x7e, 0xe7, 0xe7, 0xff, 0xe0, 0xe3, 0x7e,

    /* U+0066 "f" */
    0x3d, 0xc7, 0x3f, 0x71, 0xc7, 0x1c, 0x71, 0xc0,

    /* U+0067 "g" */
    0x7f, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x7f, 0x7,
    0x87, 0x7e,

    /* U+0068 "h" */
    0xe0, 0xe0, 0xe0, 0xee, 0xf7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xe7,

    /* U+0069 "i" */
    0xfc, 0x7f, 0xff, 0xfc,

    /* U+006A "j" */
    0x39, 0xc0, 0x73, 0x9c, 0xe7, 0x39, 0xce, 0x7f,
    0x0,

    /* U+006B "k" */
    0xe0, 0xe0, 0xe0, 0xe7, 0xee, 0xfc, 0xfc, 0xee,
    0xe7, 0xe7,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+006D "m" */
    0xee, 0x3b, 0xdf, 0x7e, 0x71, 0xf9, 0xc7, 0xe7,
    0x1f, 0x9c, 0x7e, 0x71, 0xc0,

    /* U+006E "n" */
    0xee, 0xf7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,

    /* U+006F "o" */
    0x7e, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x7e,

    /* U+0070 "p" */
    0xfe, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xfe, 0xe0,
    0xe0, 0xe0,

    /* U+0071 "q" */
    0x7f, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0x7f, 0x7,
    0x7,

    /* U+0072 "r" */
    0xee, 0xf7, 0xe7, 0xe0, 0xe0, 0xe0, 0xe0,

    /* U+0073 "s" */
    0x7e, 0xe3, 0xe0, 0x7e, 0x7, 0xc7, 0x7e,

    /* U+0074 "t" */
    0x70, 0xe3, 0xf3, 0x87, 0xe, 0x1c, 0x39, 0x3c,

    /* U+0075 "u" */
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xef, 0x77,

    /* U+0076 "v" */
    0xe7, 0xe7, 0xe7, 0xe7, 0xee, 0xee, 0x7c,

    /* U+0077 "w" */
    0xe7, 0x1f, 0x9c, 0x7e, 0x71, 0xf9, 0xc7, 0xef,
    0x3b, 0xbc, 0xe7, 0xbe, 0x0,

    /* U+0078 "x" */
    0xe7, 0xe7, 0xe7, 0x3c, 0xe7, 0xe7, 0xe7,

    /* U+0079 "y" */
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xef, 0x77, 0x7,
    0x87, 0x7e,

    /* U+007A "z" */
    0xfe, 0x1c, 0x71, 0xc7, 0x1c, 0x3f, 0x80,

    /* U+007C "|" */
    0x0,

    /* U+007E "~" */
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 101, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 84, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 151, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 9, .adv_w = 202, .box_w = 11, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 18, .adv_w = 144, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 144, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 84, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 22, .adv_w = 101, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 31, .adv_w = 101, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 40, .adv_w = 118, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 43, .adv_w = 151, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 48, .adv_w = 50, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 50, .adv_w = 84, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 151, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 63, .adv_w = 168, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 101, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 168, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 168, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 185, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 151, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 168, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 144, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 168, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 168, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 84, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 84, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 155, .adv_w = 144, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 134, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 159, .adv_w = 144, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 151, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 252, .box_w = 14, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 190, .adv_w = 185, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 168, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 185, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 185, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 151, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 151, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 248, .adv_w = 185, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 185, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 84, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 185, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 168, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 151, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 252, .box_w = 14, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 185, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 185, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 168, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 185, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 361, .adv_w = 168, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 168, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 185, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 185, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 185, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 412, .adv_w = 286, .box_w = 16, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 168, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 185, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 151, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 151, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 470, .adv_w = 144, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 471, .adv_w = 134, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 472, .adv_w = 67, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 474, .adv_w = 168, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 481, .adv_w = 168, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 491, .adv_w = 168, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 498, .adv_w = 168, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 508, .adv_w = 168, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 515, .adv_w = 134, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 523, .adv_w = 168, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 533, .adv_w = 168, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 543, .adv_w = 84, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 547, .adv_w = 101, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 556, .adv_w = 168, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 566, .adv_w = 84, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 252, .box_w = 14, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 168, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 590, .adv_w = 168, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 597, .adv_w = 168, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 607, .adv_w = 168, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 616, .adv_w = 168, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 623, .adv_w = 168, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 630, .adv_w = 151, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 638, .adv_w = 168, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 645, .adv_w = 168, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 652, .adv_w = 252, .box_w = 14, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 665, .adv_w = 168, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 672, .adv_w = 168, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 682, .adv_w = 151, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 689, .adv_w = 144, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 690, .adv_w = 144, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint8_t glyph_id_ofs_list_0[] = {
    0, 1, 2, 3, 0, 4, 5, 6,
    7, 8, 9, 10, 11
};

static const uint8_t glyph_id_ofs_list_2[] = {
    0, 0, 1, 2, 3, 4, 5, 6,
    7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 20, 21, 22,
    23, 24, 25, 26, 27, 28, 29, 0,
    30, 0, 31
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 13, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_0, .list_length = 13, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    },
    {
        .range_start = 46, .range_length = 45, .glyph_id_start = 13,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 92, .range_length = 35, .glyph_id_start = 58,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_2, .list_length = 35, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 3,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t billy_bold_15 = {
#else
lv_font_t billy_bold_15 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if BILLY_BOLD_15*/

