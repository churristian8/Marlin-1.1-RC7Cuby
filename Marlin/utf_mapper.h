/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef UTF_MAPPER_H
#define UTF_MAPPER_H

#include  "language.h"

#if ENABLED(DOGLCD)
  #define HARDWARE_CHAR_OUT u8g.print
#else
  #define HARDWARE_CHAR_OUT lcd.write
#endif

#if DISABLED(SIMULATE_ROMFONT) && ENABLED(DOGLCD)
  #if ENABLED(DISPLAY_CHARSET_ISO10646_1)
    #define MAPPER_ONE_TO_ONE
  #elif ENABLED(DISPLAY_CHARSET_ISO10646_5)
    #define MAPPER_ONE_TO_ONE
  #elif ENABLED(DISPLAY_CHARSET_ISO10646_KANA)
    #define MAPPER_ONE_TO_ONE
  #elif ENABLED(DISPLAY_CHARSET_ISO10646_GREEK)
    #define MAPPER_ONE_TO_ONE
  #endif
#else // SIMULATE_ROMFONT
  #if DISPLAY_CHARSET_HD44780 == JAPANESE
    #if ENABLED(MAPPER_C2C3)
      const PROGMEM uint8_t utf_recode[] =
           { // 0    1    2    3    4    5    6    7    8    9    a    b    c    d    e    f          This is fair for symbols
             0x20,0x3f,0xec,0xed,0x3f,0x5c,0x7c,0x3f,0x22,0x63,0x61,0x7f,0x3f,0x3f,0x52,0xb0,  // c2a
  //          ' '       Â¢    Â£         Â­    l         "    c    a    Â«              R
             0xdf,0x3f,0x32,0x33,0x27,0xe4,0xf1,0xa5,0x2c,0x31,0xdf,0x7e,0x3f,0x3f,0x3f,0x3f,  // c2b but relatively bad for letters.
  //          Â°         2    3    `    N    p    .    ,    1    Â°    Â»
             0x3f,0x3f,0x3f,0x3f,0xe1,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,  // c38
  //                              Ã¤
             0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0xef,0x78,0x3f,0x3f,0x3f,0x3f,0xf5,0x3f,0x3f,0xe2,  // c39 missing characters display as '?'
  //                                        Ã¶     x                       Ã¼              ÃŸ
             0x3f,0x3f,0x3f,0x3f,0xe1,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,  // c3a
  //                              Ã¤
             0x3f,0xee,0x3f,0x3f,0x3f,0x3f,0xef,0xfd,0x3f,0x3f,0x3f,0x3f,0xf5,0x3f,0x3f,0x3f   // c3b
  //               n                        Ã¶    Ã·                        Ã¼
           };
    #elif ENABLED(MAPPER_E382E383)
      const PROGMEM uint8_t utf_recode[] =
           { // 0    1    2    3    4    5    6    7    8    9    a    b    c    d    e    f
             0x3d,0xb1,0xb1,0xa8,0xb2,0xa9,0xb3,0xaa,0xb4,0xab,0xb5,0xb6,0xb6,0xb7,0xb7,0xb8,  // e382a Please test and correct
  //          =    ã‚¢    ã‚¢    ã‚£    ã‚¤    ã‚¥    ã‚¦    ã‚§    ã‚¨    ã‚©    ã‚ª   ã‚¬    ã‚¬    ã‚­   ã‚­    ã‚¯
             0xb8,0xb9,0xb9,0xba,0xba,0xbb,0xbb,0xbc,0xbc,0xbd,0xbd,0xbe,0xbe,0xbf,0xbf,0xc0,  // e382b
  //          ã‚¯    ã‚±    ã‚±   ã‚³    ã‚³    ã‚µ    ã‚µ    ã‚·    ã‚·   ã‚¹    ã‚¹    ã‚»    ã‚»    ã‚½   ã‚½    ã‚¿
             0xc0,0xc1,0xc1,0xc2,0xc2,0xc2,0xc3,0xc3,0xc4,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,  // e3838
  //          ã‚¿    ãƒ�    ãƒ�    ãƒƒ    ãƒƒ    ãƒƒ    ãƒ†   ãƒ†    ãƒˆ    ãƒˆ    ãƒŠ    ãƒ‹    ãƒŒ    ãƒ�   ãƒŽ    ãƒ�
             0xca,0xca,0xcb,0xcb,0xcb,0xcc,0xcc,0xcc,0xcd,0xcd,0xcd,0xce,0xce,0xce,0xcf,0xd0,  // e3839
  //          ãƒ�    ãƒ�    ãƒ’   ãƒ’    ãƒ’     ãƒ•    ãƒ•   ãƒ•    ãƒ˜    ãƒ˜    ãƒ˜    ãƒ›    ãƒ›    ãƒ›   ãƒž    ãƒŸ
             0xd1,0xd2,0xd3,0xd4,0xd4,0xd5,0xd5,0xae,0xd6,0xd7,0xd8,0xd9,0xda,0xdb,0xdc,0xdc,  // e383a
  //          ãƒ     ãƒ¡    ãƒ¢    ãƒ£   ãƒ£    ãƒ¦    ãƒ¦    ãƒ§    ãƒ¨    ãƒ©    ãƒª    ãƒ«    ãƒ¬    ãƒ­   ãƒ¯    ãƒ¯
             0xec,0xa7,0xa6,0xdd,0xcc,0x3f,0x3f,0x3f,0x3f,0x3f,0xa6,0xa5,0xb0,0xa4,0xa4,0x3f   // e383b
  //          ãƒ°    ãƒ±    ãƒ²    ãƒ³    ãƒ•    ?    ?   ?    ?    ?    ãƒ²    ãƒ»    ãƒ¼    ãƒ½    ãƒ½   ?
           };
    #elif ENABLED(MAPPER_D0D1)
      #error "Cyrillic on a JAPANESE display makes no sense. There are no matching symbols."
    #endif

  #elif DISPLAY_CHARSET_HD44780 == WESTERN
    #if ENABLED(MAPPER_C2C3)
      const PROGMEM uint8_t utf_recode[] =
           { // 0    1    2    3    4    5    6    7    8    9    a    b    c    d    e    f   This is relative complete.
             0x20,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0x22,0xa9,0xaa,0xab,0x3f,0x3f,0xae,0x3f,  // c2aÂ Â¡Â¢Â£Â¤Â¥Â¦Â§Â¨Â©ÂªÂ«Â¬Â­Â®Â¯
  //         ' '   Â¡    Â¢    Â£    Â¤    Â¥    Â¦    Â§    "    Â©    Âª    Â«    ?    ?    Â®    ?
             0xb0,0xb1,0xb2,0xb3,0x27,0xb5,0xb6,0xb7,0x2c,0xb9,0xba,0xbb,0xbc,0xbd,0xbe,0xbf,  // c2b Â°Â±Â²Â³Â´ÂµÂ¶Â·Â¸Â¹ÂºÂ»Â¼Â½Â¾Â¿
  //          Â°    Â±    Â³    Â²    ?    Âµ    Â¶    Â·    ,    Â¹    Âº    Â»    Â¼    Â½    Â¾    Â¿
             0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,  // c38 Ã€Ã�ÃƒÃ„Ã…Ã†Ã‡ÃˆÃ‰ÃŠÃ‹ÃŒÃ�ÃŽÃ�
  //          Ã€    Ã�    Ã‚    Ãƒ    Ã„    Ã…    Ã†    Ã‡    Ãˆ    Ã‰    ÃŠ    Ã‹    ÃŒ    Ã�    ÃŽ    Ã�
             0xd0,0xd1,0xd2,0xd3,0xd4,0xd5,0xd6,0xd7,0xd8,0xd9,0xda,0xdb,0xdc,0xdd,0xde,0xdf,  // c39 Ã�Ã‘Ã“Ã”Ã•Ã–Ã—Ã˜Ã™ÃšÃ›ÃœÃ�ÃžÃŸ
  //          Ã�    Ã‘    Ã’    Ã“    Ã”    Ã•    Ã–    Ã—    Ã˜    Ã™    Ãš    Ã›    Ãœ    Ã�    Ãž    ÃŸ
             0xe0,0xe1,0xe2,0xe3,0xe4,0xe5,0xe6,0xe7,0xe8,0xe9,0xea,0xeb,0xec,0xed,0xee,0xef,  // c3a Ã Ã¡Ã£Ã¤Ã¥Ã¦Ã§Ã¨Ã©ÃªÃ«Ã¬Ã­Ã®Ã¯
  //          Ã     Ã¡    Ã¢    Ã£    Ã¤    Ã¥    Ã¦    Ã§    Ã¨    Ã©    Ãª    Ã«    Ã¬    Ã­    Ã®    Ã¯
             0xf0,0xf1,0xf2,0xf3,0xf4,0xf5,0xf6,0xf7,0xf8,0xf9,0xfa,0xfb,0xfc,0xfd,0xfe,0xff   // c3b Ã°Ã±Ã³Ã´ÃµÃ¶Ã·Ã¸Ã¹ÃºÃ»Ã¼Ã½Ã¾Ã¿
  //          Ã°    Ã±    Ã²    Ã³    Ã´    Ãµ    Ã¶    Ã·    Ã¸    Ã¹    Ãº    Ã»    Ã¼    Ã½    Ã¾    Ã¿
           };
    #elif ENABLED(MAPPER_D0D1)
      #define MAPPER_D0D1_MOD
      const PROGMEM uint8_t utf_recode[] =
           {//0    1    2    3    4    5    6    7    8    9    a    b    c    d    e    f
             0x41,0x80,0x42,0x92,0x81,0x45,0x82,0x83,0x84,0x85,0x4b,0x86,0x4d,0x48,0x4f,0x87,  // d0a
  //          A    Ð‘    B    Ð“    Ð”    E    Ð–    Ð—    Ð˜    Ð™    K    Ð›    M    H    O    ÐŸ
             0x50,0x43,0x54,0x88,0xd8,0x58,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x62,0x8f,0xac,0xad,  // d0b
  //          P    C    T    Ð£    Ð¤    X    Ð§    Ñ‡    Ð¨    Ð©    Ðª    Ð«    b    Ð­    Ð®    Ð¯
             0x61,0x36,0x42,0x92,0x81,0x65,0x82,0xb3,0x84,0x85,0x6b,0x86,0x4d,0x48,0x6f,0x87,  // d18
  //          a    6    B    Ð“    Ð”    e    Ð–    Â³    Ð˜    Ð™    k    Ð›    M    H    o    ÐŸ
             0x70,0x63,0x54,0x79,0xd8,0x78,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x62,0x8f,0xac,0xad   // d19
  //          p    c    T    y    Ð¤    x    Ð§    Ñ‡    Ð¨    Ð©    Ðª    Ð«    b    Ð­    Ð®    Ð¯
            };
    #elif ENABLED(MAPPER_E382E383)
      #error "Katakana on a WESTERN display makes no sense. There are no matching symbols."
    #endif

  #elif DISPLAY_CHARSET_HD44780 == CYRILLIC
    #if ENABLED(MAPPER_D0D1)
      #define MAPPER_D0D1_MOD
      // it is a Russian alphabet translation
      // except 0401 --> 0xa2 = Ð�, 0451 --> 0xb5 = Ñ‘
      const PROGMEM uint8_t utf_recode[] =
             { 0x41,0xa0,0x42,0xa1,0xe0,0x45,0xa3,0xa4,   // unicode U+0400 to U+047f
             // A   Ð‘->Ð�  B    Ð“    Ð”    E    Ð–    Ð—      // 0  Ð€ Ð� Ð‚ Ðƒ Ð„ Ð… Ð† Ð‡
               0xa5,0xa6,0x4b,0xa7,0x4d,0x48,0x4f,0xa8,   //    Ðˆ Ð‰ ÐŠ Ð‹ ÐŒ Ð� ÐŽ Ð�
             // Ð˜    Ð™    K    Ð›    M    H    O    ÐŸ      // 1  Ð� Ð‘ Ð’ Ð“ Ð” Ð• Ð– Ð—
               0x50,0x43,0x54,0xa9,0xaa,0x58,0xe1,0xab,   //    Ð˜ Ð™ Ðš Ð› Ðœ Ð� Ðž ÐŸ
             // P    C    T    Ð£    Ð¤    X    Ð§    Ñ‡      // 2  Ð  Ð¡ Ð¢ Ð£ Ð¤ Ð¥ Ð“ Ð§
               0xac,0xe2,0xad,0xae,0x62,0xaf,0xb0,0xb1,   //    Ð¨ Ð© Ðª Ð« Ð¬ Ð­ Ð® Ð¯
             // Ð¨    Ð©    Ðª    Ð«    b    Ð­    Ð®    Ð¯      // 3  Ð° Ð± Ð² Ð³ Ð´ Ðµ Ð¶ Ð·
               0x61,0xb2,0xb3,0xb4,0xe3,0x65,0xb6,0xb7,   //    Ð¸ Ð¹ Ðº Ð» Ð¼ Ð½ Ð¾ Ð¿
             // a   Ð±->Ñ‘  Ð²    Ð³    Ð´    e    Ð¶    Ð·      // 4  Ñ€ Ñ� Ñ‚ Ñƒ Ñ„ Ñ… Ñ† Ñ‡
               0xb8,0xb9,0xba,0xbb,0xbc,0xbd,0x6f,0xbe,   //    Ñˆ Ñ‰ ÑŠ Ñ‹ ÑŒ Ñ� ÑŽ Ñ�
             // Ð¸    Ð¹    Ðº    Ð»    Ð¼    Ð½    o    Ð¿      // 5  Ñ� Ñ‘ Ñ’ Ñ“ Ñ” Ñ• Ñ– Ñ—
               0x70,0x63,0xbf,0x79,0xe4,0x78,0xe5,0xc0,   //    Ñ˜ Ñ™ Ñš Ñ› Ñœ Ñ� Ñž ÑŸ
             // p    c    Ñ‚    y    Ñ„    x    Ñ†    Ñ‡      // 6  Ñ  Ñ¡ Ñ¢ Ñ£ Ñ¤ Ñ¥ Ñ¦ Ñ§
               0xc1,0xe6,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7    //    Ñª Ñ© Ñª Ñ« Ñ¬ Ñ­ Ñ® Ñ¯
             // Ñˆ    Ñ‰    ÑŠ    Ñ‹    ÑŒ    Ñ�    ÑŽ    Ñ�      // 7  Ñ° Ñ± Ñ² Ñ³ Ñ´ Ñµ Ñ¶ Ñ·
             };                                           //    Ñ» Ñ¹ Ñº Ñ» Ñ¼ Ñ½ Ñ¾ Ñ¿
    #elif ENABLED(MAPPER_C2C3)
      #error "Western languages on a CYRILLIC display makes no sense. There are no matching symbols."
    #elif ENABLED(MAPPER_E382E383)
      #error "Katakana on a CYRILLIC display makes no sense. There are no matching symbols."
    #endif
  #else
    #error "Something went wrong in the setting of DISPLAY_CHARSET_HD44780"
  #endif // DISPLAY_CHARSET_HD44780
