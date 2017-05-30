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

/**
 * Japanese (Kana UTF8 version)
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */

#ifndef LANGUAGE_KANA_UTF_H
#define LANGUAGE_KANA_UTF_H

#define MAPPER_E382E383
// Define SIMULATE_ROMFONT to see what is seen on the character based display defined in Configuration.h
//#define SIMULATE_ROMFONT
#define DISPLAY_CHARSET_ISO10646_KANA

// This just to show the potential benefit of unicode.
// This translation can be improved by using the full charset of unicode codeblock U+30A0 to U+30FF.

// ç‰‡ä»®å��è¡¨ç¤ºå®šç¾©
#define WELCOME_MSG                         MACHINE_NAME " ready."
#define MSG_SD_INSERTED                     "ã‚«ãƒ¼ãƒ‰ã‚¬ã‚½ã‚¦ãƒ‹ãƒ¥ã‚¦ã‚µãƒ¬ãƒžã‚·ã‚¿"        // "Card inserted"
#define MSG_SD_REMOVED                      "ã‚«ãƒ¼ãƒ‰ã‚¬ã‚¢ãƒªãƒžã‚»ãƒ³"               // "Card removed"
#define MSG_LCD_ENDSTOPS                    "ã‚¨ãƒ³ãƒ‰ã‚¹ãƒˆãƒƒãƒ—"                  // "Endstops" // Max length 8 characters
#define MSG_MAIN                            "ãƒ¡ã‚¤ãƒ³"                       // "Main"
#define MSG_AUTOSTART                       "ã‚¸ãƒ‰ã‚¦ã‚«ã‚¤ã‚·"                   // "Autostart"
#define MSG_DISABLE_STEPPERS                "ãƒ¢ãƒ¼ã‚¿ãƒ¼ãƒ‡ãƒ³ã‚²ãƒ³ ã‚ªãƒ•"            // "Disable steppers"
#define MSG_AUTO_HOME                       "ã‚²ãƒ³ãƒ†ãƒ³ãƒ•ãƒƒã‚­"                  // "Auto home"
#define MSG_AUTO_HOME_X                     "Xã‚¸ã‚¯ ã‚²ãƒ³ãƒ†ãƒ³ãƒ•ãƒƒã‚­"             // "Home X"
#define MSG_AUTO_HOME_Y                     "Yã‚¸ã‚¯ ã‚²ãƒ³ãƒ†ãƒ³ãƒ•ãƒƒã‚­"             // "Home Y"
#define MSG_AUTO_HOME_Z                     "Zã‚¸ã‚¯ ã‚²ãƒ³ãƒ†ãƒ³ãƒ•ãƒƒã‚­"             // "Home Z"
#define MSG_LEVEL_BED_HOMING                "ã‚²ãƒ³ãƒ†ãƒ³ãƒ•ãƒƒã‚­ãƒ�ãƒ¥ã‚¦"              // "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               "ãƒ¬ãƒ™ãƒªãƒ³ã‚°ã‚«ã‚¤ã‚·"                // "Click to Begin"
#define MSG_LEVEL_BED_NEXT_POINT            "ãƒ„ã‚®ãƒŽã‚½ã‚¯ãƒ†ã‚¤ãƒ†ãƒ³ãƒ˜"             // "Next Point"
#define MSG_LEVEL_BED_DONE                  "ãƒ¬ãƒ™ãƒªãƒ³ã‚°ã‚«ãƒ³ãƒªãƒ§ã‚¦"              // "Leveling Done!"
#define MSG_LEVEL_BED_CANCEL                "ãƒˆãƒªãƒ¤ãƒ¡"                      // "Cancel"
#define MSG_SET_HOME_OFFSETS                "ã‚­ã‚¸ãƒ¥ãƒ³ã‚ªãƒ•ã‚»ãƒƒãƒˆã‚»ãƒƒãƒ†ã‚¤"         // "Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            "ã‚ªãƒ•ã‚»ãƒƒãƒˆã‚¬ãƒ†ã‚­ãƒ¨ã‚¦ã‚µãƒ¬ãƒžã‚·ã‚¿"       // "Offsets applied"
#define MSG_SET_ORIGIN                      "ã‚­ã‚¸ãƒ¥ãƒ³ã‚»ãƒƒãƒˆ"                 // "Set origin"
#define MSG_PREHEAT_1                       "PLA ãƒ¨ãƒ�ãƒ„"                   // "Preheat PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   "PLA ã‚¹ãƒ™ãƒ†ãƒ¨ãƒ�ãƒ„"              // " All"
#define MSG_PREHEAT_1_BEDONLY               "PLA ãƒ™ãƒƒãƒ‰ãƒ¨ãƒ�ãƒ„"              // " Bed"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 "ã‚»ãƒƒãƒ†ã‚¤"       // " conf"
#define MSG_PREHEAT_2                       "ABS ãƒ¨ãƒ�ãƒ„"                  // "Preheat ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   "ABS ã‚¹ãƒ™ãƒ†ãƒ¨ãƒ�ãƒ„"              // " All"
#define MSG_PREHEAT_2_BEDONLY               "ABS ãƒ™ãƒƒãƒ‰ãƒ¨ãƒ�ãƒ„"              // " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 "ã‚»ãƒƒãƒ†ã‚¤"       // " conf"
#define MSG_COOLDOWN                        "ã‚«ãƒ�ãƒ„ãƒ†ã‚¤ã‚·"                  // "Cooldown"
#define MSG_SWITCH_PS_ON                    "ãƒ‡ãƒ³ã‚²ãƒ³ ã‚ªãƒ³"                 // "Switch power on"
#define MSG_SWITCH_PS_OFF                   "ãƒ‡ãƒ³ã‚²ãƒ³ ã‚ªãƒ•"                 // "Switch power off"
#define MSG_EXTRUDE                         "ã‚ªã‚·ãƒ€ã‚·"                     // "Extrude"
#define MSG_RETRACT                         "ãƒ’ã‚­ã‚³ãƒŸã‚»ãƒƒãƒ†ã‚¤"                // "Retract"
#define MSG_MOVE_AXIS                       "ã‚¸ã‚¯ã‚¤ãƒ‰ã‚¦"                    // "Move axis"
#define MSG_LEVEL_BED                       "ãƒ™ãƒƒãƒ‰ãƒ¬ãƒ™ãƒªãƒ³ã‚°"                // "Level bed"
#define MSG_MOVE_X                          "Xã‚¸ã‚¯ ã‚¤ãƒ‰ã‚¦"                  // "Move X"
#define MSG_MOVE_Y                          "Yã‚¸ã‚¯ ã‚¤ãƒ‰ã‚¦"                  // "Move Y"
#define MSG_MOVE_Z                          "Zã‚¸ã‚¯ ã‚¤ãƒ‰ã‚¦"                  // "Move Z"
#define MSG_MOVE_E                          "ã‚¨ã‚¯ã‚¹ãƒˆãƒ«ãƒ¼ãƒ€ãƒ¼"                // "Extruder"
#define MSG_MOVE_01MM                       "0.1mm ã‚¤ãƒ‰ã‚¦"                 // "Move 0.1mm"
#define MSG_MOVE_1MM                        "  1mm ã‚¤ãƒ‰ã‚¦"                 // "Move 1mm"
#define MSG_MOVE_10MM                       " 10mm ã‚¤ãƒ‰ã‚¦"                 // "Move 10mm"
#define MSG_SPEED                           "ã‚½ã‚¯ãƒ‰"                       // "Speed"
#define MSG_BED_Z                           "Zã‚ªãƒ•ã‚»ãƒƒãƒˆ"                   // "Bed Z"
#define MSG_NOZZLE                          "ãƒŽã‚ºãƒ«"                       // "Nozzle"
#define MSG_BED                             "ãƒ™ãƒƒãƒ‰"                       // "Bed"
#define MSG_FAN_SPEED                       "ãƒ•ã‚¡ãƒ³ã‚½ã‚¯ãƒ‰"                    // "Fan speed"
#define MSG_FLOW                            "ãƒˆã‚·ãƒ¥ãƒ„ãƒªãƒ§ã‚¦"                   // "Flow"
#define MSG_CONTROL                         "ã‚»ã‚¤ã‚®ãƒ§"                      // "Control"
#define MSG_MIN                             LCD_STR_THERMOMETER " ã‚µã‚¤ãƒ†ã‚¤" // " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " ã‚µã‚¤ã‚³ã‚¦" // " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " ãƒ•ã‚¡ã‚¯ã‚¿ãƒ¼" // " Fact"
#define MSG_AUTOTEMP                        "ã‚¸ãƒ‰ã‚¦ã‚ªãƒ³ãƒ‰ã‚»ã‚¤ã‚®ãƒ§"               // "Autotemp"
#define MSG_ON                              "ã‚ªãƒ³ "                         // "On "
#define MSG_OFF                             "ã‚ªãƒ• "                         // "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "ã‚»ãƒ³ã‚¿ã‚¯"                     // "Select"
#define MSG_ACC                             "ã‚«ã‚½ã‚¯ãƒ‰ mm/s2"               // "Accel"
#define MSG_VXY_JERK                        "XYã‚¸ã‚¯ ãƒ¤ã‚¯ãƒ‰ mm/s"            // "Vxy-jerk"
#define MSG_VZ_JERK                         "Zã‚¸ã‚¯ ãƒ¤ã‚¯ãƒ‰ mm/s"             // "Vz-jerk"
#define MSG_VE_JERK                         "ã‚¨ã‚¯ã‚¹ãƒˆãƒ«ãƒ¼ãƒ€ãƒ¼ ãƒ¤ã‚¯ãƒ‰"          // "Ve-jerk"
#define MSG_VMAX                            "ã‚µã‚¤ãƒ€ã‚¤ã‚ªã‚¯ãƒªã‚½ã‚¯ãƒ‰ "            // "Vmax "
#define MSG_X                               "X"
#define MSG_Y                               "Y"
#define MSG_Z                               "Z"
#define MSG_E                               "E"
#define MSG_VMIN                            "ã‚µã‚¤ã‚·ãƒ§ã‚¦ã‚ªã‚¯ãƒªã‚½ã‚¯ãƒ‰"           // "Vmin"
#define MSG_VTRAV_MIN                       "ã‚µã‚¤ã‚·ãƒ§ã‚¦ã‚¤ãƒ‰ã‚¦ã‚½ã‚¯ãƒ‰"           // "VTrav min"
#define MSG_AMAX                            "ã‚µã‚¤ãƒ€ã‚¤ã‚«ã‚½ã‚¯ãƒ‰ "              // "Amax "
#define MSG_A_RETRACT                       "ãƒ’ã‚­ã‚³ãƒŸã‚«ã‚½ã‚¯ãƒ‰"               // "A-retract"
#define MSG_A_TRAVEL                        "ã‚¤ãƒ‰ã‚¦ã‚«ã‚½ã‚¯ãƒ‰"                // "A-travel"
#define MSG_XSTEPS                          "Xsteps/mm"
#define MSG_YSTEPS                          "Ysteps/mm"
#define MSG_ZSTEPS                          "Zsteps/mm"
#define MSG_ESTEPS                          "Esteps/mm"
#define MSG_TEMPERATURE                     "ã‚ªãƒ³ãƒ‰"                      // "Temperature"
#define MSG_MOTION                          "ã‚¦ã‚´ã‚­ã‚»ãƒƒãƒ†ã‚¤"                // "Motion"
#define MSG_VOLUMETRIC                      "ãƒ•ã‚£ãƒ©ãƒ¡ãƒ³ãƒˆ"                   // "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "ãƒ•ã‚£ãƒ©ãƒ¡ãƒ³ãƒˆãƒ�ãƒ§ãƒƒã‚±ã‚¤"            // "Fil. Dia."
#define MSG_CONTRAST                        "LCDã‚³ãƒ³ãƒˆãƒ©ã‚¹ãƒˆ"               // "LCD contrast"
#define MSG_STORE_EPROM                     "ãƒ¡ãƒ¢ãƒªãƒ˜ã‚«ã‚¯ãƒŽã‚¦"               // "Store memory"
#define MSG_LOAD_EPROM                      "ãƒ¡ãƒ¢ãƒªã‚«ãƒ©ãƒ¨ãƒŸã‚³ãƒŸ"               // "Load memory"
#define MSG_RESTORE_FAILSAFE                "ã‚»ãƒƒãƒ†ã‚¤ãƒªã‚»ãƒƒãƒˆ"               // "Restore failsafe"
#define MSG_REFRESH                         "ãƒªãƒ•ãƒ¬ãƒƒã‚·ãƒ¥"                  // "Refresh"
#define MSG_WATCH                           "ã‚¸ãƒ§ã‚¦ãƒ›ã‚¦ã‚¬ãƒ¡ãƒ³"               // "Info screen"
#define MSG_PREPARE                         "ã‚¸ãƒ¥ãƒ³ãƒ“ã‚»ãƒƒãƒ†ã‚¤"               // "Prepare"
#define MSG_TUNE                            "ãƒ�ãƒ§ã‚¦ã‚»ã‚¤"                    // "Tune"
#define MSG_PAUSE_PRINT                     "ã‚¤ãƒ�ã‚¸ãƒ†ã‚¤ã‚·"                  // "Pause print"
#define MSG_RESUME_PRINT                    "ãƒ—ãƒªãƒ³ãƒˆã‚µã‚¤ã‚«ã‚¤"                // "Resume print"
#define MSG_STOP_PRINT                      "ãƒ—ãƒªãƒ³ãƒˆãƒ†ã‚¤ã‚·"                 // "Stop print"
#define MSG_CARD_MENU                       "SDã‚«ãƒ¼ãƒ‰ã‚«ãƒ©ãƒ—ãƒªãƒ³ãƒˆ"            // "Print from SD"
#define MSG_NO_CARD                         "SDã‚«ãƒ¼ãƒ‰ã‚¬ã‚¢ãƒªãƒžã‚»ãƒ³"            // "No SD card"
#define MSG_DWELL                           "ã‚­ãƒ¥ã‚¦ã‚·"                     // "Sleep..."
#define MSG_USERWAIT                        "ã‚·ãƒ�ãƒ©ã‚¯ã‚ªãƒžãƒ�ã‚¯ãƒ€ã‚µã‚¤"           // "Wait for user..."
#define MSG_RESUMING                        "ãƒ—ãƒªãƒ³ãƒˆã‚µã‚¤ã‚«ã‚¤"                // "Resuming print"
#define MSG_PRINT_ABORTED                   "ãƒ—ãƒªãƒ³ãƒˆã‚¬ãƒ�ãƒ¥ã‚¦ã‚·ã‚µãƒ¬ãƒžã‚·ã‚¿"       // "Print aborted"
#define MSG_NO_MOVE                         "ã‚¦ã‚´ã‚­ãƒžã‚»ãƒ³"                  // "No move."
#define MSG_KILLED                          "ãƒ’ã‚¸ãƒ§ã‚¦ãƒ†ã‚¤ã‚·"                  // "KILLED. "
#define MSG_STOPPED                         "ãƒ†ã‚¤ã‚·ã‚·ãƒžã‚·ã‚¿"                  // "STOPPED. "
#define MSG_CONTROL_RETRACT                 "ãƒ’ã‚­ã‚³ãƒŸãƒªãƒ§ã‚¦ mm"                // "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            "ãƒ’ã‚­ã‚³ãƒŸãƒªãƒ§ã‚¦S mm"               // "Swap Re.mm"
#define MSG_CONTROL_RETRACTF                "ãƒ’ã‚­ã‚³ãƒŸã‚½ã‚¯ãƒ‰ mm/s"             // "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "ãƒŽã‚ºãƒ«ã‚¿ã‚¤ãƒ’ mm"                // "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         "ãƒ›ã‚·ãƒ§ã‚¦ãƒªãƒ§ã‚¦ mm"               // "UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "ãƒ›ã‚·ãƒ§ã‚¦ãƒªãƒ§ã‚¦S mm"              // "S UnRet+mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "ãƒ›ã‚·ãƒ§ã‚¦ã‚½ã‚¯ãƒ‰ mm/s"            // "UnRet  V"
#define MSG_AUTORETRACT                     "ã‚¸ãƒ‰ã‚¦ãƒ’ã‚­ã‚³ãƒŸ"                 // "AutoRetr."
#define MSG_FILAMENTCHANGE                  "ãƒ•ã‚£ãƒ©ãƒ¡ãƒ³ãƒˆã‚³ã‚¦ã‚«ãƒ³"              // "Change filament"
#define MSG_INIT_SDCARD                     "SDã‚«ãƒ¼ãƒ‰ã‚µã‚¤ãƒ¨ãƒŸã‚³ãƒŸ"             // "Init. SD card"
#define MSG_CNG_SDCARD                      "SDã‚«ãƒ¼ãƒ‰ã‚³ã‚¦ã‚«ãƒ³"               // "Change SD card"
#define MSG_ZPROBE_OUT                      "Zãƒ—ãƒ­ãƒ¼ãƒ– ãƒ™ãƒƒãƒ‰ã‚¬ã‚¤"            // "Z probe out. bed"
#define MSG_HOME                            "ã‚µã‚­ãƒ‹"                      // "Home" // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "ãƒ²ãƒ•ãƒƒã‚­ã‚µã‚»ãƒ†ã‚¯ãƒ€ã‚µã‚¤"           // "first"
#define MSG_ZPROBE_ZOFFSET                  "Zã‚ªãƒ•ã‚»ãƒƒãƒˆ"                   // "Z Offset"
#define MSG_BABYSTEP_X                      "Xã‚¸ã‚¯ ãƒ“ãƒ‰ã‚¦"                  // "Babystep X"
#define MSG_BABYSTEP_Y                      "Yã‚¸ã‚¯ ãƒ“ãƒ‰ã‚¦"                  // "Babystep Y"
#define MSG_BABYSTEP_Z                      "Zã‚¸ã‚¯ ãƒ“ãƒ‰ã‚¦"                  // "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "ã‚¤ãƒ‰ã‚¦ã‚²ãƒ³ã‚«ã‚¤ã‚±ãƒ³ãƒ�ã‚­ãƒŽã‚¦"         // "Endstop abort"
#define MSG_HEATING_FAILED_LCD              "ã‚«ãƒ�ãƒ„ã‚·ãƒƒãƒ‘ã‚¤"                 // "Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              "ã‚¨ãƒ©ãƒ¼:ã‚¸ãƒ§ã‚¦ãƒ�ãƒ§ã‚¦ã‚µãƒ¼ãƒŸã‚¹ã‚¿ãƒ¼ã‚­ãƒŽã‚¦"  // "Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 "ãƒ�ãƒ„ãƒœã‚¦ã‚½ã‚¦"                   // "THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     "ã‚¨ãƒ©ãƒ¼:ã‚µã‚¤ã‚³ã‚¦ã‚ªãƒ³ãƒ�ãƒ§ã‚¦ã‚«"         // "Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     "ã‚¨ãƒ©ãƒ¼:ã‚µã‚¤ãƒ†ã‚¤ã‚ªãƒ³ãƒŸãƒžãƒ³"          // "Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 "ã‚¨ãƒ©ãƒ¼:ãƒ™ãƒƒãƒ‰ ã‚µã‚¤ã‚³ã‚¦ã‚ªãƒ³ãƒ�ãƒ§ã‚¦ã‚«"    // "Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 "ã‚¨ãƒ©ãƒ¼:ãƒ™ãƒƒãƒ‰ ã‚µã‚¤ãƒ†ã‚¤ã‚ªãƒ³ãƒŸãƒžãƒ³"     // "Err: MINTEMP BED"
#define MSG_HALTED                          "ãƒ—ãƒªãƒ³ã‚¿ãƒ¼ãƒ�ãƒ†ã‚¤ã‚·ã‚·ãƒžã‚·ã‚¿"         // "PRINTER HALTED"
#define MSG_PLEASE_RESET                    "ãƒªã‚»ãƒƒãƒˆã‚·ãƒ†ã‚¯ãƒ€ã‚µã‚¤"              // "Please reset"
#define MSG_SHORT_DAY                       "d"                          // One character only
#define MSG_SHORT_HOUR                      "h"                          // One character only
#define MSG_SHORT_MINUTE                    "m"                          // One character only
#define MSG_HEATING                         "ã‚«ãƒ�ãƒ„ãƒ�ãƒ¥ã‚¦"                   // "Heating..."
#define MSG_HEATING_COMPLETE                "ã‚«ãƒ�ãƒ„ã‚«ãƒ³ãƒªãƒ§ã‚¦"                 // "Heating done."
#define MSG_BED_HEATING                     "ãƒ™ãƒƒãƒ‰ ã‚«ãƒ�ãƒ„ãƒ�ãƒ¥ã‚¦"              // "Bed Heating."
#define MSG_BED_DONE                        "ãƒ™ãƒƒãƒ‰ ã‚«ãƒ�ãƒ„ã‚«ãƒ³ãƒªãƒ§ã‚¦"            // "Bed done."
#define MSG_DELTA_CALIBRATE                 "ãƒ‡ãƒ«ã‚¿ ã‚³ã‚¦ã‚»ã‚¤"                // "Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               "Xã‚¸ã‚¯ ã‚³ã‚¦ã‚»ã‚¤"                 // "Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               "Yã‚¸ã‚¯ ã‚³ã‚¦ã‚»ã‚¤"                 // "Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               "Zã‚¸ã‚¯ ã‚³ã‚¦ã‚»ã‚¤"                 // "Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          "ãƒ�ãƒ¥ã‚¦ã‚·ãƒ³ ã‚³ã‚¦ã‚»ã‚¤"              // "Calibrate Center"
#define MSG_INFO_MENU                       "ã‚³ãƒŽãƒ—ãƒªãƒ³ã‚¿ãƒ¼ãƒ‹ãƒ„ã‚¤ãƒ†"             // "About Printer"
#define MSG_INFO_PRINTER_MENU               "ãƒ—ãƒªãƒ³ã‚¿ãƒ¼ã‚¸ãƒ§ã‚¦ãƒ›ã‚¦"              // "Printer Info"
#define MSG_INFO_STATS_MENU                 "ãƒ—ãƒªãƒ³ãƒˆã‚¸ãƒ§ã‚¦ã‚­ãƒ§ã‚¦"              // "Printer Stats"
#define MSG_INFO_BOARD_MENU                 "ã‚»ã‚¤ã‚®ãƒ§ã‚±ã‚¤ã‚¸ãƒ§ã‚¦ãƒ›ã‚¦"            // "Board Info"
#define MSG_INFO_THERMISTOR_MENU            "ã‚µãƒ¼ãƒŸã‚¹ã‚¿ãƒ¼"                   // "Thermistors"
#define MSG_INFO_EXTRUDERS                  "ã‚¨ã‚¯ã‚¹ãƒˆãƒ«ãƒ¼ãƒ€ãƒ¼ã‚¹ã‚¦"             // "Extruders"
#define MSG_INFO_BAUDRATE                   "ãƒœãƒ¼ãƒ¬ãƒ¼ãƒˆ"                    // "Baud"
#define MSG_INFO_PROTOCOL                   "ãƒ—ãƒ­ãƒˆã‚³ãƒ«"                    // "Protocol"
#define MSG_INFO_PRINT_COUNT                "ãƒ—ãƒªãƒ³ãƒˆã‚¹ã‚¦   "                // "Print Count"
#define MSG_INFO_COMPLETED_PRINTS           "ã‚«ãƒ³ãƒªãƒ§ã‚¦ã‚¹ã‚¦"                  // "Completed"
#define MSG_INFO_PRINT_TIME                 "ãƒ—ãƒªãƒ³ãƒˆã‚¸ã‚«ãƒ³ãƒ«ã‚¤ã‚±ã‚¤"            // "Total print time"
#define MSG_INFO_PRINT_LONGEST              "ã‚µã‚¤ãƒ�ãƒ§ã‚¦ãƒ—ãƒªãƒ³ãƒˆã‚¸ã‚«ãƒ³"           // "Longest job time"
#define MSG_INFO_PRINT_FILAMENT             "ãƒ•ã‚£ãƒ©ãƒ¡ãƒ³ãƒˆã‚·ãƒ¨ã‚¦ãƒªãƒ§ã‚¦ãƒ«ã‚¤ã‚±ã‚¤"       // "Extruded total"
#define MSG_INFO_MIN_TEMP                   "ã‚»ãƒƒãƒ†ã‚¤ã‚µã‚¤ãƒ†ã‚¤ã‚ªãƒ³"              // "Min Temp"
#define MSG_INFO_MAX_TEMP                   "ã‚»ãƒƒãƒ†ã‚¤ã‚µã‚¤ã‚³ã‚¦ã‚ªãƒ³"              // "Max Temp"
#define MSG_INFO_PSU                        "ãƒ‡ãƒ³ã‚²ãƒ³ã‚·ãƒ¥ãƒ™ãƒ„"                // "Power Supply"
#define MSG_FILAMENT_CHANGE_HEADER          "ãƒ•ã‚£ãƒ©ãƒ¡ãƒ³ãƒˆã‚³ã‚¦ã‚«ãƒ³"              // "CHANGE FILAMENT"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   "ãƒ‰ã‚¦ã‚µãƒ²ã‚»ãƒ³ã‚¿ã‚¯ã‚·ãƒ†ã‚¯ãƒ€ã‚µã‚¤"        // "CHANGE OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "ã‚µãƒ©ãƒ‹ã‚ªã‚·ãƒ€ã‚¹"                 // "Extrude more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "ãƒ—ãƒªãƒ³ãƒˆã‚µã‚¤ã‚«ã‚¤"                // "Resume print"
#define MSG_FILAMENT_CHANGE_INIT_1          "ã‚³ã‚¦ã‚«ãƒ³ãƒ²ã‚«ã‚¤ã‚·ã‚·ãƒžã‚¹"            // "Wait for start"
#define MSG_FILAMENT_CHANGE_INIT_2          "ã‚·ãƒ�ãƒ©ã‚¯ã‚ªãƒžãƒ�ã‚¯ãƒ€ã‚µã‚¤"            // "of the filament"
#define MSG_FILAMENT_CHANGE_INIT_3          ""                           // "change"
#define MSG_FILAMENT_CHANGE_UNLOAD_1        "ãƒ•ã‚£ãƒ©ãƒ¡ãƒ³ãƒˆãƒŒã‚­ãƒ€ã‚·ãƒ�ãƒ¥ã‚¦"          // "Wait for"
#define MSG_FILAMENT_CHANGE_UNLOAD_2        "ã‚·ãƒ�ãƒ©ã‚¯ã‚ªãƒžãƒ�ã‚¯ãƒ€ã‚µã‚¤"            // "filament unload"
#define MSG_FILAMENT_CHANGE_UNLOAD_3        ""
#define MSG_FILAMENT_CHANGE_INSERT_1        "ãƒ•ã‚£ãƒ©ãƒ¡ãƒ³ãƒˆãƒ²ã‚½ã‚¦ãƒ‹ãƒ¥ã‚¦ã‚·,"         // "Insert filament"
#define MSG_FILAMENT_CHANGE_INSERT_2        "ã‚¯ãƒªãƒƒã‚¯ã‚¹ãƒ«ãƒˆã‚¾ãƒƒã‚³ã‚¦ã‚·ãƒžã‚¹"         // "and press button"
#define MSG_FILAMENT_CHANGE_INSERT_3        ""                           // "to continue..."
#define MSG_FILAMENT_CHANGE_LOAD_1          "ãƒ•ã‚£ãƒ©ãƒ¡ãƒ³ãƒˆã‚½ã‚¦ãƒ†ãƒ³ãƒ�ãƒ¥ã‚¦"          // "Wait for"
#define MSG_FILAMENT_CHANGE_LOAD_2          "ã‚·ãƒ�ãƒ©ã‚¯ã‚ªãƒžãƒ�ã‚¯ãƒ€ã‚µã‚¤"            // "filament load"
#define MSG_FILAMENT_CHANGE_LOAD_3          ""
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       "ãƒ•ã‚£ãƒ©ãƒ¡ãƒ³ãƒˆã‚ªã‚·ãƒ€ã‚·ãƒ�ãƒ¥ã‚¦"          // "Wait for"
#define MSG_FILAMENT_CHANGE_EXTRUDE_2       "ã‚·ãƒ�ãƒ©ã‚¯ã‚ªãƒžãƒ�ã‚¯ãƒ€ã‚µã‚¤"            // "filament extrude"
#define MSG_FILAMENT_CHANGE_EXTRUDE_3       ""
#define MSG_FILAMENT_CHANGE_RESUME_1        "ãƒ—ãƒªãƒ³ãƒˆãƒ²ã‚µã‚¤ã‚«ã‚¤ã‚·ãƒžã‚¹"           // "Wait for print"
#define MSG_FILAMENT_CHANGE_RESUME_2        "ã‚·ãƒ�ãƒ©ã‚¯ã‚ªãƒžãƒ�ã‚¯ãƒ€ã‚µã‚¤"            // "to resume"
#define MSG_FILAMENT_CHANGE_RESUME_3        ""

#endif // LANGUAGE_KANA_UTF_H

