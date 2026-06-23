/*******************************************************************************
 * Size: 12 px
 * Bpp: 2
 * Opts: --font /fonts/PFSquareSansPro-Regular.ttf -o /fonts/pf_square_regular_12_data.c --size 12 --bpp 2 --format lvgl --no-compress --symbols ℃ --range 0x20-0x7F
 ******************************************************************************/

#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif



#ifndef PF_SQUARE_REGULAR_12_DATA
#define PF_SQUARE_REGULAR_12_DATA 1
#endif

#if PF_SQUARE_REGULAR_12_DATA

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x33, 0x22, 0x22, 0x03,

    /* U+0022 "\"" */
    0x68, 0x60, 0x00,

    /* U+0023 "#" */
    0x02, 0x20, 0x15, 0x42, 0xee, 0x42, 0x20, 0x6e,
    0xe0, 0x55, 0x02, 0x20, 0x08, 0x80,

    /* U+0024 "$" */
    0x00, 0x00, 0x20, 0x1f, 0xd3, 0x00, 0x30, 0x02,
    0xe4, 0x01, 0xa0, 0x03, 0x00, 0x63, 0xfc, 0x02,
    0x00, 0x00,

    /* U+0025 "%" */
    0x00, 0x08, 0x03, 0x90, 0x40, 0x83, 0x20, 0x08,
    0x22, 0x68, 0x83, 0x58, 0x52, 0x99, 0x86, 0x00,
    0x98, 0x60, 0x20, 0x85, 0x02, 0x0a, 0x80,

    /* U+0026 "&" */
    0x0b, 0x80, 0x02, 0x20, 0x00, 0xdc, 0x00, 0x3c,
    0x08, 0x32, 0x42, 0x14, 0x37, 0x06, 0x07, 0x80,
    0xaa, 0x74, 0x00, 0x01, 0x00,

    /* U+0027 "'" */
    0x22, 0x00,

    /* U+0028 "(" */
    0x04, 0x12, 0x0c, 0x20, 0x82, 0x0c, 0x20, 0x20,
    0x00,

    /* U+0029 ")" */
    0x00, 0x81, 0x42, 0x0c, 0x30, 0xc6, 0x24, 0x80,
    0x00,

    /* U+002A "*" */
    0x04, 0x3c, 0x19, 0x00,

    /* U+002B "+" */
    0x08, 0x03, 0x0a, 0xe4, 0x30, 0x04, 0x00,

    /* U+002C "," */
    0x02, 0x20,

    /* U+002D "-" */
    0x6a, 0x00,

    /* U+002E "." */
    0x06,

    /* U+002F "/" */
    0x08, 0x21, 0x48, 0x20, 0x85, 0x20, 0x80,

    /* U+0030 "0" */
    0x1f, 0xc0, 0xc1, 0xc6, 0x03, 0x18, 0x08, 0x60,
    0x21, 0x80, 0xc3, 0x07, 0x07, 0xf0,

    /* U+0031 "1" */
    0x7c, 0x03, 0x00, 0xc0, 0x30, 0x0c, 0x03, 0x00,
    0xc2, 0xfe,

    /* U+0032 "2" */
    0x3f, 0x80, 0x06, 0x00, 0x60, 0x0d, 0x02, 0x80,
    0xa0, 0x28, 0x07, 0xfe,

    /* U+0033 "3" */
    0x7f, 0xe0, 0x1c, 0x07, 0x00, 0xf8, 0x00, 0x70,
    0x03, 0x00, 0x67, 0xf8,

    /* U+0034 "4" */
    0x00, 0xd0, 0x0f, 0x40, 0x99, 0x06, 0x24, 0x70,
    0x92, 0xff, 0xd0, 0x09, 0x00, 0x24,

    /* U+0035 "5" */
    0x2f, 0xd3, 0x00, 0x30, 0x02, 0xf8, 0x00, 0x70,
    0x03, 0x00, 0x63, 0xf8,

    /* U+0036 "6" */
    0x0f, 0xe0, 0xc0, 0x06, 0x00, 0x1f, 0xf4, 0x60,
    0x31, 0x80, 0xc3, 0x03, 0x0b, 0xf4,

    /* U+0037 "7" */
    0x7f, 0xf0, 0x06, 0x00, 0xc0, 0x18, 0x03, 0x00,
    0x60, 0x0c, 0x01, 0x80, 0x00, 0x00,

    /* U+0038 "8" */
    0x1f, 0xc0, 0xc1, 0xc7, 0x03, 0x0b, 0xb4, 0x34,
    0xa2, 0x40, 0xc6, 0x03, 0x0b, 0xf4,

    /* U+0039 "9" */
    0x1f, 0xd1, 0xc0, 0xc6, 0x03, 0x18, 0x0c, 0x2f,
    0xf0, 0x00, 0xc0, 0x06, 0x0f, 0xe0,

    /* U+003A ":" */
    0x60, 0x00, 0x60,

    /* U+003B ";" */
    0x60, 0x00, 0x62, 0x40,

    /* U+003C "<" */
    0x00, 0x42, 0xcb, 0x42, 0x80, 0x0a, 0x00, 0x50,

    /* U+003D "=" */
    0xaa, 0x40, 0x0a, 0xa4,

    /* U+003E ">" */
    0x40, 0x1d, 0x00, 0xb4, 0x1d, 0x38, 0x20, 0x00,

    /* U+003F "?" */
    0xbd, 0x03, 0x07, 0x18, 0x30, 0x20, 0x00, 0x30,

    /* U+0040 "@" */
    0x02, 0xa9, 0x01, 0x9a, 0x18, 0x20, 0x04, 0x85,
    0x1a, 0x84, 0x52, 0x08, 0x82, 0x29, 0xa4, 0x14,
    0x00, 0x00, 0x6a, 0x40,

    /* U+0041 "A" */
    0x07, 0x00, 0x29, 0x00, 0xd8, 0x06, 0x30, 0x20,
    0x80, 0xff, 0x86, 0x03, 0x24, 0x0c,

    /* U+0042 "B" */
    0x3f, 0xd0, 0xc0, 0xc3, 0x07, 0x0f, 0xf4, 0x30,
    0x30, 0xc0, 0xc3, 0x03, 0x0f, 0xf4,

    /* U+0043 "C" */
    0x0b, 0xf0, 0x90, 0x03, 0x00, 0x0c, 0x00, 0x30,
    0x00, 0xc0, 0x03, 0x40, 0x02, 0xfc,

    /* U+0044 "D" */
    0x3f, 0xd0, 0xc0, 0xc3, 0x02, 0x4c, 0x06, 0x30,
    0x18, 0xc0, 0x93, 0x03, 0x0f, 0xf4,

    /* U+0045 "E" */
    0x3f, 0xd3, 0x00, 0x30, 0x03, 0xfc, 0x30, 0x03,
    0x00, 0x30, 0x03, 0xfd,

    /* U+0046 "F" */
    0x3f, 0xd3, 0x00, 0x30, 0x03, 0xfc, 0x30, 0x03,
    0x00, 0x30, 0x03, 0x00,

    /* U+0047 "G" */
    0x0b, 0xf0, 0x90, 0x03, 0x00, 0x0c, 0x00, 0x30,
    0xb4, 0xc0, 0x92, 0x42, 0x42, 0xfd,

    /* U+0048 "H" */
    0x30, 0x24, 0xc0, 0x93, 0x02, 0x4f, 0xfd, 0x30,
    0x24, 0xc0, 0x93, 0x02, 0x4c, 0x09,

    /* U+0049 "I" */
    0xff, 0xff,

    /* U+004A "J" */
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xbd,

    /* U+004B "K" */
    0x30, 0x30, 0xc3, 0x43, 0x24, 0x0d, 0xc0, 0x3e,
    0x40, 0xc3, 0x03, 0x06, 0x08, 0x0c,

    /* U+004C "L" */
    0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03,
    0x00, 0x30, 0x03, 0xfd,

    /* U+004D "M" */
    0x30, 0x03, 0x34, 0x0b, 0x3c, 0x0f, 0x39, 0x27,
    0x33, 0x33, 0x32, 0xd3, 0x30, 0x83, 0x30, 0x03,

    /* U+004E "N" */
    0x30, 0x08, 0xe0, 0x23, 0x90, 0x8c, 0xc2, 0x31,
    0x88, 0xc3, 0x63, 0x03, 0x8c, 0x06,

    /* U+004F "O" */
    0x0b, 0xe0, 0xd0, 0x93, 0x00, 0xc8, 0x03, 0x20,
    0x0c, 0xc0, 0x33, 0x42, 0x42, 0xf8,

    /* U+0050 "P" */
    0x3f, 0x83, 0x06, 0x30, 0x33, 0x06, 0x3f, 0x83,
    0x00, 0x30, 0x03, 0x00,

    /* U+0051 "Q" */
    0x0b, 0xe0, 0x34, 0x24, 0x30, 0x0c, 0x30, 0x0c,
    0x30, 0x0c, 0x30, 0x0c, 0x34, 0x24, 0x0b, 0xf0,
    0x00, 0x2c,

    /* U+0052 "R" */
    0x3f, 0x82, 0x0a, 0x20, 0x62, 0x0a, 0x3f, 0x82,
    0x18, 0x20, 0xc2, 0x06,

    /* U+0053 "S" */
    0x2f, 0xd6, 0x00, 0x60, 0x03, 0x90, 0x01, 0xd0,
    0x02, 0x00, 0x63, 0xf8,

    /* U+0054 "T" */
    0xbf, 0xd0, 0x90, 0x09, 0x00, 0x90, 0x09, 0x00,
    0x90, 0x09, 0x00, 0x90,

    /* U+0055 "U" */
    0x30, 0x14, 0xc0, 0x53, 0x01, 0x4c, 0x05, 0x30,
    0x14, 0xc0, 0x53, 0x03, 0x03, 0xf4,

    /* U+0056 "V" */
    0x90, 0x25, 0x80, 0xc3, 0x06, 0x09, 0x24, 0x18,
    0xc0, 0x32, 0x00, 0xb4, 0x01, 0xc0,

    /* U+0057 "W" */
    0x90, 0xc0, 0x96, 0x09, 0x0c, 0x30, 0xe0, 0xc3,
    0x0f, 0x18, 0x25, 0xb2, 0x40, 0xa1, 0x70, 0x0f,
    0x0e, 0x00, 0xa0, 0xd0,

    /* U+0058 "X" */
    0x00, 0x01, 0x81, 0x83, 0x0c, 0x03, 0x90, 0x0b,
    0x00, 0x2c, 0x01, 0x98, 0x0c, 0x30, 0x90, 0x30,

    /* U+0059 "Y" */
    0x90, 0x63, 0x0c, 0x15, 0x80, 0xf0, 0x06, 0x00,
    0x60, 0x06, 0x00, 0x50,

    /* U+005A "Z" */
    0x3f, 0xd0, 0x0c, 0x02, 0x40, 0x70, 0x0c, 0x02,
    0x80, 0x30, 0x0b, 0xfd,

    /* U+005B "[" */
    0x76, 0x49, 0x24, 0x92, 0x49, 0x24, 0x91, 0xd0,

    /* U+005C "\\" */
    0x82, 0x05, 0x08, 0x20, 0x81, 0x42, 0x08,

    /* U+005D "]" */
    0x78, 0x61, 0x86, 0x18, 0x61, 0x86, 0x19, 0xd0,

    /* U+005E "^" */
    0x0f, 0x02, 0x54, 0x50, 0x80, 0x00,

    /* U+005F "_" */
    0x2a, 0xa8,

    /* U+0060 "`" */
    0x10, 0x90, 0x40,

    /* U+0061 "a" */
    0x2f, 0x80, 0x09, 0x2b, 0xd6, 0x09, 0x50, 0xd3,
    0xab,

    /* U+0062 "b" */
    0x60, 0x06, 0x00, 0x60, 0x07, 0xf8, 0x60, 0x96,
    0x06, 0x60, 0x66, 0x09, 0x3f, 0x80,

    /* U+0063 "c" */
    0x2f, 0x8c, 0x06, 0x01, 0x80, 0x70, 0x0b, 0xe0,

    /* U+0064 "d" */
    0x00, 0x50, 0x05, 0x00, 0x52, 0xfd, 0x60, 0x56,
    0x05, 0x50, 0x56, 0x09, 0x2a, 0x90,

    /* U+0065 "e" */
    0x1f, 0x82, 0x09, 0x7f, 0xd6, 0x00, 0x30, 0x02,
    0xf8,

    /* U+0066 "f" */
    0x0f, 0x48, 0x03, 0x01, 0xf8, 0x30, 0x0c, 0x03,
    0x00, 0xc0, 0x30, 0x00,

    /* U+0067 "g" */
    0x1f, 0xd3, 0x06, 0x60, 0x66, 0x06, 0x30, 0x62,
    0xfe, 0x00, 0x92, 0xfc,

    /* U+0068 "h" */
    0x60, 0x06, 0x00, 0x60, 0x06, 0xbc, 0x60, 0x96,
    0x05, 0x60, 0x56, 0x05, 0x60, 0x50,

    /* U+0069 "i" */
    0x20, 0x33, 0x33, 0x33,

    /* U+006A "j" */
    0x0c, 0x00, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
    0x0c, 0x28, 0x50,

    /* U+006B "k" */
    0x20, 0x06, 0x00, 0x60, 0x06, 0x18, 0x63, 0x06,
    0xd0, 0x7b, 0x06, 0x24, 0x20, 0xc0,

    /* U+006C "l" */
    0x20, 0xc3, 0x0c, 0x30, 0xc3, 0x0c, 0x34,

    /* U+006D "m" */
    0x6a, 0xdb, 0x86, 0x09, 0x0c, 0x60, 0x90, 0xc6,
    0x09, 0x0c, 0x60, 0x90, 0xc6, 0x09, 0x0c,

    /* U+006E "n" */
    0x6a, 0xc6, 0x09, 0x60, 0x56, 0x05, 0x60, 0x56,
    0x05,

    /* U+006F "o" */
    0x2f, 0x83, 0x0d, 0x60, 0x56, 0x05, 0x70, 0xd2,
    0xf8,

    /* U+0070 "p" */
    0x6a, 0x86, 0x09, 0x60, 0x66, 0x06, 0x60, 0x97,
    0xf8, 0x60, 0x06, 0x00,

    /* U+0071 "q" */
    0x1f, 0xd3, 0x06, 0x60, 0x66, 0x06, 0x70, 0x62,
    0xfe, 0x00, 0x60, 0x06,

    /* U+0072 "r" */
    0x00, 0x3b, 0x30, 0x30, 0x30, 0x30, 0x30,

    /* U+0073 "s" */
    0x2f, 0x58, 0x03, 0x90, 0x1a, 0x01, 0x9f, 0xc0,

    /* U+0074 "t" */
    0x10, 0x30, 0xbd, 0x30, 0x30, 0x30, 0x30, 0x2e,

    /* U+0075 "u" */
    0x60, 0x56, 0x05, 0x60, 0x56, 0x05, 0x60, 0x92,
    0xa9,

    /* U+0076 "v" */
    0x90, 0x86, 0x0c, 0x31, 0x82, 0x60, 0x0b, 0x00,
    0xd0,

    /* U+0077 "w" */
    0x92, 0x43, 0x18, 0x61, 0x83, 0x2c, 0x90, 0x8e,
    0x70, 0x1d, 0x38, 0x03, 0x0d, 0x00,

    /* U+0078 "x" */
    0x91, 0x83, 0x30, 0x0d, 0x01, 0xd0, 0x33, 0x09,
    0x1c,

    /* U+0079 "y" */
    0x90, 0x82, 0x0c, 0x31, 0x81, 0x60, 0x0f, 0x00,
    0x90, 0x0c, 0x00, 0x80,

    /* U+007A "z" */
    0x7f, 0x80, 0xc0, 0x90, 0x60, 0x30, 0x2f, 0xe0,

    /* U+007B "{" */
    0x38, 0xc3, 0x0c, 0x60, 0x83, 0x0c, 0x30, 0xa0,

    /* U+007C "|" */
    0xaa, 0xaa, 0xa0,

    /* U+007D "}" */
    0x70, 0xc3, 0x0c, 0x24, 0x93, 0x0c, 0x31, 0xc0,

    /* U+007E "~" */
    0x2e, 0x10, 0x1d,

    /* U+2103 "℃" */
    0x00, 0x00, 0x02, 0x82, 0xfd, 0x82, 0x60, 0x02,
    0x8c, 0x00, 0x00, 0xc0, 0x00, 0x0c, 0x00, 0x00,
    0xc0, 0x00, 0x06, 0x00, 0x00, 0x2f, 0xd0, 0x00,
    0x00
};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 52, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 43, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 54, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 7, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 107, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 39, .adv_w = 157, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 133, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 83, .adv_w = 39, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 85, .adv_w = 55, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 94, .adv_w = 56, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 103, .adv_w = 66, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 107, .adv_w = 107, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 114, .adv_w = 37, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 116, .adv_w = 71, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 118, .adv_w = 36, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 49, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 107, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 228, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 37, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 37, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 263, .adv_w = 107, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 271, .adv_w = 107, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 275, .adv_w = 107, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 283, .adv_w = 68, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 291, .adv_w = 156, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 311, .adv_w = 105, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 103, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 118, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 97, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 92, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 391, .adv_w = 116, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 114, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 419, .adv_w = 49, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 80, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 106, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 443, .adv_w = 93, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 142, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 471, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 99, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 511, .adv_w = 123, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 529, .adv_w = 101, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 101, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 553, .adv_w = 92, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 565, .adv_w = 117, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 579, .adv_w = 107, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 593, .adv_w = 156, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 613, .adv_w = 100, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 629, .adv_w = 97, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 94, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 49, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 661, .adv_w = 49, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 668, .adv_w = 48, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 676, .adv_w = 94, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 682, .adv_w = 96, .box_w = 8, .box_h = 1, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 684, .adv_w = 96, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 687, .adv_w = 99, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 98, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 710, .adv_w = 82, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 718, .adv_w = 98, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 94, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 741, .adv_w = 70, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 753, .adv_w = 98, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 765, .adv_w = 98, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 779, .adv_w = 43, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 783, .adv_w = 46, .box_w = 4, .box_h = 11, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 794, .adv_w = 86, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 808, .adv_w = 46, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 815, .adv_w = 156, .box_w = 10, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 830, .adv_w = 97, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 839, .adv_w = 97, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 848, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 860, .adv_w = 98, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 872, .adv_w = 63, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 879, .adv_w = 84, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 887, .adv_w = 62, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 895, .adv_w = 98, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 904, .adv_w = 89, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 913, .adv_w = 132, .box_w = 9, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 927, .adv_w = 83, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 936, .adv_w = 89, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 948, .adv_w = 83, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 956, .adv_w = 51, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 964, .adv_w = 46, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 967, .adv_w = 51, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 975, .adv_w = 107, .box_w = 6, .box_h = 2, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 978, .adv_w = 155, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 8451, .range_length = 1, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/