#endif // SIMULATE_ROMFONT

#if ENABLED(MAPPER_C2C3)

  char charset_mapper(char c) {
    static uint8_t utf_hi_char; // UTF-8 high part
    static bool seen_c2 = false;
    uint8_t d = c;
    if ( d >= 0x80u ) { // UTF-8 handling
      if ( (d >= 0xc0u) && (!seen_c2) ) {
        utf_hi_char = d - 0xc2u;
        seen_c2 = true;
        return 0;
      }
      else if (seen_c2) {
        d &= 0x3fu;
        #ifndef MAPPER_ONE_TO_ONE
          HARDWARE_CHAR_OUT((char)pgm_read_byte_near(utf_recode + d + (utf_hi_char << 6) - 0x20));
        #else
          HARDWARE_CHAR_OUT((char)(0x80u + (utf_hi_char << 6) + d)) ;
        #endif
      }
      else {
        HARDWARE_CHAR_OUT('?');
      }
    }
    else {
      HARDWARE_CHAR_OUT((char) c );
    }
    seen_c2 = false;
    return 1;
  }

#elif ENABLED(MAPPER_CECF)

  char charset_mapper(char c) {
    static uint8_t utf_hi_char; // UTF-8 high part
    static bool seen_ce = false;
    uint8_t d = c;
    if ( d >= 0x80 ) { // UTF-8 handling
      if ( (d >= 0xc0) && (!seen_ce) ) {
        utf_hi_char = d - 0xce;
        seen_ce = true;
        return 0;
      }
      else if (seen_ce) {
        d &= 0x3f;
        #ifndef MAPPER_ONE_TO_ONE
          HARDWARE_CHAR_OUT((char)pgm_read_byte_near(utf_recode + d + (utf_hi_char << 6) - 0x20));
        #else
          HARDWARE_CHAR_OUT((char)(0x80 + (utf_hi_char << 6) + d)) ;
        #endif
      }
      else {
        HARDWARE_CHAR_OUT('?');
      }
    }
    else {
      HARDWARE_CHAR_OUT((char) c );
    }
    seen_ce = false;
    return 1;
  }

