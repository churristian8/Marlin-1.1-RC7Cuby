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
 * Greek
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_EL_H
#define LANGUAGE_EL_H

// Define SIMULATE_ROMFONT to see what is seen on the character based display defined in Configuration.h
//#define SIMULATE_ROMFONT

#define MAPPER_CECF
#define DISPLAY_CHARSET_ISO10646_GREEK

#define WELCOME_MSG                         MACHINE_NAME " Î­Ï„Î¿Î¹Î¼Î¿."
#define MSG_SD_INSERTED                     "Î•Î¹ÏƒÎ±Î³Ï‰Î³Î® ÎºÎ¬Ï�Ï„Î±Ï‚"
#define MSG_SD_REMOVED                      "Î‘Ï†Î±Î¯Ï�ÎµÏƒÎ· ÎºÎ¬Ï�Ï„Î±Ï‚"
#define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters
#define MSG_MAIN                            "Î’Î±ÏƒÎ¹ÎºÎ® ÎŸÎ¸ÏŒÎ½Î·"
#define MSG_AUTOSTART                       "Î‘Ï…Ï„ÏŒÎ¼Î±Ï„Î· ÎµÎºÎºÎ¯Î½Î·ÏƒÎ·"
#define MSG_DISABLE_STEPPERS                "Î‘Ï€ÎµÎ½ÎµÏ�Î³Î¿Ï€Î¿Î¯Î·ÏƒÎ· ÎœÎ¿Ï„Î­Ï�"
#define MSG_AUTO_HOME                       "Î‘Ï…Ï„Î¿Î¼. ÎµÏ€Î±Î½Î±Ï†Î¿Ï�Î¬ ÏƒÏ„Î¿ Î±Ï�Ï‡Î¹ÎºÏŒ ÏƒÎ·Î¼ÎµÎ¯Î¿" //SHORTEN
#define MSG_AUTO_HOME_X                     "Î‘Ï�Ï‡Î¹ÎºÏŒ ÏƒÎ·Î¼ÎµÎ¯Î¿ X"
#define MSG_AUTO_HOME_Y                     "Î‘Ï�Ï‡Î¹ÎºÏŒ ÏƒÎ·Î¼ÎµÎ¯Î¿ Y"
#define MSG_AUTO_HOME_Z                     "Î‘Ï�Ï‡Î¹ÎºÏŒ ÏƒÎ·Î¼ÎµÎ¯Î¿ Z"
#define MSG_LEVEL_BED_HOMING                "Î•Ï€Î±Î½Î±Ï†Î¿Ï�Î¬ Î•Ï€. Î•ÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚" //SHORTEN
#define MSG_LEVEL_BED_WAITING               "Î•Ï€Î¹Ï€ÎµÎ´Î¿Ï€Î¿Î¯Î·ÏƒÎ· ÎµÏ€. Î•ÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚ Ï€ÎµÏ�Î¹Î¼ÎµÎ½ÎµÎ¹" //SHORTEN
#define MSG_LEVEL_BED_NEXT_POINT            "Î•Ï€ÏŒÎ¼ÎµÎ½Î¿ ÏƒÎ·Î¼ÎµÎ¯Î¿"
#define MSG_LEVEL_BED_DONE                  "ÎŸÎ»Î¿ÎºÎ»Î®Ï�Ï‰ÏƒÎ· ÎµÏ€Î¹Ï€ÎµÎ´Î¿Ï€Î¿Î¯Î·ÏƒÎ·Ï‚!" //SHORTEN
#define MSG_LEVEL_BED_CANCEL                "Î‘ÎºÏ�Ï�Ï‰ÏƒÎ·"
#define MSG_SET_HOME_OFFSETS                "ÎŸÏ�Î¹ÏƒÎ¼ÏŒÏ‚ Î²Î±ÏƒÎ¹ÎºÏŽÎ½ Î¼ÎµÏ„Î±Ï„Î¿Ï€Î¯ÏƒÎµÏ‰Î½" //SHORTEN
#define MSG_HOME_OFFSETS_APPLIED            "Î•Ï†Î±Ï�Î¼ÏŒÏƒÏ„Î·ÎºÎ±Î½ Î¿Î¹ Î¼ÎµÏ„Î±Ï„Î¿Ï€Î¯ÏƒÎµÎ¹Ï‚" //SHORTEN
#define MSG_SET_ORIGIN                      "ÎŸÏ�Î¹ÏƒÎ¼ÏŒÏ‚ Ï€Ï�Î¿Î­Î»ÎµÏ…ÏƒÎ·Ï‚"
#define MSG_PREHEAT_1                       "Î Ï�Î¿Î¸Î­Ï�Î¼Î±Î½ÏƒÎ· PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " ÏŒÎ»Î±"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " bed" //SHORTEN
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " ÎµÏ€Î¹Î²ÎµÎ²Î±Î¯Ï‰ÏƒÎ·" //SHORTEN
#define MSG_PREHEAT_2                       "Î Ï�Î¿Î¸Î­Ï�Î¼Î±Î½ÏƒÎ· ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " ÏŒÎ»Î±"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " bed" //SHORTEN
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " ÎµÏ€Î¹Î²ÎµÎ²Î±Î¯Ï‰ÏƒÎ·" //SHORTEN
#define MSG_H1                              "1"
#define MSG_H2                              "2"
#define MSG_H3                              "3"
#define MSG_H4                              "4"
#define MSG_COOLDOWN                        "ÎœÎµÎ¹Ï‰ÏƒÎ· Î¸ÎµÏ�Î¼Î¿ÎºÏ�Î±ÏƒÎ¹Î±Ï‚"
#define MSG_SWITCH_PS_ON                    "Î•Î½ÎµÏ�Î³Î¿Ï€Î¿Î¯Î·ÏƒÎ·"
#define MSG_SWITCH_PS_OFF                   "Î‘Ï€ÎµÎ½ÎµÏ�Î³Î¿Ï€Î¿Î¯Î·ÏƒÎ·"
#define MSG_EXTRUDE                         "Î•Î¾ÏŽÎ¸Î·ÏƒÎ·"
#define MSG_RETRACT                         "Î‘Î½Î¬ÏƒÏ…Ï�ÏƒÎ·"
#define MSG_MOVE_AXIS                       "ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· Î¬Î¾Î¿Î½Î±"
#define MSG_LEVEL_BED                       "Î•Ï€Î¹Ï€ÎµÎ´Î¿Ï€Î¿Î¯Î·ÏƒÎ· Î•Ï€. Î•ÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚" //SHORTEN
#define MSG_MOVE_X                          "ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· X"
#define MSG_MOVE_Y                          "ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· Y"
#define MSG_MOVE_Z                          "ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· Z"
#define MSG_MOVE_E                          "Î•Î¾Ï‰Î¸Î·Ï„Î®Ï�Î±Ï‚"
#define MSG_MOVE_E1                         "1"
#define MSG_MOVE_E2                         "2"
#define MSG_MOVE_E3                         "3"
#define MSG_MOVE_E4                         "4"
#define MSG_MOVE_01MM                       "ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· 0,1Î¼Î¼"
#define MSG_MOVE_1MM                        "ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· 1Î¼Î¼"
#define MSG_MOVE_10MM                       "ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· 10Î¼Î¼"
#define MSG_SPEED                           "Î¤Î±Ï‡Ï�Ï„Î·Ï„Î±"
#define MSG_BED_Z                           "Î•Ï€. Î•ÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚ Z"
#define MSG_NOZZLE                          "Î‘ÎºÏ�Î¿Ï†Ï�ÏƒÎ¹Î¿"
#define MSG_N1                              " 1"
#define MSG_N2                              " 2"
#define MSG_N3                              " 3"
#define MSG_N4                              " 4"
#define MSG_BED                             "ÎšÎ»Î¯Î½Î·"
#define MSG_FAN_SPEED                       "Î¤Î±Ï‡Ï�Ï„Î·Ï„Î± Î±Î½ÎµÎ¼Î¹ÏƒÏ„Î®Ï�Î±"
#define MSG_FLOW                            "Î¡Î¿Î®"
#define MSG_CONTROL                         "ÎˆÎ»ÎµÎ³Ï‡Î¿Ï‚"
#define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "Î‘Ï…Ï„Î¿Î¼ Ï�Ï�Î¸Î¼Î¹ÏƒÎ· Î¸ÎµÏ�/ÏƒÎ¯Î±Ï‚" //SHORTEN
#define MSG_ON                              "Î•Î½ÎµÏ�Î³Î¿Ï€Î¿Î¹Î·Î¼Î­Î½Î¿"
#define MSG_OFF                             "Î‘Ï€ÎµÎ½ÎµÏ�Î³Î¿Ï€Î¿Î¹Î·Î¼Î­Î½Î¿"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_E1                              " E1"
#define MSG_E2                              " E2"
#define MSG_E3                              " E3"
#define MSG_E4                              " E4"
#define MSG_ACC                             "Î•Ï€Î¹Ï„Î¬Ï‡Ï…Î½ÏƒÎ·"
#define MSG_VXY_JERK                        "VÎ±Î½Ï„Î¯Î´Ï�Î±ÏƒÎ· xy"
#define MSG_VZ_JERK                         "VÎ±Î½Ï„Î¯Î´Ï�Î±ÏƒÎ· z"
#define MSG_VE_JERK                         "VÎ±Î½Ï„Î¯Î´Ï�Î±ÏƒÎ· e"
#define MSG_VMAX                            "V ÎœÎ­Î³Î¹ÏƒÏ„Î¿"
#define MSG_X                               "X"
#define MSG_Y                               "Y"
#define MSG_Z                               "Z"
#define MSG_E                               "E"
#define MSG_VMIN                            "V Î•Î»Î¬Ï‡Î¹ÏƒÏ„Î¿"
#define MSG_VTRAV_MIN                       "VÎµÎ»Î¬Ï‡. Î¼ÎµÏ„Î±Ï„ÏŒÏ€Î¹ÏƒÎ·"
#define MSG_AMAX                            "AÎ¼ÎµÎ³ "
#define MSG_A_RETRACT                       "Î‘-Î±Î½Î¬ÏƒÏ…Ï�ÏƒÎ·"
#define MSG_A_TRAVEL                        "Î‘-Î¼ÎµÏ„Î±Ï„ÏŒÏ€Î¹ÏƒÎ·"
#define MSG_XSTEPS                          "BÎ®Î¼Î±Ï„Î± X Î±Î½Î¬ Î¼Î¼"
#define MSG_YSTEPS                          "BÎ®Î¼Î±Ï„Î± Î¥ Î±Î½Î¬ Î¼Î¼"
#define MSG_ZSTEPS                          "BÎ®Î¼Î±Ï„Î± Î– Î±Î½Î¬ Î¼Î¼"
#define MSG_ESTEPS                          "BÎ®Î¼Î±Ï„Î± Î• Î±Î½Î¬ Î¼Î¼"
#define MSG_TEMPERATURE                     "Î˜ÎµÏ�Î¼Î¿ÎºÏ�Î±ÏƒÎ¯Î±"
#define MSG_MOTION                          "ÎšÎ¯Î½Î·ÏƒÎ·"
#define MSG_VOLUMETRIC                      "Î�Î®Î¼Î±"
#define MSG_VOLUMETRIC_ENABLED              "Î• ÏƒÎµ Î¼Î¼3"
#define MSG_FILAMENT_DIAM                   "Î”Î¹Î¬Î¼ÎµÏ„Ï�Î¿Ï‚ Î½Î®Î¼Î±Ï„Î¿Ï‚"
#define MSG_DIAM_E1                         " 1"
#define MSG_DIAM_E2                         " 2"
#define MSG_DIAM_E3                         " 3"
#define MSG_DIAM_E4                         " 4"
#define MSG_CONTRAST                        "ÎšÎ¿Î½Ï„Ï�Î¬ÏƒÏ„ LCD"
#define MSG_STORE_EPROM                     "Î‘Ï€Î¿Î¸Î®ÎºÎµÏ…ÏƒÎ·"
#define MSG_LOAD_EPROM                      "Î¦ÏŒÏ�Ï„Ï‰ÏƒÎ·"
#define MSG_RESTORE_FAILSAFE                "Î•Ï€Î±Î½Î±Ï†Î¿Ï�Î¬ Î±ÏƒÏ†Î±Î»Î¿Ï�Ï‚ Î±Î½Ï„Î¹Î³Ï�Î¬Ï†Î¿Ï…" //SHORTEN
#define MSG_REFRESH                         "Î‘Î½Î±Î½Î­Ï‰ÏƒÎ·"
#define MSG_WATCH                           "ÎŸÎ¸ÏŒÎ½Î· Ï€Î»Î·Ï�Î¿Ï†ÏŒÏ�Î·ÏƒÎ·Ï‚"
#define MSG_PREPARE                         "Î Ï�Î¿ÎµÏ„Î¿Î¹Î¼Î±ÏƒÎ¯Î±"
#define MSG_TUNE                            "Î£Ï…Î½Ï„Î¿Î½Î¹ÏƒÎ¼ÏŒÏ‚"
#define MSG_PAUSE_PRINT                     "Î Î±Ï�ÏƒÎ· ÎµÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚"
#define MSG_RESUME_PRINT                    "Î£Ï…Î½Î­Ï‡Î¹ÏƒÎ· ÎµÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚"
#define MSG_STOP_PRINT                      "Î”Î¹Î±ÎºÎ¿Ï€Î® ÎµÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚"
#define MSG_CARD_MENU                       "Î•ÎºÏ„Ï�Ï€Ï‰ÏƒÎ· Î±Ï€ÏŒ SD"
#define MSG_NO_CARD                         "Î”ÎµÎ½ Î²Ï�Î­Î¸Î·ÎºÎµ SD"
#define MSG_DWELL                           "Î‘Î½Î±ÏƒÏ„Î¿Î»Î® Î»ÎµÎ¹Ï„Î¿Ï…Ï�Î³Î¯Î±Ï‚"
#define MSG_USERWAIT                        "Î‘Î½Î±Î¼Î¿Î½Î® Î³Î¹Î± Ï‡Ï�Î®ÏƒÏ„Î·"
#define MSG_RESUMING                        "Î£Ï…Î½ÎµÏ‡Î¯Î¶ÎµÏ„Î±Î¹ Î· ÎµÎºÏ„Ï�Ï€Ï‰ÏƒÎ·" //SHORTEN
#define MSG_PRINT_ABORTED                   "Î”Î¹Î±ÎºÏŒÏ€Ï„ÎµÏ„Î±Î¹ Î· ÎµÎºÏ„Ï�Ï€Ï‰ÏƒÎ·" //SHORTEN
#define MSG_NO_MOVE                         "ÎšÎ±Î¼Î¯Î± ÎºÎ¯Î½Î·ÏƒÎ·."
#define MSG_KILLED                          "Î¤Î•Î¡ÎœÎ‘Î¤Î™Î£ÎœÎŸÎ£. "
#define MSG_STOPPED                         "Î”Î™Î‘ÎšÎŸÎ Î—. "
#define MSG_CONTROL_RETRACT                 "Î‘Î½Î¬ÏƒÏ…Ï�ÏƒÎ· Î¼Î¼"
#define MSG_CONTROL_RETRACT_SWAP            "Î•Î½Î±Î»Î»Î±Î³Î® Î±Î½Î¬ÏƒÏ…Ï�ÏƒÎ·Ï‚ Î¼Î¼"  //SHORTEN
#define MSG_CONTROL_RETRACTF                "Î‘Î½Î¬ÏƒÏ…Ï�ÏƒÎ· V"
#define MSG_CONTROL_RETRACT_ZLIFT           "ÎœÎµÏ„Î±Ï€Î®Î´Î·ÏƒÎ· Î¼Î¼"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet+mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "Î‘Ï…Ï„ÏŒÎ¼Î±Ï„Î· Î±Î½Î¬ÏƒÏ…Ï�ÏƒÎ·"
#define MSG_FILAMENTCHANGE                  "Î‘Î»Î»Î±Î³Î® Î½Î®Î¼Î±Ï„Î¿Ï‚"
#define MSG_INIT_SDCARD                     "Î Ï�Î¿ÎµÏ„Î¿Î¹Î¼Î±ÏƒÎ¯Î± ÎºÎ¬Ï�Ï„Î±Ï‚ SD"  //SHORTEN
#define MSG_CNG_SDCARD                      "Î‘Î»Î»Î±Î³Î® ÎºÎ¬Ï�Ï„Î±Ï‚ SD"
#define MSG_ZPROBE_OUT                      "Î”Î¹ÎµÏ�ÎµÏ�Î½Î·ÏƒÎ· Z ÎµÎºÏ„ÏŒÏ‚ Î•Ï€.Î•ÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚" //SHORTEN
#define MSG_YX_UNHOMED                      "Î•Ï€Î±Î½Î±Ï†Î¿Ï�Î¬ Î§/Î¥ Ï€Ï�Î¹Î½ Î±Ï€ÏŒ Î–" //SHORTEN
#define MSG_XYZ_UNHOMED                     "Î•Ï€Î±Î½Î±Ï†Î¿Ï�Î¬ Î§Î¥Î– Ï€Ï�ÏŽÏ„Î±"
#define MSG_ZPROBE_ZOFFSET                  "ÎœÎµÏ„Î±Ï„ÏŒÏ€Î¹ÏƒÎ· Î–"
#define MSG_BABYSTEP_X                      "ÎœÎ¹ÎºÏ�ÏŒ Î²Î®Î¼Î± Î§"
#define MSG_BABYSTEP_Y                      "ÎœÎ¹ÎºÏ�ÏŒ Î²Î®Î¼Î± Î¥"
#define MSG_BABYSTEP_Z                      "ÎœÎ¹ÎºÏ�ÏŒ Î²Î®Î¼Î± Î–"
#define MSG_ENDSTOP_ABORT                   "Î‘ÎºÏ�Ï�Ï‰ÏƒÎ· endstop "
#define MSG_HEATING_FAILED_LCD              "Î‘Î½ÎµÏ€Î¹Ï„Ï…Ï‡Î®Ï‚ Î¸Î­Ï�Î¼Î±Î½ÏƒÎ·"
#define MSG_ERR_REDUNDANT_TEMP              "Î Î›Î•ÎŸÎ�Î‘Î–ÎŸÎ¥Î£Î‘ Î˜Î•Î¡ÎœÎŸÎ¤Î—Î¤Î‘"
#define MSG_THERMAL_RUNAWAY                 "Î”Î™Î‘Î¦Î¥Î“Î— Î˜Î•Î¡ÎœÎŸÎšÎ¡Î‘Î£Î™Î‘Î£"
#define MSG_ERR_MAXTEMP                     "Î Î•Î¡Î™Î¤Î— Î˜Î•Î¡ÎœÎŸÎšÎ¡Î‘Î£Î™Î‘"
#define MSG_ERR_MINTEMP                     "ÎœÎ— Î•Î Î‘Î¡ÎšÎ—Î£ Î˜Î•Î¡ÎœÎŸÎšÎ¡Î‘Î£Î™Î‘Î£" //SHORTEN
#define MSG_ERR_MAXTEMP_BED                 "ÎœÎ•Î“Î™Î£Î¤Î— Î˜Î•Î¡ÎœÎŸÎšÎ¡Î‘Î£Î™Î‘Î£ Î•Î . Î•ÎšÎ¤Î¥Î Î©Î£Î—Î£" //SHORTEN
#define MSG_ERR_MINTEMP_BED                 "Î•Î›Î‘Î§Î™Î£Î¤Î— Î˜Î•Î¡ÎœÎŸÎšÎ¡Î‘Î£Î™Î‘Î£ Î•Î . Î•ÎšÎ¤Î¥Î Î©Î£Î—Î£" //SHORTEN
#define MSG_HALTED                          "H ÎµÎºÏ„Ï�Ï€Ï‰ÏƒÎ· Î´Î¹Î±ÎºÏŒÏ€Î·ÎºÎµ"
#define MSG_PLEASE_RESET                    "PLEASE RESET" //TRANSLATE
#define MSG_HEATING                         "Î˜ÎµÏ�Î¼Î±Î¯Î½ÎµÏ„Î±Î¹â€¦"
#define MSG_HEATING_COMPLETE                "Î— Î¸Î­Ï�Î¼Î±Î½ÏƒÎ· Î¿Î»Î¿ÎºÎ»Î·Ï�ÏŽÎ¸Î·ÎºÎµ." //SHORTEN
#define MSG_BED_HEATING                     "Î˜Î­Ï�Î¼Î±Î½ÏƒÎ· Î•Î . Î•ÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚" //SHORTEN
#define MSG_BED_DONE                        "Î— Î•Ï€. Î•ÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚ Î¿Î»Î¿ÎºÎ»Î·Ï�ÏŽÎ¸Î·ÎºÎµ" //SHORTEN
#define MSG_DELTA_CALIBRATE                 "Î’Î±Î¸Î¼Î¿Î½ÏŒÎ¼Î·ÏƒÎ· Delta"
#define MSG_DELTA_CALIBRATE_X               "Î’Î±Î¸Î¼Î¿Î½ÏŒÎ¼Î·ÏƒÎ· X"
#define MSG_DELTA_CALIBRATE_Y               "Î’Î±Î¸Î¼Î¿Î½ÏŒÎ¼Î·ÏƒÎ· Y"
#define MSG_DELTA_CALIBRATE_Z               "Î’Î±Î¸Î¼Î¿Î½ÏŒÎ¼Î·ÏƒÎ· Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Î’Î±Î¸Î¼Î¿Î½ÏŒÎ¼Î·ÏƒÎ· ÎºÎ­Î½Ï„Ï�Î¿Ï…"