/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 3, 4, 5, 0, 6,
    0, 0, 0, 0, 7, 8, 0, 0,
    5, 9, 5, 10, 0, 11, 0, 12,
    12, 0, 13, 14, 0, 0, 0, 0,
    0, 0, 0, 15, 0, 0, 0, 16,
    0, 0, 0, 0, 17, 0, 0, 0,
    15, 15, 0, 18, 0, 0, 0, 19,
    19, 0, 19, 0, 0, 0, 0, 0,
    0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 2, 3, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 4, 4, 0, 0, 0,
    0, 0, 5, 0, 6, 0, 0, 0,
    6, 0, 0, 7, 0, 0, 0, 0,
    6, 0, 6, 0, 0, 8, 0, 9,
    9, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 12, 12, 12, 0,
    12, 0, 13, 0, 0, 0, 13, 13,
    12, 13, 12, 14, 15, 0, 16, 17,
    17, 0, 17, 0, 0, 0, 0, 0,
    0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, -6, 0, 0, 0, 0, -2, 0,
    -8, -6, -8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -6, -4, -4, -4, 0, 0,
    0, 0, 0, 0, 0, 0, -13, 0,
    0, -8, -2, -13, 0, 0, 0, -6,
    0, -2, -2, -4, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, -13,
    0, -10, 0, 0, -6, 0, -13, -12,
    -13, 0, 0, 0, 0, 0, 0, -6,
    0, -15, 0, 0, -6, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, -4, 0, 0, 0, 0, 0,
    0, 0, 0, -8, -12, -10, -8, -4,
    0, 0, 0, 0, -8, -8, -6, -12,
    -8, -6, 0, 0, -13, 0, -8, -6,
    -4, 0, 0, 0, 0, -6, -6, -4,
    -10, -4, 0, 0, 0, -13, -8, -10,
    -10, -4, 0, 0, 0, 0, -10, -12,
    -12, -15, -10, -8, -10, 0, 0, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, -10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 19,
    .right_class_cnt     = 17,
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
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 2,
    .kern_classes = 1,
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
const lv_font_t pf_square_regular_12_data = {
#else
lv_font_t pf_square_regular_12_data = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 13,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif

#if LV_VERSION_CHECK(9, 3, 0)
    .static_bitmap = 1,    /*Bitmaps are stored as const so they are always static if not compressed */
#endif

    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if PF_SQUARE_REGULAR_12_DATA*/