#elif ENABLED(MAPPER_CECF)

  char charset_mapper(char c) {
    static uint8_t utf_hi_char; // UTF-8 high part
    static bool seen_ce = false;
    uint8_t d = c;
    if ( d >= 0x80 ) { // UTF-8 handling
      if ( (d >= 0xc0) && (!seen_ce) ) {
        utf_hi_char = d - 0xce;
        seen_ce = true;
        return 0;
      }
      else if (seen_ce) {
        d &= 0x3f;
        #ifndef MAPPER_ONE_TO_ONE
          HARDWARE_CHAR_OUT((char)pgm_read_byte_near(utf_recode + d + (utf_hi_char << 6) - 0x20));
        #else
          HARDWARE_CHAR_OUT((char)(0x80 + (utf_hi_char << 6) + d)) ;
        #endif
      }
      else {
        HARDWARE_CHAR_OUT('?');
      }
    }
    else {
      HARDWARE_CHAR_OUT((char) c );
    }
    seen_ce = false;
    return 1;
  }

#elif ENABLED(MAPPER_D0D1_MOD)

  char charset_mapper(char c) {
    // it is a Russian alphabet translation
    // except 0401 --> 0xa2 = Ð�, 0451 --> 0xb5 = Ñ‘
    static uint8_t utf_hi_char; // UTF-8 high part
    static bool seen_d5 = false;
    uint8_t d = c;
    if (d >= 0x80) { // UTF-8 handling
      if (d >= 0xd0 && !seen_d5) {
        utf_hi_char = d - 0xd0;
        seen_d5 = true;
        return 0;
      }
      else if (seen_d5) {
        d &= 0x3f;
        if (!utf_hi_char && d == 1) {
          HARDWARE_CHAR_OUT((char) 0xa2); // Ð�
        }
        else if (utf_hi_char == 1 && d == 0x11) {
          HARDWARE_CHAR_OUT((char)0xb5); // Ñ‘
        }
        else {
          HARDWARE_CHAR_OUT((char)pgm_read_byte_near(utf_recode + d + (utf_hi_char << 6) - 0x10));
        }
      }
      else {
        HARDWARE_CHAR_OUT('?');
      }
    }
    else {
      HARDWARE_CHAR_OUT((char) c );
    }
    seen_d5 = false;
    return 1;
  }

