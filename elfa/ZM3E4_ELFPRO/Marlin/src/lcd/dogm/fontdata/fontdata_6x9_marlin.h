/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
  Fontname: -Misc-Fixed-Medium-R-Normal--9-90-75-75-C-60-ISO10646-1
  Copyright: Public domain font.  Share and enjoy.
  Capital A Height: 6, '1' Height: 6
  Calculated Max Values w= 6 h= 9 x= 5 y= 5 dx= 6 dy= 0 ascent= 7 len= 9
  Font Bounding box     w= 6 h= 9 x= 0 y=-2
  Calculated Min Values           x= 0 y=-2 dx= 0 dy= 0
  Pure Font   ascent = 6 descent=-2
  X Font      ascent = 6 descent=-2
  Max Font    ascent = 7 descent=-2
*/
#include <U8glib.h>
const u8g_fntpgm_uint8_t u8g_font_6x9[2434] U8G_FONT_SECTION(".progmem.u8g_font_6x9") = {
  0x00,0x06,0x09,0x00,0xfe,0x06,0x02,0x0f,0x03,0x84,0x01,0xff,0xfe,0x07,0xfe,0x06,
  0xfe,0x05,0x07,0x07,0x00,0x00,0x00,0x40,0xf0,0xc8,0x88,0x98,0x78,0x10,0x05,0x07,
  0x07,0x00,0x00,0x00,0xc0,0xf8,0x88,0x88,0x88,0x88,0xf8,0x05,0x05,0x05,0x00,0x00,
  0x01,0x20,0x30,0xf8,0x30,0x20,0x05,0x07,0x07,0x00,0x00,0x00,0x20,0x70,0xf8,0x20,
  0x20,0x20,0xe0,0x05,0x07,0x07,0x00,0x00,0x00,0x20,0x70,0xa8,0xb8,0x88,0x70,0x20,
  0x06,0x05,0x05,0x00,0x00,0x00,0xb0,0xd8,0x6c,0xd8,0xb0,0x05,0x08,0x08,0x00,0x00,
  0xff,0xf8,0xa8,0x88,0x88,0x88,0x88,0xa8,0xf8,0x05,0x09,0x09,0x00,0x00,0xfe,0x20,
  0x50,0x50,0x50,0x50,0x88,0xa8,0x88,0x70,0x03,0x03,0x03,0x00,0x00,0x03,0x40,0xa0,
  0x40,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x06,0x05,0xff,0x01,0x06,0x06,
  0x06,0x02,0x00,0x80,0x80,0x80,0x80,0x00,0x80,0x03,0x03,0x03,0x06,0x01,0x03,0xa0,
  0xa0,0xa0,0x05,0x07,0x07,0x06,0x00,0xff,0x50,0x50,0xf8,0x50,0xf8,0x50,0x50,0x05,
  0x09,0x09,0x06,0x00,0xfe,0x20,0x70,0xa8,0xa0,0x70,0x28,0xa8,0x70,0x20,0x06,0x08,
  0x08,0x06,0x00,0xff,0x40,0xa8,0x48,0x10,0x20,0x48,0x54,0x08,0x05,0x07,0x07,0x06,
  0x00,0xff,0x60,0x90,0x90,0x60,0x98,0x90,0x68,0x01,0x03,0x03,0x06,0x02,0x03,0x80,
  0x80,0x80,0x02,0x07,0x07,0x06,0x02,0xff,0x40,0x80,0x80,0x80,0x80,0x80,0x40,0x02,
  0x07,0x07,0x06,0x02,0xff,0x80,0x40,0x40,0x40,0x40,0x40,0x80,0x05,0x05,0x05,0x06,
  0x00,0x00,0x88,0x50,0xf8,0x50,0x88,0x05,0x05,0x05,0x06,0x00,0x00,0x20,0x20,0xf8,
  0x20,0x20,0x02,0x04,0x04,0x06,0x02,0xfe,0xc0,0x40,0x40,0x80,0x05,0x01,0x01,0x06,
  0x00,0x02,0xf8,0x02,0x02,0x02,0x06,0x02,0x00,0xc0,0xc0,0x04,0x06,0x06,0x06,0x01,
  0x00,0x10,0x10,0x20,0x40,0x80,0x80,0x04,0x06,0x06,0x06,0x01,0x00,0x60,0x90,0x90,
  0x90,0x90,0x60,0x03,0x06,0x06,0x06,0x01,0x00,0x40,0xc0,0x40,0x40,0x40,0xe0,0x04,
  0x06,0x06,0x06,0x01,0x00,0x60,0x90,0x10,0x20,0x40,0xf0,0x04,0x06,0x06,0x06,0x01,
  0x00,0xf0,0x20,0x60,0x10,0x10,0xe0,0x05,0x06,0x06,0x06,0x00,0x00,0x10,0x30,0x50,
  0x90,0xf8,0x10,0x04,0x06,0x06,0x06,0x01,0x00,0xf0,0x80,0xe0,0x10,0x10,0xe0,0x04,
  0x06,0x06,0x06,0x01,0x00,0x60,0x80,0xe0,0x90,0x90,0x60,0x04,0x06,0x06,0x06,0x01,
  0x00,0xf0,0x10,0x10,0x20,0x40,0x40,0x04,0x06,0x06,0x06,0x01,0x00,0x60,0x90,0x60,
  0x90,0x90,0x60,0x04,0x06,0x06,0x06,0x01,0x00,0x60,0x90,0x90,0x70,0x10,0x60,0x02,
  0x05,0x05,0x06,0x02,0x00,0xc0,0xc0,0x00,0xc0,0xc0,0x02,0x07,0x07,0x06,0x02,0xfe,
  0xc0,0xc0,0x00,0xc0,0x40,0x40,0x80,0x05,0x05,0x05,0x06,0x00,0x00,0x18,0x60,0x80,
  0x60,0x18,0x05,0x03,0x03,0x06,0x00,0x01,0xf8,0x00,0xf8,0x05,0x05,0x05,0x06,0x00,
  0x00,0xc0,0x30,0x08,0x30,0xc0,0x04,0x07,0x07,0x06,0x01,0x00,0x60,0x90,0x10,0x60,
  0x40,0x00,0x40,0x05,0x06,0x06,0x06,0x00,0x00,0x70,0x90,0xa8,0xb0,0x80,0x70,0x05,
  0x06,0x06,0x06,0x00,0x00,0x20,0x50,0x88,0xf8,0x88,0x88,0x05,0x06,0x06,0x06,0x00,
  0x00,0xf0,0x88,0xf0,0x88,0x88,0xf0,0x04,0x06,0x06,0x06,0x01,0x00,0x60,0x90,0x80,
  0x80,0x90,0x60,0x04,0x06,0x06,0x06,0x01,0x00,0xe0,0x90,0x90,0x90,0x90,0xe0,0x04,
  0x06,0x06,0x06,0x01,0x00,0xf0,0x80,0xe0,0x80,0x80,0xf0,0x04,0x06,0x06,0x06,0x01,
  0x00,0xf0,0x80,0xe0,0x80,0x80,0x80,0x04,0x06,0x06,0x06,0x01,0x00,0x60,0x90,0x80,
  0xb0,0x90,0x60,0x04,0x06,0x06,0x06,0x01,0x00,0x90,0x90,0xf0,0x90,0x90,0x90,0x03,
  0x06,0x06,0x06,0x01,0x00,0xe0,0x40,0x40,0x40,0x40,0xe0,0x05,0x06,0x06,0x06,0x00,
  0x00,0x38,0x10,0x10,0x10,0x90,0x60,0x04,0x06,0x06,0x06,0x01,0x00,0x90,0xa0,0xc0,
  0xa0,0x90,0x90,0x04,0x06,0x06,0x06,0x01,0x00,0x80,0x80,0x80,0x80,0x80,0xf0,0x05,
  0x06,0x06,0x06,0x00,0x00,0x88,0xd8,0xa8,0xa8,0x88,0x88,0x04,0x06,0x06,0x06,0x01,
  0x00,0x90,0xd0,0xb0,0x90,0x90,0x90,0x05,0x06,0x06,0x06,0x00,0x00,0x70,0x88,0x88,
  0x88,0x88,0x70,0x04,0x06,0x06,0x06,0x01,0x00,0xe0,0x90,0x90,0xe0,0x80,0x80,0x04,
  0x07,0x07,0x06,0x01,0xff,0x60,0x90,0x90,0xd0,0xb0,0x60,0x10,0x04,0x06,0x06,0x06,
  0x01,0x00,0xe0,0x90,0x90,0xe0,0x90,0x90,0x04,0x06,0x06,0x06,0x01,0x00,0x60,0x90,
  0x40,0x20,0x90,0x60,0x05,0x06,0x06,0x06,0x00,0x00,0xf8,0x20,0x20,0x20,0x20,0x20,
  0x04,0x06,0x06,0x06,0x01,0x00,0x90,0x90,0x90,0x90,0x90,0x60,0x04,0x06,0x06,0x06,
  0x01,0x00,0x90,0x90,0x90,0xf0,0x60,0x60,0x05,0x06,0x06,0x06,0x00,0x00,0x88,0x88,
  0xa8,0xa8,0xd8,0x88,0x05,0x06,0x06,0x06,0x00,0x00,0x88,0x50,0x20,0x20,0x50,0x88,
  0x05,0x06,0x06,0x06,0x00,0x00,0x88,0x88,0x50,0x20,0x20,0x20,0x04,0x06,0x06,0x06,
  0x01,0x00,0xf0,0x10,0x20,0x40,0x80,0xf0,0x03,0x06,0x06,0x06,0x01,0x00,0xe0,0x80,
  0x80,0x80,0x80,0xe0,0x04,0x06,0x06,0x06,0x01,0x00,0x80,0x80,0x40,0x20,0x10,0x10,
  0x03,0x06,0x06,0x06,0x01,0x00,0xe0,0x20,0x20,0x20,0x20,0xe0,0x05,0x03,0x03,0x06,
  0x00,0x03,0x20,0x50,0x88,0x05,0x01,0x01,0x06,0x00,0xfe,0xf8,0x02,0x02,0x02,0x06,
  0x02,0x04,0x80,0x40,0x04,0x04,0x04,0x06,0x01,0x00,0x70,0x90,0x90,0x70,0x04,0x06,
  0x06,0x06,0x01,0x00,0x80,0x80,0xe0,0x90,0x90,0xe0,0x04,0x04,0x04,0x06,0x01,0x00,
  0x70,0x80,0x80,0x70,0x04,0x06,0x06,0x06,0x01,0x00,0x10,0x10,0x70,0x90,0x90,0x70,
  0x04,0x04,0x04,0x06,0x01,0x00,0x60,0xb0,0xc0,0x70,0x04,0x06,0x06,0x06,0x01,0x00,
  0x20,0x50,0x40,0xe0,0x40,0x40,0x04,0x06,0x06,0x06,0x01,0xfe,0x60,0x90,0x90,0x70,
  0x10,0x60,0x04,0x06,0x06,0x06,0x01,0x00,0x80,0x80,0xe0,0x90,0x90,0x90,0x03,0x06,
  0x06,0x06,0x01,0x00,0x40,0x00,0xc0,0x40,0x40,0xe0,0x03,0x08,0x08,0x06,0x01,0xfe,
  0x20,0x00,0x60,0x20,0x20,0x20,0xa0,0x40,0x04,0x06,0x06,0x06,0x01,0x00,0x80,0x80,
  0xa0,0xc0,0xa0,0x90,0x03,0x06,0x06,0x06,0x01,0x00,0xc0,0x40,0x40,0x40,0x40,0xe0,
  0x05,0x04,0x04,0x06,0x00,0x00,0xd0,0xa8,0xa8,0x88,0x04,0x04,0x04,0x06,0x01,0x00,
  0xe0,0x90,0x90,0x90,0x04,0x04,0x04,0x06,0x01,0x00,0x60,0x90,0x90,0x60,0x04,0x06,
  0x06,0x06,0x01,0xfe,0xe0,0x90,0x90,0xe0,0x80,0x80,0x04,0x06,0x06,0x06,0x01,0xfe,
  0x70,0x90,0x90,0x70,0x10,0x10,0x04,0x04,0x04,0x06,0x01,0x00,0xa0,0xd0,0x80,0x80,
  0x04,0x04,0x04,0x06,0x01,0x00,0x70,0xc0,0x30,0xe0,0x04,0x06,0x06,0x06,0x01,0x00,
  0x40,0x40,0xe0,0x40,0x50,0x20,0x04,0x04,0x04,0x06,0x01,0x00,0x90,0x90,0x90,0x70,
  0x04,0x04,0x04,0x06,0x01,0x00,0x90,0x90,0x60,0x60,0x05,0x04,0x04,0x06,0x00,0x00,
  0x88,0xa8,0xa8,0x50,0x04,0x04,0x04,0x06,0x01,0x00,0x90,0x60,0x60,0x90,0x04,0x06,
  0x06,0x06,0x01,0xfe,0x90,0x90,0x90,0x70,0x90,0x60,0x04,0x04,0x04,0x06,0x01,0x00,
  0xf0,0x20,0x40,0xf0,0x03,0x07,0x07,0x06,0x01,0x00,0x20,0x40,0x40,0x80,0x40,0x40,
  0x20,0x01,0x07,0x07,0x06,0x02,0xff,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x03,0x07,
  0x07,0x06,0x01,0x00,0x80,0x40,0x40,0x20,0x40,0x40,0x80,0x04,0x02,0x02,0x06,0x01,
  0x03,0x50,0xa0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x06,0x05,0xff,0x01,0x06,0x06,0x06,0x02,0x00,
  0x80,0x00,0x80,0x80,0x80,0x80,0x04,0x06,0x06,0x06,0x01,0xff,0x20,0x70,0xa0,0xa0,
  0x70,0x20,0x05,0x07,0x07,0x06,0x00,0xff,0x30,0x48,0x40,0xf0,0x40,0x40,0xf8,0x05,
  0x05,0x05,0x06,0x00,0x00,0xa8,0x50,0x88,0x50,0xa8,0x05,0x06,0x06,0x06,0x00,0x00,
  0x88,0x50,0xf8,0x20,0xf8,0x20,0x01,0x07,0x07,0x06,0x02,0xff,0x80,0x80,0x80,0x00,
  0x80,0x80,0x80,0x04,0x07,0x07,0x06,0x01,0xff,0x70,0x80,0x60,0x90,0x60,0x10,0xe0,
  0x03,0x01,0x01,0x06,0x01,0x05,0xa0,0x06,0x07,0x07,0x06,0x00,0x00,0x78,0x84,0x94,
  0xa4,0x94,0x84,0x78,0x03,0x05,0x05,0x06,0x01,0x01,0x60,0xa0,0x60,0x00,0xe0,0x05,
  0x05,0x05,0x06,0x00,0x00,0x28,0x50,0xa0,0x50,0x28,0x04,0x03,0x03,0x06,0x01,0x00,
  0xf0,0x10,0x10,0x04,0x01,0x01,0x06,0x01,0x02,0xf0,0x06,0x07,0x07,0x06,0x00,0x00,
  0x78,0x84,0xb4,0xa4,0xa4,0x84,0x78,0x04,0x01,0x01,0x06,0x01,0x05,0xf0,0x04,0x03,
  0x03,0x06,0x01,0x02,0x60,0x90,0x60,0x05,0x07,0x07,0x06,0x00,0xff,0x20,0x20,0xf8,
  0x20,0x20,0x00,0xf8,0x03,0x05,0x05,0x06,0x01,0x01,0x40,0xa0,0x20,0x40,0xe0,0x03,
  0x05,0x05,0x06,0x01,0x01,0xc0,0x20,0x40,0x20,0xc0,0x02,0x02,0x02,0x06,0x02,0x04,
  0x40,0x80,0x04,0x05,0x05,0x06,0x01,0xff,0x90,0x90,0xb0,0xd0,0x80,0x05,0x06,0x06,
  0x06,0x00,0x00,0x78,0xe8,0xe8,0x68,0x28,0x28,0x01,0x01,0x01,0x06,0x02,0x02,0x80,
  0x02,0x02,0x02,0x06,0x02,0xfe,0x40,0x80,0x03,0x05,0x05,0x06,0x01,0x01,0x40,0xc0,
  0x40,0x40,0xe0,0x03,0x05,0x05,0x06,0x01,0x01,0x40,0xa0,0x40,0x00,0xe0,0x05,0x05,
  0x05,0x06,0x00,0x00,0xa0,0x50,0x28,0x50,0xa0,0x05,0x08,0x08,0x06,0x00,0xff,0x40,
  0xc0,0x40,0x50,0x70,0x30,0x78,0x10,0x05,0x08,0x08,0x06,0x00,0xff,0x40,0xc0,0x40,
  0x50,0x68,0x08,0x10,0x38,0x05,0x08,0x08,0x06,0x00,0xff,0xc0,0x20,0x40,0x30,0xf0,
  0x30,0x78,0x10,0x04,0x07,0x07,0x06,0x01,0x00,0x20,0x00,0x20,0x60,0x80,0x90,0x60,
  0x05,0x07,0x07,0x06,0x00,0x00,0x40,0x20,0x20,0x50,0x70,0x88,0x88,0x05,0x07,0x07,
  0x06,0x00,0x00,0x10,0x20,0x20,0x50,0x70,0x88,0x88,0x05,0x07,0x07,0x06,0x00,0x00,
  0x20,0x50,0x20,0x50,0x70,0x88,0x88,0x05,0x07,0x07,0x06,0x00,0x00,0x28,0x50,0x20,
  0x50,0x70,0x88,0x88,0x05,0x07,0x07,0x06,0x00,0x00,0x50,0x00,0x20,0x50,0x70,0x88,
  0x88,0x05,0x07,0x07,0x06,0x00,0x00,0x20,0x50,0x20,0x50,0x70,0x88,0x88,0x05,0x06,
  0x06,0x06,0x00,0x00,0x78,0xa0,0xf0,0xa0,0xa0,0xb8,0x04,0x08,0x08,0x06,0x01,0xfe,
  0x60,0x90,0x80,0x80,0x90,0x60,0x20,0x40,0x04,0x07,0x07,0x06,0x01,0x00,0x40,0x20,
  0xf0,0x80,0xe0,0x80,0xf0,0x04,0x07,0x07,0x06,0x01,0x00,0x20,0x40,0xf0,0x80,0xe0,
  0x80,0xf0,0x04,0x07,0x07,0x06,0x01,0x00,0x20,0x50,0xf0,0x80,0xe0,0x80,0xf0,0x04,
  0x07,0x07,0x06,0x01,0x00,0x50,0x00,0xf0,0x80,0xe0,0x80,0xf0,0x03,0x07,0x07,0x06,
  0x01,0x00,0x80,0x40,0xe0,0x40,0x40,0x40,0xe0,0x03,0x07,0x07,0x06,0x01,0x00,0x20,
  0x40,0xe0,0x40,0x40,0x40,0xe0,0x03,0x07,0x07,0x06,0x01,0x00,0x40,0xa0,0xe0,0x40,
  0x40,0x40,0xe0,0x03,0x07,0x07,0x06,0x01,0x00,0xa0,0x00,0xe0,0x40,0x40,0x40,0xe0,
  0x05,0x06,0x06,0x06,0x00,0x00,0x70,0x48,0xe8,0x48,0x48,0x70,0x04,0x07,0x07,0x06,
  0x01,0x00,0x50,0xa0,0x90,0xd0,0xb0,0x90,0x90,0x04,0x07,0x07,0x06,0x01,0x00,0x40,
  0x20,0x60,0x90,0x90,0x90,0x60,0x04,0x07,0x07,0x06,0x01,0x00,0x20,0x40,0x60,0x90,
  0x90,0x90,0x60,0x04,0x07,0x07,0x06,0x01,0x00,0x20,0x50,0x60,0x90,0x90,0x90,0x60,
  0x04,0x07,0x07,0x06,0x01,0x00,0x50,0xa0,0x60,0x90,0x90,0x90,0x60,0x04,0x07,0x07,
  0x06,0x01,0x00,0x50,0x00,0x60,0x90,0x90,0x90,0x60,0x05,0x05,0x05,0x06,0x00,0x00,
  0x88,0x50,0x20,0x50,0x88,0x04,0x08,0x08,0x06,0x01,0xff,0x10,0x70,0xb0,0xb0,0xd0,
  0xd0,0xe0,0x80,0x04,0x07,0x07,0x06,0x01,0x00,0x40,0x20,0x90,0x90,0x90,0x90,0x60,
  0x04,0x07,0x07,0x06,0x01,0x00,0x20,0x40,0x90,0x90,0x90,0x90,0x60,0x04,0x07,0x07,
  0x06,0x01,0x00,0x20,0x50,0x90,0x90,0x90,0x90,0x60,0x04,0x07,0x07,0x06,0x01,0x00,
  0x50,0x00,0x90,0x90,0x90,0x90,0x60,0x05,0x07,0x07,0x06,0x00,0x00,0x10,0x20,0x88,
  0x50,0x20,0x20,0x20,0x04,0x06,0x06,0x06,0x01,0x00,0x80,0xe0,0x90,0x90,0xe0,0x80,
  0x04,0x06,0x06,0x06,0x01,0x00,0x60,0x90,0xa0,0xa0,0x90,0xa0,0x04,0x07,0x07,0x06,
  0x01,0x00,0x40,0x20,0x00,0x70,0x90,0x90,0x70,0x04,0x07,0x07,0x06,0x01,0x00,0x20,
  0x40,0x00,0x70,0x90,0x90,0x70,0x04,0x07,0x07,0x06,0x01,0x00,0x20,0x50,0x00,0x70,
  0x90,0x90,0x70,0x04,0x07,0x07,0x06,0x01,0x00,0x50,0xa0,0x00,0x70,0x90,0x90,0x70,
  0x04,0x06,0x06,0x06,0x01,0x00,0x50,0x00,0x70,0x90,0x90,0x70,0x04,0x07,0x07,0x06,
  0x01,0x00,0x20,0x50,0x20,0x70,0x90,0x90,0x70,0x05,0x04,0x04,0x06,0x00,0x00,0x70,
  0xa8,0xb0,0x78,0x04,0x06,0x06,0x06,0x01,0xfe,0x70,0x80,0x80,0x70,0x20,0x40,0x04,
  0x07,0x07,0x06,0x01,0x00,0x40,0x20,0x00,0x60,0xb0,0xc0,0x70,0x04,0x07,0x07,0x06,
  0x01,0x00,0x20,0x40,0x00,0x60,0xb0,0xc0,0x70,0x04,0x07,0x07,0x06,0x01,0x00,0x20,
  0x50,0x00,0x60,0xb0,0xc0,0x70,0x04,0x06,0x06,0x06,0x01,0x00,0x50,0x00,0x60,0xb0,
  0xc0,0x70,0x03,0x07,0x07,0x06,0x01,0x00,0x80,0x40,0x00,0xc0,0x40,0x40,0xe0,0x03,
  0x07,0x07,0x06,0x01,0x00,0x20,0x40,0x00,0xc0,0x40,0x40,0xe0,0x03,0x07,0x07,0x06,
  0x01,0x00,0x40,0xa0,0x00,0xc0,0x40,0x40,0xe0,0x03,0x06,0x06,0x06,0x01,0x00,0xa0,
  0x00,0xc0,0x40,0x40,0xe0,0x04,0x07,0x07,0x06,0x01,0x00,0x30,0x60,0x10,0x70,0x90,
  0x90,0x60,0x04,0x07,0x07,0x06,0x01,0x00,0x50,0xa0,0x00,0xe0,0x90,0x90,0x90,0x04,
  0x07,0x07,0x06,0x01,0x00,0x40,0x20,0x00,0x60,0x90,0x90,0x60,0x04,0x07,0x07,0x06,
  0x01,0x00,0x20,0x40,0x00,0x60,0x90,0x90,0x60,0x04,0x07,0x07,0x06,0x01,0x00,0x20,
  0x50,0x00,0x60,0x90,0x90,0x60,0x04,0x07,0x07,0x06,0x01,0x00,0x50,0xa0,0x00,0x60,
  0x90,0x90,0x60,0x04,0x06,0x06,0x06,0x01,0x00,0x50,0x00,0x60,0x90,0x90,0x60,0x05,
  0x05,0x05,0x06,0x00,0x00,0x20,0x00,0xf8,0x00,0x20,0x04,0x04,0x04,0x06,0x01,0x00,
  0x70,0xb0,0xd0,0xe0,0x04,0x07,0x07,0x06,0x01,0x00,0x40,0x20,0x00,0x90,0x90,0x90,
  0x70,0x04,0x07,0x07,0x06,0x01,0x00,0x20,0x40,0x00,0x90,0x90,0x90,0x70,0x04,0x07,
  0x07,0x06,0x01,0x00,0x20,0x50,0x00,0x90,0x90,0x90,0x70,0x04,0x06,0x06,0x06,0x01,
  0x00,0x50,0x00,0x90,0x90,0x90,0x70,0x04,0x09,0x09,0x06,0x01,0xfe,0x20,0x40,0x00,
  0x90,0x90,0x90,0x70,0x90,0x60,0x04,0x08,0x08,0x06,0x01,0xfe,0x80,0x80,0xe0,0x90,
  0x90,0xe0,0x80,0x80,0x04,0x08,0x08,0x06,0x01,0xfe,0x50,0x00,0x90,0x90,0x90,0x70,
  0x90,0x60};