#define MSG_INFO_MENU                       "About Printer"
#define MSG_INFO_PRINTER_MENU               "Printer Info"
#define MSG_INFO_STATS_MENU                 "Printer Stats"
#define MSG_INFO_BOARD_MENU                 "Board Info"
#define MSG_INFO_THERMISTOR_MENU            "Thermistors"
#define MSG_INFO_EXTRUDERS                  "Extruders"
#define MSG_INFO_BAUDRATE                   "Baud"
#define MSG_INFO_PROTOCOL                   "Protocol"

#if LCD_WIDTH > 19
  #define MSG_INFO_PRINT_COUNT              "Print Count"
  #define MSG_INFO_COMPLETED_PRINTS         "Completed  "
  #define MSG_INFO_PRINT_TIME               "Total Time "
#else
  #define MSG_INFO_PRINT_COUNT              "Prints   "
  #define MSG_INFO_COMPLETED_PRINTS         "Completed"
  #define MSG_INFO_PRINT_TIME               "Duration "
#endif
#define MSG_INFO_MIN_TEMP                   "Min Temp"
#define MSG_INFO_MAX_TEMP                   "Max Temp"
#define MSG_INFO_PSU                        "Power Supply"

#define MSG_FILAMENT_CHANGE_HEADER          "CHANGE FILAMENT"
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Extrude more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Resume print"