#elif ENABLED(MAPPER_D0D1)

  char charset_mapper(char c) {
    static uint8_t utf_hi_char; // UTF-8 high part
    static bool seen_d5 = false;
    uint8_t d = c;
    if (d >= 0x80u) { // UTF-8 handling
      if (d >= 0xd0u && !seen_d5) {
        utf_hi_char = d - 0xd0u;
        seen_d5 = true;
        return 0;
      }
      else if (seen_d5) {
        d &= 0x3fu;
        #ifndef MAPPER_ONE_TO_ONE
          HARDWARE_CHAR_OUT((char)pgm_read_byte_near(utf_recode + d + (utf_hi_char << 6) - 0x20));
        #else
          HARDWARE_CHAR_OUT((char)(0xa0u + (utf_hi_char << 6) + d)) ;
        #endif
      }
      else {
        HARDWARE_CHAR_OUT('?');
      }
    }
    else {
      HARDWARE_CHAR_OUT((char) c );
    }
    seen_d5 = false;
    return 1;
  }

#elif ENABLED(MAPPER_E382E383)

  char charset_mapper(char c) {
    static uint8_t utf_hi_char; // UTF-8 high part
    static bool seen_e3 = false;
    static bool seen_82_83 = false;
    uint8_t d = c;
    if (d >= 0x80) { // UTF-8 handling
      if (d == 0xe3 && !seen_e3) {
        seen_e3 = true;
        return 0;      // eat 0xe3
      }
      else if (d >= 0x82 && seen_e3 && !seen_82_83) {
        utf_hi_char = d - 0x82;
        seen_82_83 = true;
        return 0;
      }
      else if (seen_e3 && seen_82_83) {
        d &= 0x3f;
        #ifndef MAPPER_ONE_TO_ONE
          HARDWARE_CHAR_OUT((char)pgm_read_byte_near(utf_recode + d + (utf_hi_char << 6) - 0x20));
        #else
          HARDWARE_CHAR_OUT((char)(0x80 + (utf_hi_char << 6) + d)) ;
        #endif
      }
      else {
        HARDWARE_CHAR_OUT((char) '?' );
      }
    }
    else {
      HARDWARE_CHAR_OUT((char) c );
    }
    seen_e3 = false;
    seen_82_83 = false;
    return 1;
  }

#else

  #define MAPPER_NON

  char charset_mapper(char c) {
    HARDWARE_CHAR_OUT( c );
    return 1;
  }

  #endif // code mappers

#endif // UTF_MAPPER_H

