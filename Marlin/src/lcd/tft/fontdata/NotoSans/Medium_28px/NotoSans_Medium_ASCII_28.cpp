/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2023 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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

#include "../../fontdata.h"

#if HAS_GRAPHICAL_TFT && TFT_FONT == UNIFONT

// NotoSans_Medium ASCII 38pt, capital 'A' height: 28px, width: 100%, range: 0x0020-0x007e
extern const uint8_t NotoSans_Medium_ASCII_28[12031] = {
  130,28,32,0,126,0,37,246, // unifont_t
  // 0x0020 " "
  0,0,0,10,0,0,
  // 0x0021  !
  6,28,56,10,2,255,63,224,63,224,63,208,63,208,63,208,63,208,63,208,63,192,47,192,47,192,47,192,47,192,47,192,31,192,31,192,31,192,31,192,31,128,15,128,0,0,0,0,0,0,31,128,63,224,127,224,127,224,63,208,5,0,
  // 0x0022  "
  12,10,30,16,2,17,127,65,254,127,64,254,127,64,254,127,64,253,63,0,253,63,0,253,63,0,252,63,0,188,63,0,188,42,0,104,
  // 0x0023  #
  23,27,162,25,1,0,0,0,253,0,253,0,0,0,252,0,252,0,0,0,252,0,252,0,0,1,248,1,248,0,0,2,248,2,248,0,0,3,244,2,244,0,0,3,240,3,240,0,0,7,240,7,240,0,47,255,255,255,255,248,47,255,255,255,255,248,26,175,250,175,250,164,0,15,192,15,192,0,0,15,192,15,192,0,0,31,192,31,192,0,0,31,128,47,128,0,0,47,64,47,64,0,255,255,255,255,255,192,255,255,255,255,255,208,255,255,255,255,255,208,0,190,0,190,0,0,0,189,0,189,0,0,0,252,0,252,0,0,0,252,0,252,0,0,0,252,1,252,0,0,1,248,1,248,0,0,2,244,2,244,0,0,2,244,3,244,0,0,
  // 0x0024  $
  18,32,160,22,2,253,0,1,240,0,0,0,1,240,0,0,0,1,240,0,0,0,27,250,80,0,2,255,255,255,64,15,255,255,255,192,63,255,255,255,64,127,209,240,27,0,255,65,240,0,0,255,1,240,0,0,255,65,240,0,0,191,193,240,0,0,63,250,240,0,0,47,255,240,0,0,7,255,255,64,0,0,191,255,244,0,0,7,255,255,0,0,1,255,255,192,0,1,240,191,208,0,1,240,47,224,0,1,240,15,240,0,1,240,31,224,144,1,240,63,208,254,81,246,255,192,255,255,255,255,64,255,255,255,252,0,27,255,255,144,0,0,2,240,0,0,0,1,240,0,0,0,1,240,0,0,0,1,240,0,0,0,0,0,0,0,
  // 0x0025  %
  30,29,232,32,1,255,0,21,0,0,0,0,0,0,2,255,224,0,0,127,0,0,11,255,248,0,0,253,0,0,31,230,253,0,1,252,0,0,47,128,190,0,3,244,0,0,63,64,127,0,11,240,0,0,63,0,63,0,15,208,0,0,127,0,63,64,47,128,0,0,127,0,63,64,63,0,0,0,127,0,63,64,254,0,0,0,127,0,63,65,252,0,0,0,63,0,63,3,244,6,144,0,63,64,127,7,240,191,252,0,47,128,190,15,210,255,255,0,15,230,253,47,195,248,127,128,11,255,248,63,71,240,31,192,2,255,224,190,11,224,15,208,0,21,0,252,15,208,15,224,0,0,3,248,15,208,11,224,0,0,7,240,15,208,11,224,0,0,15,224,15,208,11,224,0,0,31,192,15,208,11,224,0,0,63,64,15,224,15,208,0,0,191,0,11,224,15,208,0,0,253,0,7,240,47,192,0,2,248,0,3,254,191,128,0,3,240,0,0,255,255,0,0,15,224,0,0,127,248,0,0,0,0,0,0,1,64,0,
  // 0x0026  &
  26,29,203,28,2,255,0,1,101,0,0,0,0,0,47,255,224,0,0,0,0,255,255,252,0,0,0,3,255,239,255,0,0,0,7,253,1,255,0,0,0,11,244,0,191,64,0,0,11,240,0,127,64,0,0,11,244,0,191,64,0,0,7,248,0,255,0,0,0,3,253,3,254,0,0,0,1,255,31,252,0,0,0,0,191,255,240,0,0,0,0,63,255,128,0,0,0,0,127,253,0,0,0,0,2,255,255,0,0,191,64,15,254,255,192,0,255,0,63,244,63,240,1,254,0,127,208,15,252,3,253,0,255,128,3,255,3,252,0,255,0,0,255,223,244,0,255,0,0,63,255,240,0,255,0,0,15,255,192,0,255,128,0,3,255,128,0,191,208,0,15,255,208,0,127,249,1,191,255,244,0,47,255,255,255,223,253,0,11,255,255,254,3,255,64,0,191,255,224,0,255,208,0,1,80,0,0,0,0,
  // 0x0027  '
  5,10,20,9,2,17,127,64,127,64,127,64,127,64,63,0,63,0,63,0,63,0,63,0,42,0,
  // 0x0028  (
  10,33,99,12,1,250,0,31,208,0,63,128,0,255,0,1,253,0,3,252,0,7,248,0,11,240,0,15,240,0,31,208,0,47,192,0,63,192,0,63,192,0,63,128,0,127,128,0,127,64,0,127,64,0,127,64,0,127,64,0,127,64,0,127,128,0,63,128,0,63,192,0,63,192,0,47,192,0,31,224,0,15,240,0,11,240,0,7,248,0,3,252,0,1,253,0,0,191,0,0,63,128,0,31,208,
  // 0x0029  )
  10,33,99,12,1,250,127,0,0,63,192,0,15,224,0,11,240,0,3,248,0,2,252,0,1,254,0,0,255,0,0,191,0,0,127,64,0,63,128,0,63,192,0,63,192,0,47,192,0,47,208,0,47,208,0,47,208,0,47,208,0,47,208,0,47,192,0,63,192,0,63,192,0,63,128,0,127,128,0,191,0,0,255,0,1,254,0,2,252,0,3,248,0,11,240,0,15,224,0,63,192,0,127,0,0,
  // 0x002a  *
  19,18,90,21,1,11,0,2,253,0,0,0,2,252,0,0,0,1,252,0,0,0,1,252,0,0,0,0,252,0,0,36,0,252,0,96,63,208,248,111,240,127,255,255,255,240,127,255,255,255,244,5,107,255,149,64,0,7,255,0,0,0,15,239,192,0,0,63,143,224,0,0,191,7,244,0,1,255,3,252,0,3,253,1,254,0,0,124,0,244,0,0,0,0,0,0,
  // 0x002b  +
  18,19,95,22,2,4,0,1,160,0,0,0,2,244,0,0,0,2,244,0,0,0,2,244,0,0,0,2,244,0,0,0,2,244,0,0,0,2,244,0,0,0,2,244,0,0,255,255,255,255,240,255,255,255,255,240,255,255,255,255,240,0,3,244,0,0,0,2,244,0,0,0,2,244,0,0,0,2,244,0,0,0,2,244,0,0,0,2,244,0,0,0,2,244,0,0,0,2,244,0,0,
  // 0x002c  ,
  7,10,20,10,1,251,5,80,15,248,15,240,15,240,31,224,47,192,63,192,63,64,63,0,126,0,
  // 0x002d  -
  10,4,12,12,1,8,191,255,224,191,255,240,191,255,240,106,170,144,
  // 0x002e  .
  6,6,12,10,2,255,31,128,63,224,127,224,127,224,63,208,5,0,
  // 0x002f  /
  14,27,108,15,0,0,0,0,15,240,0,0,15,224,0,0,47,208,0,0,63,192,0,0,127,128,0,0,191,0,0,0,255,0,0,1,253,0,0,3,252,0,0,3,248,0,0,11,244,0,0,15,240,0,0,31,224,0,0,47,192,0,0,63,192,0,0,127,64,0,0,191,0,0,0,254,0,0,1,253,0,0,3,252,0,0,3,248,0,0,11,240,0,0,15,240,0,0,31,208,0,0,47,192,0,0,63,128,0,0,127,64,0,0,
  // 0x0030  0
  19,29,145,22,1,255,0,1,101,0,0,0,47,255,240,0,0,255,255,253,0,3,255,255,255,64,7,254,0,191,192,15,244,0,63,208,31,240,0,15,240,47,224,0,15,240,63,208,0,11,244,63,192,0,7,248,63,192,0,7,252,63,192,0,3,252,63,192,0,3,252,127,192,0,3,252,127,128,0,3,252,127,192,0,3,252,63,192,0,3,252,63,192,0,3,252,63,192,0,7,252,63,192,0,7,248,47,208,0,11,244,31,224,0,15,240,15,240,0,31,240,11,248,0,63,208,3,254,1,255,192,1,255,255,255,64,0,191,255,253,0,0,27,255,224,0,0,0,20,0,0,
  // 0x0031  1
  11,27,81,22,3,0,0,3,252,0,31,252,0,191,252,2,255,252,15,255,252,127,227,252,191,131,252,45,3,252,0,3,252,0,3,252,0,3,252,0,3,252,0,3,252,0,3,252,0,3,252,0,3,252,0,3,252,0,3,252,0,3,252,0,3,252,0,3,252,0,3,252,0,3,252,0,3,252,0,3,252,0,3,252,0,3,252,
  // 0x0032  2
  19,28,140,22,1,0,0,1,101,0,0,0,127,255,244,0,7,255,255,254,0,47,255,255,255,128,47,244,1,255,192,11,128,0,63,224,1,0,0,31,240,0,0,0,15,240,0,0,0,15,240,0,0,0,31,240,0,0,0,47,224,0,0,0,63,192,0,0,0,191,128,0,0,1,255,0,0,0,3,253,0,0,0,15,248,0,0,0,63,224,0,0,0,255,128,0,0,3,254,0,0,0,15,248,0,0,0,63,224,0,0,0,255,128,0,0,3,254,0,0,0,15,248,0,0,0,63,250,170,170,168,127,255,255,255,252,127,255,255,255,252,127,255,255,255,252,
  // 0x0033  3
  19,29,145,22,1,255,0,1,85,0,0,1,191,255,244,0,15,255,255,255,0,63,255,255,255,192,31,224,0,191,208,10,0,0,63,224,0,0,0,31,240,0,0,0,15,240,0,0,0,15,240,0,0,0,47,224,0,0,0,63,192,0,0,1,255,64,0,42,191,253,0,0,63,255,208,0,0,63,255,248,0,0,42,191,255,128,0,0,0,191,224,0,0,0,31,240,0,0,0,15,248,0,0,0,11,248,0,0,0,7,248,0,0,0,11,248,0,0,0,15,244,16,0,0,63,240,126,64,1,255,224,127,255,255,255,192,127,255,255,254,0,11,255,255,224,0,0,5,80,0,0,
  // 0x0034  4
  20,28,140,22,1,0,0,0,0,21,0,0,0,1,255,64,0,0,3,255,64,0,0,11,255,64,0,0,31,255,64,0,0,63,191,64,0,0,191,191,64,0,1,252,191,64,0,3,244,191,64,0,15,240,191,64,0,31,192,191,64,0,63,64,191,64,0,254,0,191,64,2,252,0,191,64,7,244,0,191,64,15,224,0,191,64,47,192,0,191,64,127,64,0,191,64,255,85,85,255,149,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,0,0,0,191,64,0,0,0,191,64,0,0,0,191,64,0,0,0,191,64,0,0,0,191,64,0,0,0,191,64,
  // 0x0035  5
  18,28,140,22,2,255,15,255,255,255,0,31,255,255,255,0,31,255,255,255,0,31,229,85,85,0,31,208,0,0,0,47,192,0,0,0,47,192,0,0,0,47,192,0,0,0,63,192,0,0,0,63,192,0,0,0,63,235,249,0,0,63,255,255,240,0,63,255,255,253,0,31,234,175,255,64,0,0,1,255,192,0,0,0,127,208,0,0,0,63,224,0,0,0,47,224,0,0,0,31,224,0,0,0,31,224,0,0,0,47,208,0,0,0,63,192,64,0,0,255,192,254,64,27,255,0,255,255,255,253,0,255,255,255,244,0,31,255,255,64,0,0,21,64,0,0,
  // 0x0036  6
  18,29,145,22,2,255,0,0,5,85,0,0,2,255,255,0,0,47,255,255,0,0,255,255,255,0,3,255,128,0,0,11,252,0,0,0,15,240,0,0,0,47,208,0,0,0,63,192,0,0,0,127,128,0,0,0,191,64,0,0,0,255,6,255,224,0,255,47,255,253,0,255,191,255,255,64,255,249,1,255,192,255,208,0,63,208,255,128,0,31,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,191,0,0,15,240,127,128,0,15,240,63,192,0,31,224,47,224,0,63,208,15,253,1,255,192,7,255,255,255,0,1,255,255,252,0,0,47,255,208,0,0,0,84,0,0,
  // 0x0037  7
  19,27,135,22,1,0,191,255,255,255,252,191,255,255,255,252,191,255,255,255,252,21,85,85,91,248,0,0,0,15,244,0,0,0,15,240,0,0,0,47,208,0,0,0,63,192,0,0,0,191,128,0,0,0,255,0,0,0,2,254,0,0,0,3,252,0,0,0,7,248,0,0,0,15,244,0,0,0,31,240,0,0,0,63,208,0,0,0,127,192,0,0,0,191,64,0,0,0,255,0,0,0,2,254,0,0,0,3,252,0,0,0,11,248,0,0,0,15,244,0,0,0,31,240,0,0,0,63,208,0,0,0,127,192,0,0,0,255,64,0,0,
  // 0x0038  8
  19,29,145,22,1,255,0,1,85,0,0,0,47,255,248,0,1,255,255,255,0,7,255,235,255,192,15,248,0,127,224,31,240,0,15,240,31,224,0,15,240,31,208,0,15,240,31,224,0,15,240,15,240,0,31,224,7,253,0,127,192,2,255,131,255,0,0,191,255,252,0,0,31,255,208,0,0,63,255,244,0,1,255,239,255,0,11,253,1,255,192,31,240,0,63,240,63,208,0,15,244,63,192,0,3,252,63,128,0,3,252,127,128,0,3,252,63,192,0,3,252,63,208,0,11,248,31,248,0,47,240,15,255,255,255,208,2,255,255,255,64,0,111,255,248,0,0,0,84,0,0,
  // 0x0039  9
  19,29,145,22,1,255,0,1,85,0,0,0,47,255,224,0,1,255,255,253,0,7,255,255,255,64,15,253,1,255,192,31,240,0,63,224,63,192,0,15,240,63,192,0,11,244,63,128,0,7,248,127,128,0,3,248,63,128,0,3,252,63,192,0,7,252,63,192,0,15,252,47,240,0,47,252,15,253,1,255,252,7,255,255,247,252,1,255,255,211,248,0,47,254,7,248,0,0,0,7,244,0,0,0,11,240,0,0,0,15,240,0,0,0,47,208,0,0,0,127,192,0,0,1,255,64,0,0,31,254,0,7,255,255,248,0,7,255,255,208,0,7,255,253,0,0,0,85,0,0,0,
  // 0x003a  :
  6,22,44,10,2,255,31,128,63,224,127,224,127,224,63,208,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,128,63,224,127,224,127,224,63,208,5,0,
  // 0x003b  ;
  7,26,52,10,1,251,7,224,15,244,31,248,31,248,15,240,1,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,80,15,244,15,240,31,224,47,208,63,192,63,128,63,0,126,0,189,0,
  // 0x003c  <
  18,19,95,22,2,4,0,0,0,0,176,0,0,0,11,240,0,0,0,191,240,0,0,11,255,144,0,0,191,248,0,0,11,255,128,0,0,191,248,0,0,11,255,128,0,0,191,244,0,0,0,255,128,0,0,0,255,244,0,0,0,47,255,128,0,0,1,255,249,0,0,0,31,255,208,0,0,0,191,254,0,0,0,11,255,224,0,0,0,127,240,0,0,0,6,240,0,0,0,0,32,
  // 0x003d  =
  18,11,55,22,2,8,170,170,170,170,144,255,255,255,255,224,255,255,255,255,224,85,85,85,85,80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,224,255,255,255,255,224,255,255,255,255,224,
  // 0x003e  >
  18,19,95,22,2,4,208,0,0,0,0,253,0,0,0,0,255,208,0,0,0,127,253,0,0,0,7,255,208,0,0,0,127,253,0,0,0,2,255,208,0,0,0,47,253,0,0,0,2,255,208,0,0,0,63,240,0,0,1,255,240,0,0,47,255,64,0,7,255,244,0,0,191,254,0,0,27,255,224,0,0,255,253,0,0,0,255,144,0,0,0,248,0,0,0,0,64,0,0,0,0,
  // 0x003f  ?
  16,29,116,17,0,255,0,21,84,0,7,255,255,128,127,255,255,240,63,255,255,252,47,64,7,253,4,0,1,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,1,254,0,0,3,252,0,0,31,248,0,0,127,224,0,2,255,128,0,7,253,0,0,15,240,0,0,31,208,0,0,47,192,0,0,47,128,0,0,47,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,128,0,0,127,208,0,0,127,224,0,0,127,224,0,0,63,192,0,0,5,0,0,
  // 0x0040  @
  30,31,248,34,2,252,0,0,2,255,255,144,0,0,0,0,127,255,255,253,0,0,0,3,255,254,191,255,192,0,0,31,253,0,0,127,240,0,0,127,208,0,0,7,252,0,1,254,0,0,0,0,255,0,3,248,0,0,0,0,63,64,11,240,0,43,249,64,47,192,15,192,2,255,255,240,15,208,47,128,15,255,255,240,11,224,63,0,63,208,11,240,7,240,127,0,191,64,11,240,3,240,190,0,254,0,11,224,3,240,189,0,252,0,11,224,3,240,253,1,252,0,11,224,3,240,253,1,252,0,15,224,3,240,253,1,252,0,15,224,7,224,253,1,252,0,15,224,11,208,253,0,253,0,47,224,15,192,190,0,191,64,127,240,63,128,127,0,63,255,249,255,255,0,63,0,31,255,224,191,252,0,63,128,1,254,64,31,144,0,31,208,0,0,0,0,0,0,15,240,0,0,0,0,0,0,3,253,0,0,0,0,0,0,0,255,208,0,0,108,0,0,0,63,255,166,175,252,0,0,0,7,255,255,255,252,0,0,0,0,111,255,255,144,0,0,0,0,0,21,64,0,0,0,
  // 0x0041  A
  25,28,196,25,0,0,0,0,1,80,0,0,0,0,0,15,252,0,0,0,0,0,31,252,0,0,0,0,0,47,254,0,0,0,0,0,63,255,0,0,0,0,0,191,127,64,0,0,0,0,255,63,128,0,0,0,1,254,47,192,0,0,0,2,252,31,208,0,0,0,3,252,15,240,0,0,0,7,248,11,240,0,0,0,15,240,7,248,0,0,0,15,240,3,252,0,0,0,47,208,2,253,0,0,0,63,192,1,254,0,0,0,127,192,0,255,0,0,0,191,149,85,255,64,0,0,255,255,255,255,192,0,1,255,255,255,255,192,0,3,255,255,255,255,224,0,3,252,0,0,31,240,0,11,248,0,0,15,244,0,15,244,0,0,11,248,0,31,240,0,0,3,252,0,47,224,0,0,3,253,0,63,192,0,0,1,255,0,127,192,0,0,0,255,0,255,64,0,0,0,191,128,
  // 0x0042  B
  20,27,135,25,3,0,127,255,255,228,0,127,255,255,255,128,127,255,255,255,224,127,213,86,255,244,127,128,0,31,252,127,128,0,11,252,127,128,0,3,252,127,128,0,3,252,127,128,0,7,252,127,128,0,15,244,127,128,0,127,240,127,255,255,255,128,127,255,255,248,0,127,255,255,255,64,127,234,170,255,240,127,128,0,31,252,127,128,0,3,253,127,128,0,2,254,127,128,0,1,255,127,128,0,1,255,127,128,0,2,255,127,128,0,3,254,127,128,0,15,252,127,213,86,255,248,127,255,255,255,240,127,255,255,255,64,127,255,255,228,0,
  // 0x0043  C
  21,29,174,24,2,255,0,0,5,85,0,0,0,1,255,255,249,0,0,31,255,255,255,128,0,127,255,255,255,0,1,255,244,1,191,0,3,255,64,0,4,0,15,252,0,0,0,0,31,244,0,0,0,0,47,240,0,0,0,0,63,208,0,0,0,0,127,192,0,0,0,0,127,192,0,0,0,0,191,128,0,0,0,0,191,128,0,0,0,0,191,128,0,0,0,0,191,128,0,0,0,0,191,128,0,0,0,0,191,192,0,0,0,0,127,192,0,0,0,0,63,208,0,0,0,0,63,240,0,0,0,0,31,244,0,0,0,0,15,252,0,0,0,0,7,255,64,0,0,0,2,255,249,1,111,0,0,191,255,255,255,0,0,31,255,255,255,0,0,2,255,255,249,0,0,0,1,84,0,0,
  // 0x0044  D
  23,27,162,28,3,0,127,255,255,228,0,0,127,255,255,255,64,0,127,255,255,255,240,0,127,213,86,255,252,0,127,128,0,31,255,0,127,128,0,2,255,128,127,128,0,0,191,192,127,128,0,0,63,224,127,128,0,0,47,240,127,128,0,0,15,240,127,128,0,0,15,244,127,128,0,0,15,244,127,128,0,0,15,248,127,128,0,0,11,248,127,128,0,0,15,244,127,128,0,0,15,244,127,128,0,0,15,244,127,128,0,0,31,240,127,128,0,0,47,240,127,128,0,0,63,208,127,128,0,0,255,192,127,128,0,3,255,64,127,128,0,47,254,0,127,213,107,255,248,0,127,255,255,255,208,0,127,255,255,254,0,0,127,255,255,144,0,0,
  // 0x0045  E
  16,27,108,21,3,0,127,255,255,255,127,255,255,255,127,255,255,255,127,213,85,85,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,255,255,252,127,255,255,252,127,255,255,252,127,234,170,168,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,234,170,169,127,255,255,255,127,255,255,255,127,255,255,255,
  // 0x0046  F
  16,27,108,20,3,0,127,255,255,255,127,255,255,255,127,255,255,255,127,213,85,85,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,255,255,252,127,255,255,252,127,255,255,252,127,234,170,168,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,127,128,0,0,
  // 0x0047  G
  23,29,174,28,2,255,0,0,1,89,80,0,0,0,191,255,255,128,0,11,255,255,255,244,0,63,255,255,255,240,1,255,249,0,27,208,3,255,128,0,0,64,11,253,0,0,0,0,31,248,0,0,0,0,47,240,0,0,0,0,63,208,0,0,0,0,127,192,0,0,0,0,127,192,0,0,0,0,191,128,0,0,0,0,191,128,0,42,170,164,191,128,0,63,255,248,191,128,0,63,255,248,191,128,0,63,255,248,127,192,0,0,7,248,127,192,0,0,7,248,63,208,0,0,7,248,63,240,0,0,7,248,31,244,0,0,7,248,15,253,0,0,7,248,3,255,64,0,7,248,1,255,249,0,91,248,0,127,255,255,255,248,0,31,255,255,255,248,0,1,191,255,255,144,0,0,0,85,0,0,
  // 0x0048  H
  22,27,162,28,3,0,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,127,255,255,255,255,240,127,255,255,255,255,240,127,255,255,255,255,240,127,234,170,170,175,240,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,127,128,0,0,31,240,
  // 0x0049  I
  11,27,81,13,1,0,191,255,252,191,255,252,47,255,228,1,255,0,1,255,0,1,255,0,1,255,0,1,255,0,1,255,0,1,255,0,1,255,0,1,255,0,1,255,0,1,255,0,1,255,0,1,255,0,1,255,0,1,255,0,1,255,0,1,255,0,1,255,0,1,255,0,1,255,0,1,255,0,47,255,244,191,255,252,191,255,252,
  // 0x004a  J
  11,35,105,11,253,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,248,0,11,244,0,15,244,0,31,240,64,127,240,255,255,208,255,255,64,255,252,0,21,64,0,
  // 0x004b  K
  21,27,162,24,3,0,127,128,0,2,255,0,127,128,0,7,253,0,127,128,0,31,244,0,127,128,0,63,224,0,127,128,0,255,128,0,127,128,3,255,0,0,127,128,11,252,0,0,127,128,47,240,0,0,127,128,127,192,0,0,127,129,255,64,0,0,127,131,253,0,0,0,127,143,248,0,0,0,127,255,252,0,0,0,127,255,254,0,0,0,127,255,255,64,0,0,127,240,255,192,0,0,127,192,63,224,0,0,127,128,31,244,0,0,127,128,15,252,0,0,127,128,3,255,0,0,127,128,1,255,64,0,127,128,0,191,192,0,127,128,0,63,240,0,127,128,0,15,248,0,127,128,0,11,253,0,127,128,0,3,255,0,127,128,0,0,255,128,
  // 0x004c  L
  17,27,135,20,3,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,234,170,170,0,127,255,255,255,64,127,255,255,255,64,127,255,255,255,64,
  // 0x004d  M
  29,27,216,35,3,0,127,248,0,0,0,15,255,64,127,252,0,0,0,15,255,64,127,253,0,0,0,47,255,64,127,255,0,0,0,63,255,64,127,191,0,0,0,127,191,64,127,127,64,0,0,191,191,64,127,63,192,0,0,253,191,64,127,47,192,0,1,252,191,64,127,79,224,0,3,248,191,64,127,79,240,0,3,244,191,64,127,71,244,0,7,240,191,64,127,67,248,0,15,224,191,64,127,66,252,0,15,208,191,64,127,65,253,0,47,192,191,64,127,64,254,0,63,128,191,64,127,64,191,0,127,0,191,64,127,64,127,64,191,0,191,64,127,64,63,192,253,0,191,64,127,64,47,193,252,0,191,64,127,64,15,211,248,0,191,64,127,64,15,243,244,0,191,64,127,64,11,255,240,0,191,64,127,64,3,255,224,0,191,64,127,64,3,255,192,0,191,64,127,64,1,255,192,0,191,64,127,64,0,255,128,0,191,64,127,64,0,255,0,0,191,64,
  // 0x004e  N
  23,27,162,29,3,0,127,240,0,0,3,252,127,248,0,0,3,252,127,252,0,0,3,252,127,255,0,0,3,252,127,255,64,0,3,252,127,191,192,0,3,252,127,63,224,0,3,252,127,31,244,0,3,252,127,11,252,0,3,252,127,3,254,0,3,252,127,65,255,0,3,252,127,64,255,192,3,252,127,64,63,208,3,252,127,64,47,240,3,252,127,64,15,248,3,252,127,64,7,253,3,252,127,64,2,255,3,252,127,64,0,255,131,252,127,64,0,127,195,252,127,64,0,63,243,252,127,64,0,15,246,252,127,64,0,11,255,252,127,64,0,3,255,252,127,64,0,1,255,252,127,64,0,0,191,252,127,64,0,0,63,252,127,64,0,0,31,252,
  // 0x004f  O
  26,29,203,30,2,255,0,0,5,165,0,0,0,0,2,255,255,248,0,0,0,47,255,255,255,64,0,0,191,255,255,255,224,0,2,255,228,1,191,248,0,7,255,0,0,15,253,0,15,252,0,0,3,255,0,47,240,0,0,1,255,64,63,224,0,0,0,255,128,63,208,0,0,0,127,192,127,192,0,0,0,63,192,191,192,0,0,0,63,208,191,128,0,0,0,63,208,191,128,0,0,0,63,224,191,128,0,0,0,63,224,191,128,0,0,0,63,208,191,128,0,0,0,63,208,127,192,0,0,0,63,208,127,192,0,0,0,63,192,63,208,0,0,0,191,192,63,240,0,0,0,255,128,31,244,0,0,1,255,0,15,252,0,0,3,254,0,7,255,0,0,31,252,0,2,255,228,1,255,244,0,0,191,255,255,255,208,0,0,31,255,255,255,0,0,0,1,255,255,228,0,0,0,0,1,84,0,0,0,
  // 0x0050  P
  19,27,135,23,3,0,127,255,255,144,0,127,255,255,253,0,127,255,255,255,64,127,213,91,255,192,127,128,0,127,224,127,128,0,47,240,127,128,0,15,244,127,128,0,15,244,127,128,0,15,244,127,128,0,15,244,127,128,0,31,240,127,128,0,63,224,127,128,1,255,192,127,255,255,255,128,127,255,255,253,0,127,255,255,224,0,127,234,169,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,127,128,0,0,0,
  // 0x0051  Q
  26,35,245,30,2,249,0,0,5,165,0,0,0,0,2,255,255,248,0,0,0,47,255,255,255,64,0,0,191,255,255,255,224,0,2,255,228,1,191,248,0,7,255,0,0,15,253,0,15,252,0,0,3,255,0,47,240,0,0,1,255,64,63,224,0,0,0,255,128,63,208,0,0,0,127,192,127,192,0,0,0,63,192,191,192,0,0,0,63,208,191,128,0,0,0,63,208,191,128,0,0,0,63,224,191,128,0,0,0,63,224,191,128,0,0,0,63,208,191,128,0,0,0,63,208,127,192,0,0,0,63,208,127,192,0,0,0,63,192,63,208,0,0,0,191,192,63,240,0,0,0,255,128,31,244,0,0,1,255,0,15,252,0,0,3,254,0,7,255,0,0,31,252,0,2,255,228,1,255,244,0,0,191,255,255,255,208,0,0,31,255,255,255,0,0,0,1,255,255,244,0,0,0,0,1,95,252,0,0,0,0,0,7,255,0,0,0,0,0,1,255,192,0,0,0,0,0,191,224,0,0,0,0,0,47,248,0,0,0,0,0,15,254,0,0,0,0,0,1,85,0,
  // 0x0052  R
  21,27,162,24,3,0,127,255,255,144,0,0,127,255,255,253,0,0,127,255,255,255,128,0,127,213,91,255,208,0,127,128,0,127,240,0,127,128,0,31,240,0,127,128,0,15,244,0,127,128,0,15,244,0,127,128,0,15,244,0,127,128,0,15,240,0,127,128,0,47,240,0,127,128,0,127,208,0,127,213,91,255,128,0,127,255,255,254,0,0,127,255,255,240,0,0,127,255,255,208,0,0,127,128,31,240,0,0,127,128,11,248,0,0,127,128,3,253,0,0,127,128,2,255,0,0,127,128,0,255,128,0,127,128,0,127,192,0,127,128,0,47,240,0,127,128,0,15,244,0,127,128,0,11,252,0,127,128,0,3,254,0,127,128,0,1,255,64,
  // 0x0053  S
  17,29,145,21,2,255,0,5,85,0,0,0,191,255,249,0,7,255,255,255,128,31,255,255,255,0,63,244,1,191,0,127,192,0,0,0,191,64,0,0,0,255,64,0,0,0,191,64,0,0,0,191,192,0,0,0,127,224,0,0,0,63,253,0,0,0,15,255,208,0,0,3,255,254,0,0,0,127,255,224,0,0,7,255,252,0,0,0,127,255,0,0,0,7,255,64,0,0,0,255,192,0,0,0,63,192,0,0,0,63,192,0,0,0,63,192,0,0,0,63,192,144,0,0,255,128,254,80,27,255,0,255,255,255,253,0,255,255,255,244,0,47,255,255,64,0,0,21,64,0,0,
  // 0x0054  T
  21,27,162,21,0,0,191,255,255,255,255,192,191,255,255,255,255,192,191,255,255,255,255,192,21,85,191,213,85,64,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,0,0,127,128,0,0,
  // 0x0055  U
  22,28,168,28,3,255,191,64,0,0,31,224,191,64,0,0,31,224,191,64,0,0,31,224,191,64,0,0,31,224,191,64,0,0,31,224,191,64,0,0,31,224,191,64,0,0,31,224,191,64,0,0,31,224,191,64,0,0,31,224,191,64,0,0,31,224,191,64,0,0,31,224,191,64,0,0,31,224,191,64,0,0,31,224,191,64,0,0,31,224,191,64,0,0,31,224,191,64,0,0,31,224,191,64,0,0,31,224,191,128,0,0,31,224,191,128,0,0,47,224,127,192,0,0,47,208,63,192,0,0,63,192,63,224,0,0,191,192,31,248,0,1,255,64,15,255,64,31,255,0,3,255,255,255,252,0,0,255,255,255,224,0,0,27,255,254,64,0,0,0,21,64,0,0,
  // 0x0056  V
  23,27,162,23,0,0,255,64,0,0,3,252,127,192,0,0,7,252,63,192,0,0,15,244,47,208,0,0,15,240,31,240,0,0,31,224,15,240,0,0,63,208,11,244,0,0,63,192,7,252,0,0,191,128,3,252,0,0,255,64,2,254,0,0,255,0,1,255,0,2,254,0,0,255,0,3,253,0,0,191,128,3,252,0,0,63,192,11,248,0,0,63,192,15,240,0,0,47,224,15,240,0,0,15,240,47,224,0,0,15,240,63,192,0,0,7,248,63,192,0,0,3,252,191,64,0,0,3,252,255,0,0,0,1,253,254,0,0,0,0,255,253,0,0,0,0,191,252,0,0,0,0,127,248,0,0,0,0,63,244,0,0,0,0,47,240,0,0,
  // 0x0057  W
  36,27,243,36,0,0,191,128,0,1,255,0,0,3,253,127,192,0,2,255,64,0,3,252,63,192,0,3,255,128,0,7,248,63,208,0,7,255,192,0,11,244,31,224,0,11,255,192,0,15,240,15,240,0,15,239,208,0,15,240,15,240,0,15,223,240,0,31,224,11,244,0,31,203,240,0,47,208,7,248,0,47,199,244,0,63,192,3,252,0,63,131,248,0,63,192,3,252,0,127,67,252,0,127,128,2,253,0,191,2,252,0,191,64,1,254,0,255,0,254,0,255,0,0,255,0,254,0,255,0,255,0,0,255,1,253,0,191,1,254,0,0,191,66,252,0,127,66,253,0,0,127,131,248,0,63,131,252,0,0,63,195,244,0,63,195,252,0,0,63,199,240,0,47,199,248,0,0,47,219,240,0,15,219,240,0,0,31,223,224,0,15,235,240,0,0,15,239,208,0,11,239,224,0,0,15,255,192,0,7,255,208,0,0,11,255,192,0,3,255,192,0,0,7,255,64,0,3,255,192,0,0,3,255,0,0,2,255,128,0,0,2,255,0,0,0,255,64,0,
  // 0x0058  X
  23,27,162,23,0,0,63,224,0,0,31,240,31,244,0,0,63,208,11,252,0,0,191,128,3,253,0,0,255,0,1,255,0,3,253,0,0,191,128,7,252,0,0,63,208,15,240,0,0,31,240,47,208,0,0,11,248,127,192,0,0,3,252,255,0,0,0,1,255,254,0,0,0,0,255,252,0,0,0,0,63,244,0,0,0,0,127,244,0,0,0,0,255,252,0,0,0,2,255,254,0,0,0,3,252,255,64,0,0,15,244,127,192,0,0,31,224,63,224,0,0,63,192,15,240,0,0,191,64,11,252,0,1,255,0,3,254,0,3,253,0,1,255,0,11,248,0,0,191,192,31,240,0,0,63,208,63,208,0,0,47,240,191,192,0,0,15,248,
  // 0x0059  Y
  22,27,162,22,0,0,191,192,0,0,47,240,63,208,0,0,63,208,47,240,0,0,191,128,15,244,0,0,255,0,11,252,0,2,254,0,3,253,0,3,252,0,1,255,0,11,248,0,0,255,64,31,240,0,0,127,192,63,208,0,0,63,208,127,192,0,0,31,240,255,64,0,0,11,249,255,0,0,0,3,255,253,0,0,0,2,255,248,0,0,0,0,255,240,0,0,0,0,191,224,0,0,0,0,63,192,0,0,0,0,63,192,0,0,0,0,63,192,0,0,0,0,63,192,0,0,0,0,63,192,0,0,0,0,63,192,0,0,0,0,63,192,0,0,0,0,63,192,0,0,0,0,63,192,0,0,0,0,63,192,0,0,0,0,63,192,0,0,
  // 0x005a  Z
  20,27,135,22,1,0,127,255,255,255,252,127,255,255,255,252,127,255,255,255,252,21,85,85,95,248,0,0,0,47,240,0,0,0,63,208,0,0,0,255,128,0,0,2,255,0,0,0,3,253,0,0,0,15,248,0,0,0,47,240,0,0,0,63,208,0,0,0,255,128,0,0,2,255,0,0,0,7,253,0,0,0,15,248,0,0,0,47,240,0,0,0,127,208,0,0,0,255,128,0,0,2,255,0,0,0,7,252,0,0,0,15,248,0,0,0,47,240,0,0,0,127,234,170,170,169,191,255,255,255,253,191,255,255,255,253,191,255,255,255,253,
  // 0x005b  [
  9,33,99,13,3,250,255,255,128,255,255,128,255,255,128,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,254,0,0,255,255,128,255,255,128,255,255,128,
  // 0x005c "\"
  14,27,108,15,0,0,127,64,0,0,63,128,0,0,47,192,0,0,31,208,0,0,15,240,0,0,11,240,0,0,3,248,0,0,3,252,0,0,1,253,0,0,0,254,0,0,0,191,0,0,0,127,64,0,0,63,192,0,0,47,192,0,0,15,224,0,0,15,240,0,0,7,244,0,0,3,248,0,0,2,252,0,0,1,253,0,0,0,255,0,0,0,191,0,0,0,63,128,0,0,63,192,0,0,31,208,0,0,15,224,0,0,11,240,
  // 0x005d  ]
  9,33,99,13,1,250,255,255,128,255,255,128,255,255,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,0,63,128,255,255,128,255,255,128,255,255,128,
  // 0x005e  ^
  19,18,90,22,1,10,0,0,16,0,0,0,0,252,0,0,0,2,253,0,0,0,3,255,0,0,0,7,255,64,0,0,15,223,192,0,0,31,203,208,0,0,63,67,240,0,0,127,2,248,0,0,253,0,252,0,0,252,0,190,0,2,248,0,63,0,3,240,0,47,128,11,224,0,15,192,15,192,0,11,224,47,192,0,3,240,63,64,0,2,248,127,0,0,0,252,
  // 0x005f  _
  17,3,15,16,0,250,170,170,170,170,64,255,255,255,255,128,255,255,255,255,128,
  // 0x0060  `
  9,6,18,12,1,23,127,224,0,31,240,0,7,252,0,1,254,0,0,127,64,0,31,192,
  // 0x0061  a
  18,22,110,22,1,255,0,6,255,144,0,1,255,255,253,0,3,255,255,255,64,1,254,86,255,192,0,144,0,63,208,0,0,0,31,224,0,0,0,31,224,0,0,0,15,240,0,0,21,111,240,0,111,255,255,240,3,255,255,255,240,15,255,148,31,240,47,240,0,15,240,63,208,0,31,240,63,192,0,31,240,127,192,0,47,240,63,192,0,127,240,63,240,2,255,240,47,255,255,239,240,15,255,255,139,240,1,255,253,3,240,0,5,64,0,0,
  // 0x0062  b
  19,30,150,24,3,255,191,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,1,174,128,0,255,15,255,248,0,255,127,255,255,0,255,254,155,255,128,255,240,0,191,208,255,192,0,47,240,255,128,0,15,240,255,64,0,15,244,255,64,0,11,244,255,0,0,11,248,255,0,0,11,248,255,0,0,11,248,255,64,0,11,244,255,64,0,15,244,255,128,0,15,240,255,192,0,31,240,255,224,0,63,224,255,248,1,255,192,255,255,255,255,64,254,63,255,253,0,253,11,255,224,0,0,0,21,0,0,
  // 0x0063  c
  15,22,88,19,2,255,0,6,254,144,0,191,255,252,3,255,255,252,15,255,171,248,47,244,0,16,63,208,0,0,127,192,0,0,191,128,0,0,255,64,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,64,0,0,191,128,0,0,127,192,0,0,63,240,0,0,31,253,0,124,11,255,255,252,2,255,255,252,0,47,255,244,0,0,84,0,
  // 0x0064  d
  19,30,150,24,2,255,0,0,0,11,244,0,0,0,11,244,0,0,0,11,244,0,0,0,11,244,0,0,0,11,244,0,0,0,11,244,0,0,0,11,244,0,0,0,11,244,0,27,232,11,244,1,255,255,139,244,7,255,255,247,244,15,254,155,255,244,63,244,0,127,244,63,208,0,47,244,191,192,0,15,244,191,128,0,15,244,255,64,0,11,244,255,0,0,11,244,255,0,0,7,244,255,0,0,7,244,255,0,0,11,244,255,64,0,11,244,191,128,0,15,244,127,192,0,15,244,63,224,0,63,244,47,248,1,255,244,15,255,255,251,244,3,255,255,211,244,0,127,254,3,244,0,1,64,0,0,
  // 0x0065  e
  18,22,110,22,2,255,0,6,254,64,0,0,191,255,244,0,3,255,255,253,0,15,254,87,255,0,47,240,0,191,192,63,192,0,63,192,127,128,0,31,224,191,64,0,31,224,255,85,85,95,240,255,255,255,255,240,255,255,255,255,240,255,170,170,170,160,255,0,0,0,0,255,64,0,0,0,191,128,0,0,0,127,192,0,0,0,63,240,0,0,0,31,253,0,7,192,7,255,255,255,192,1,255,255,255,192,0,47,255,254,0,0,0,85,0,0,
  // 0x0066  f
  15,29,116,14,0,0,0,1,255,248,0,15,255,252,0,63,255,248,0,127,228,96,0,191,128,0,0,255,64,0,0,255,0,0,0,255,0,0,1,255,149,64,47,255,255,192,127,255,255,192,42,255,170,128,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,
  // 0x0067  g
  19,31,155,24,2,246,0,27,232,1,80,1,255,255,131,244,7,255,255,243,244,15,255,171,255,244,47,244,0,191,244,63,208,0,47,244,127,192,0,15,244,191,128,0,15,244,255,64,0,11,244,255,0,0,11,244,255,0,0,7,244,255,0,0,7,244,255,0,0,7,244,255,64,0,11,244,191,128,0,15,244,127,192,0,15,244,63,224,0,47,244,47,248,0,191,244,15,255,255,251,244,3,255,255,219,244,0,191,254,11,244,0,1,80,11,244,0,0,0,11,244,0,0,0,15,240,0,0,0,31,240,16,0,0,63,224,47,148,2,255,192,47,255,255,255,64,47,255,255,253,0,2,191,255,144,0,0,0,0,0,0,
  // 0x0068  h
  18,29,145,24,3,0,191,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,1,175,144,0,255,15,255,253,0,255,63,255,255,64,255,255,155,255,192,255,240,0,127,208,255,208,0,47,224,255,192,0,31,240,255,128,0,15,240,255,64,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,
  // 0x0069  i
  5,28,56,10,3,0,191,0,255,64,255,64,191,0,4,0,0,0,0,0,85,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,255,0,
  // 0x006a  j
  10,38,114,10,254,246,0,47,192,0,63,208,0,63,208,0,47,192,0,1,0,0,0,0,0,0,0,0,21,64,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,0,63,192,65,255,192,255,255,64,255,254,0,255,244,0,0,0,0,
  // 0x006b  k
  18,29,145,21,3,0,191,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,21,64,255,0,0,255,128,255,0,3,254,0,255,0,15,248,0,255,0,63,224,0,255,0,255,192,0,255,2,255,0,0,255,11,252,0,0,255,47,240,0,0,255,127,208,0,0,255,255,240,0,0,255,255,252,0,0,255,227,254,0,0,255,129,255,64,0,255,0,191,192,0,255,0,63,240,0,255,0,15,248,0,255,0,7,253,0,255,0,2,255,0,255,0,0,255,192,255,0,0,63,224,
  // 0x006c  l
  4,29,29,10,3,0,191,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
  // 0x006d  m
  30,21,168,36,3,0,84,1,190,128,0,111,224,0,254,31,255,248,7,255,254,0,255,127,255,254,47,255,255,128,255,254,155,255,191,166,255,208,255,240,0,255,252,0,63,224,255,192,0,127,240,0,31,240,255,192,0,63,224,0,15,240,255,64,0,63,208,0,15,240,255,64,0,63,192,0,15,240,255,0,0,63,192,0,15,240,255,0,0,63,192,0,15,240,255,0,0,63,192,0,15,240,255,0,0,63,192,0,15,240,255,0,0,63,192,0,15,240,255,0,0,63,192,0,15,240,255,0,0,63,192,0,15,240,255,0,0,63,192,0,15,240,255,0,0,63,192,0,15,240,255,0,0,63,192,0,15,240,255,0,0,63,192,0,15,240,255,0,0,63,192,0,15,240,
  // 0x006e  n
  18,21,105,24,3,0,84,1,191,144,0,254,15,255,253,0,255,63,255,255,64,255,255,155,255,192,255,240,0,127,208,255,208,0,47,224,255,192,0,31,240,255,128,0,15,240,255,64,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,
  // 0x006f  o
  19,22,110,23,2,255,0,6,254,64,0,0,191,255,248,0,3,255,255,255,0,15,255,171,255,192,47,244,0,127,224,63,208,0,15,240,127,192,0,11,248,191,128,0,7,252,255,64,0,3,252,255,0,0,3,252,255,0,0,3,252,255,0,0,3,252,255,0,0,3,252,255,64,0,3,252,191,128,0,7,248,63,192,0,15,244,63,224,0,47,240,15,253,0,191,208,7,255,255,255,128,1,255,255,254,0,0,47,255,224,0,0,0,84,0,0,
  // 0x0070  p
  19,31,155,24,3,246,84,1,191,128,0,254,15,255,248,0,255,63,255,255,0,255,254,155,255,192,255,240,0,191,208,255,192,0,47,240,255,128,0,15,240,255,64,0,15,244,255,64,0,11,244,255,0,0,11,248,255,0,0,11,248,255,0,0,11,248,255,64,0,11,244,255,64,0,15,244,255,128,0,15,240,255,192,0,47,240,255,224,0,63,224,255,248,1,255,192,255,255,255,255,64,255,63,255,253,0,255,7,255,224,0,255,0,21,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,255,0,0,0,0,0,0,0,0,0,
  // 0x0071  q
  19,31,155,24,2,246,0,27,232,1,80,1,255,255,131,244,7,255,255,247,244,15,254,155,255,244,63,240,0,127,244,63,208,0,47,244,191,192,0,15,244,191,128,0,15,244,255,64,0,11,244,255,0,0,11,244,255,0,0,7,244,255,0,0,7,244,255,0,0,11,244,255,64,0,11,244,191,128,0,15,244,127,192,0,15,244,63,224,0,63,244,47,248,1,255,244,15,255,255,251,244,3,255,255,219,244,0,191,254,11,244,0,1,64,11,244,0,0,0,11,244,0,0,0,11,244,0,0,0,11,244,0,0,0,11,244,0,0,0,11,244,0,0,0,11,244,0,0,0,11,244,0,0,0,11,244,0,0,0,0,0,
  // 0x0072  r
  13,21,84,16,3,0,84,0,191,64,253,11,255,64,254,47,255,64,255,127,255,0,255,253,0,0,255,240,0,0,255,192,0,0,255,128,0,0,255,64,0,0,255,64,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,
  // 0x0073  s
  15,22,88,18,2,255,0,111,233,0,11,255,255,240,63,255,255,240,191,229,111,224,255,0,0,64,255,0,0,0,255,0,0,0,255,208,0,0,127,253,0,0,31,255,224,0,2,255,254,0,0,47,255,208,0,1,255,240,0,0,47,248,0,0,11,248,0,0,3,248,0,0,7,248,244,0,31,244,255,251,255,240,255,255,255,192,111,255,253,0,0,85,0,0,
  // 0x0074  t
  14,26,104,15,0,255,0,62,0,0,0,126,0,0,0,190,0,0,0,254,0,0,2,255,85,64,47,255,255,208,127,255,255,208,43,255,170,128,1,254,0,0,1,254,0,0,1,254,0,0,1,254,0,0,1,254,0,0,1,254,0,0,1,254,0,0,1,254,0,0,1,254,0,0,1,254,0,0,1,254,0,0,1,254,0,0,1,255,0,0,0,255,128,0,0,255,255,224,0,63,255,224,0,11,255,208,0,0,84,0,
  // 0x0075  u
  18,22,110,24,3,255,85,0,0,5,80,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,15,240,255,0,0,31,240,255,0,0,31,240,255,0,0,31,240,255,0,0,47,240,255,64,0,63,240,191,192,0,191,240,127,224,7,255,240,63,255,255,239,240,15,255,255,143,240,2,255,253,11,240,0,5,64,0,0,
  // 0x0076  v
  20,21,105,20,0,0,85,0,0,0,85,191,128,0,2,254,127,192,0,3,252,63,208,0,7,252,31,224,0,11,244,15,240,0,15,240,11,244,0,31,224,7,248,0,63,208,3,252,0,63,192,2,253,0,127,128,0,255,0,255,0,0,255,0,255,0,0,127,130,253,0,0,63,195,252,0,0,47,195,248,0,0,31,215,244,0,0,15,235,240,0,0,11,255,224,0,0,3,255,192,0,0,3,255,192,0,0,1,255,64,0,
  // 0x0077  w
  30,21,168,31,0,0,106,64,0,26,144,0,6,160,127,192,0,63,240,0,15,240,63,192,0,127,240,0,31,224,47,208,0,255,244,0,47,208,31,224,0,255,248,0,63,192,15,240,1,253,252,0,63,192,15,240,2,248,253,0,127,128,11,244,3,244,254,0,191,64,7,248,3,240,191,0,255,0,3,252,11,240,127,0,254,0,3,252,15,224,63,65,253,0,2,253,15,208,63,130,252,0,1,254,31,192,47,195,252,0,0,255,47,192,15,211,248,0,0,191,63,64,15,231,244,0,0,127,127,0,11,235,240,0,0,63,191,0,7,255,240,0,0,63,254,0,3,255,208,0,0,47,253,0,3,255,192,0,0,31,252,0,2,255,192,0,0,15,248,0,0,255,128,0,
  // 0x0078  x
  19,21,105,21,1,0,85,64,0,5,84,127,192,0,31,240,47,240,0,63,208,15,244,0,255,128,7,252,1,255,0,2,255,3,253,0,0,255,75,248,0,0,127,239,240,0,0,47,255,192,0,0,15,255,128,0,0,7,255,0,0,0,15,255,64,0,0,47,255,192,0,0,63,239,240,0,0,255,79,248,0,2,255,3,253,0,7,252,1,255,0,15,244,0,255,128,47,240,0,63,208,127,192,0,31,240,255,64,0,15,252,
  // 0x0079  y
  20,31,155,20,0,246,85,0,0,0,85,191,128,0,2,254,63,192,0,3,253,63,208,0,7,252,31,240,0,11,248,15,240,0,15,240,11,248,0,31,240,3,252,0,47,208,3,253,0,63,192,1,254,0,127,128,0,255,0,255,64,0,191,64,255,0,0,63,129,254,0,0,63,195,252,0,0,31,211,252,0,0,15,231,244,0,0,11,251,240,0,0,3,255,224,0,0,3,255,192,0,0,1,255,192,0,0,0,255,64,0,0,0,255,0,0,0,1,254,0,0,0,2,253,0,0,0,3,252,0,0,0,15,244,0,0,16,127,240,0,0,127,255,192,0,0,127,255,64,0,0,127,248,0,0,0,0,0,0,0,0,
  // 0x007a  z
  16,21,84,18,1,0,21,85,85,84,63,255,255,253,63,255,255,253,42,170,171,252,0,0,11,248,0,0,31,240,0,0,63,192,0,0,255,64,0,2,254,0,0,7,252,0,0,15,244,0,0,47,224,0,0,127,192,0,0,255,0,0,3,253,0,0,11,248,0,0,31,240,0,0,63,208,0,0,191,255,255,254,191,255,255,254,191,255,255,254,
  // 0x007b  {
  13,33,132,15,1,250,0,0,191,64,0,11,255,64,0,47,255,64,0,63,244,0,0,127,192,0,0,127,64,0,0,127,64,0,0,127,64,0,0,127,64,0,0,127,64,0,0,127,64,0,0,127,64,0,0,191,64,0,0,255,0,0,27,254,0,0,255,244,0,0,255,128,0,0,255,248,0,0,7,254,0,0,0,255,0,0,0,191,64,0,0,127,64,0,0,127,64,0,0,127,64,0,0,127,64,0,0,127,64,0,0,127,64,0,0,127,64,0,0,127,192,0,0,63,245,0,0,47,255,64,0,11,255,64,0,0,111,64,
  // 0x007c  |
  3,38,38,21,9,247,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,
  // 0x007d  }
  13,33,132,15,1,250,191,64,0,0,191,244,0,0,191,252,0,0,7,254,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,191,0,0,0,191,0,0,0,127,128,0,0,63,245,0,0,11,255,128,0,1,255,128,0,15,255,128,0,63,228,0,0,191,128,0,0,191,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,0,255,0,0,1,255,0,0,27,254,0,0,191,252,0,0,191,240,0,0,190,64,0,0,
  // 0x007e  ~
  18,6,30,22,2,10,31,254,0,0,32,191,255,244,1,240,255,255,255,255,240,244,7,255,255,224,128,0,47,255,64,0,0,0,16,0,
};

#endif // HAS_GRAPHICAL_TFT