#if LCD_HEIGHT >= 4
  #define MSG_FILAMENT_CHANGE_INIT_1        "Wait for start"
  #define MSG_FILAMENT_CHANGE_INIT_2        "of the filament"
  #define MSG_FILAMENT_CHANGE_INIT_3        "change"
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      "Wait for"
  #define MSG_FILAMENT_CHANGE_UNLOAD_2      "filament unload"
  #define MSG_FILAMENT_CHANGE_UNLOAD_3      ""
  #define MSG_FILAMENT_CHANGE_INSERT_1      "Insert filament"
  #define MSG_FILAMENT_CHANGE_INSERT_2      "and press button"
  #define MSG_FILAMENT_CHANGE_INSERT_3      "to continue..."
  #define MSG_FILAMENT_CHANGE_LOAD_1        "Wait for"
  #define MSG_FILAMENT_CHANGE_LOAD_2        "filament load"
  #define MSG_FILAMENT_CHANGE_LOAD_3        ""
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1     "Wait for"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_2     "filament extrude"
  #define MSG_FILAMENT_CHANGE_EXTRUDE_3     ""
  #define MSG_FILAMENT_CHANGE_RESUME_1      "Wait for print"
  #define MSG_FILAMENT_CHANGE_RESUME_2      "to resume"
  #define MSG_FILAMENT_CHANGE_RESUME_3      ""
#else // LCD_HEIGHT < 4
  #define MSG_FILAMENT_CHANGE_INIT_1        "Please wait..."
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      "Ejecting..."
  #define MSG_FILAMENT_CHANGE_INSERT_1      "Insert and Click"
  #define MSG_FILAMENT_CHANGE_LOAD_1        "Loading..."
  #define MSG_FILAMENT_CHANGE_EXTRUDE_1     "Extruding..."
  #define MSG_FILAMENT_CHANGE_RESUME_1      "Resuming..."
#endif

#endif // LANGUAGE_EL_H

