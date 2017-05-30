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
 * Greek (Greece)
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_EL_GR_H
#define LANGUAGE_EL_GR_H

// Define SIMULATE_ROMFONT to see what is seen on the character based display defined in Configuration.h
//#define SIMULATE_ROMFONT

//#define MAPPER_CECF
//#define DISPLAY_CHARSET_ISO10646_GREEK

#define WELCOME_MSG                         MACHINE_NAME " Î­Ï„Î¿Î¹Î¼Î¿."
#define MSG_SD_INSERTED                     "Î•Î¹ÏƒÎ±Î³Ï‰Î³Î® ÎºÎ¬Ï�Ï„Î±Ï‚"
#define MSG_SD_REMOVED                      "Î‘Ï†Î±Î¯Ï�ÎµÏƒÎ· ÎºÎ¬Ï�Ï„Î±Ï‚"
#define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters
#define MSG_MAIN                            "Î’Î±ÏƒÎ¹ÎºÎ® ÎŸÎ¸ÏŒÎ½Î·"
#define MSG_AUTOSTART                       "Î‘Ï…Ï„ÏŒÎ¼Î±Ï„Î· ÎµÎºÎºÎ¯Î½Î·ÏƒÎ·"
#define MSG_DISABLE_STEPPERS                "Î‘Ï€ÎµÎ½ÎµÏ�Î³Î¿Ï€Î¿Î¯Î·ÏƒÎ· Î²Î·Î¼Î±Ï„Î¹ÏƒÏ„Î®"
#define MSG_AUTO_HOME                       "Î‘Ï…Ï„Î¿Î¼. ÎµÏ€Î±Î½Î±Ï†Î¿Ï�Î¬ ÏƒÏ„Î¿ Î±Ï�Ï‡Î¹ÎºÏŒ ÏƒÎ·Î¼ÎµÎ¯Î¿"
#define MSG_AUTO_HOME_X                     "Î‘Ï�Ï‡Î¹ÎºÏŒ ÏƒÎ·Î¼ÎµÎ¯Î¿ X"
#define MSG_AUTO_HOME_Y                     "Î‘Ï�Ï‡Î¹ÎºÏŒ ÏƒÎ·Î¼ÎµÎ¯Î¿ Y"
#define MSG_AUTO_HOME_Z                     "Î‘Ï�Ï‡Î¹ÎºÏŒ ÏƒÎ·Î¼ÎµÎ¯Î¿ Z"
#define MSG_LEVEL_BED_HOMING                "Î•Ï€Î±Î½Î±Ï†Î¿Ï�Î¬ ÏƒÏ„Î¿ Î±Ï�Ï‡Î¹ÎºÏŒ ÏƒÎ·Î¼ÎµÎ¯Î¿ Î§Î¥Î–"
#define MSG_LEVEL_BED_WAITING               "ÎšÎ¬Î½Ï„Îµ ÎºÎ»Î¹Îº Î³Î¹Î± Î½Î± Î¾ÎµÎºÎ¹Î½Î®ÏƒÎµÏ„Îµ"
#define MSG_LEVEL_BED_NEXT_POINT            "Î•Ï€ÏŒÎ¼ÎµÎ½Î¿ ÏƒÎ·Î¼ÎµÎ¯Î¿"
#define MSG_LEVEL_BED_DONE                  "ÎŸÎ»Î¿ÎºÎ»Î®Ï�Ï‰ÏƒÎ· ÎµÏ€Î¹Ï€ÎµÎ´Î¿Ï€Î¿Î¯Î·ÏƒÎ·Ï‚!"
#define MSG_LEVEL_BED_CANCEL                "Î‘ÎºÏ�Ï�Ï‰ÏƒÎ·"
#define MSG_SET_HOME_OFFSETS                "ÎŸÏ�Î¹ÏƒÎ¼ÏŒÏ‚ Î²Î±ÏƒÎ¹ÎºÏŽÎ½ Î¼ÎµÏ„Î±Ï„Î¿Ï€Î¯ÏƒÎµÏ‰Î½"
#define MSG_HOME_OFFSETS_APPLIED            "Î•Ï†Î±Ï�Î¼ÏŒÏƒÏ„Î·ÎºÎ±Î½ Î¿Î¹ Î¼ÎµÏ„Î±Ï„Î¿Ï€Î¯ÏƒÎµÎ¹Ï‚"
#define MSG_SET_ORIGIN                      "ÎŸÏ�Î¹ÏƒÎ¼ÏŒÏ‚ Ï€Ï�Î¿Î­Î»ÎµÏ…ÏƒÎ·Ï‚"
#define MSG_PREHEAT_1                       "Î Ï�Î¿Î¸Î­Ï�Î¼Î±Î½ÏƒÎ· PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " ÏŒÎ»Î±"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " ÎºÎ»Î¯Î½Î·"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " ÎµÏ€Î¹Î²ÎµÎ²Î±Î¯Ï‰ÏƒÎ·"
#define MSG_PREHEAT_2                       "Î Ï�Î¿Î¸Î­Ï�Î¼Î±Î½ÏƒÎ· ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " ÏŒÎ»Î±"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " ÎµÏ€Î¹Î²ÎµÎ²Î±Î¯Ï‰ÏƒÎ·"
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
#define MSG_LEVEL_BED                       "Î•Ï€Î¹Ï€ÎµÎ´Î¿Ï€Î¿Î¯Î·ÏƒÎ· ÎºÎ»Î¯Î½Î·Ï‚"
#define MSG_MOVE_X                          "ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· X"
#define MSG_MOVE_Y                          "ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· Y"
#define MSG_MOVE_Z                          "ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· Z"
#define MSG_MOVE_E                          "Î•Î¾Ï‰Î¸Î·Ï„Î®Ï�Î±Ï‚"
#define MSG_MOVE_E1                         "1"
#define MSG_MOVE_E2                         "2"
#define MSG_MOVE_E3                         "3"
#define MSG_MOVE_E4                         "4"
#define MSG_MOVE_01MM                       "ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· 0,1 Î¼Î¼"
#define MSG_MOVE_1MM                        "ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· 1 Î¼Î¼"
#define MSG_MOVE_10MM                       "ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· 10 Î¼Î¼"
#define MSG_SPEED                           "Î¤Î±Ï‡Ï�Ï„Î·Ï„Î±"
#define MSG_BED_Z                           "ÎšÎ»Î¯Î½Î· Z"
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
#define MSG_AUTOTEMP                        "Î‘Ï…Ï„Î¿Î¼. Ï�Ï�Î¸Î¼Î¹ÏƒÎ· Î¸ÎµÏ�Î¼Î¿ÎºÏ�Î±ÏƒÎ¯Î±Ï‚"
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
#define MSG_VMAX                            "VÎ¼ÎµÎ³ "
#define MSG_X                               "X"
#define MSG_Y                               "Y"
#define MSG_Z                               "Z"
#define MSG_E                               "E"
#define MSG_VMIN                            "VÎµÎ»Î±Ï‡"
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
#define MSG_RESTORE_FAILSAFE                "Î•Ï€Î±Î½Î±Ï†Î¿Ï�Î¬ Î±ÏƒÏ†Î±Î»Î¿Ï�Ï‚ Î±Î½Ï„Î¹Î³Ï�Î¬Ï†Î¿Ï…"
#define MSG_REFRESH                         "Î‘Î½Î±Î½Î­Ï‰ÏƒÎ·"
#define MSG_WATCH                           "ÎŸÎ¸ÏŒÎ½Î· Ï€Î»Î·Ï�Î¿Ï†ÏŒÏ�Î·ÏƒÎ·Ï‚"
#define MSG_PREPARE                         "Î Ï�Î¿ÎµÏ„Î¿Î¹Î¼Î±ÏƒÎ¯Î±"
#define MSG_TUNE                            "Î£Ï…Î½Ï„Î¿Î½Î¹ÏƒÎ¼ÏŒÏ‚"
#define MSG_PAUSE_PRINT                     "Î Î±Ï�ÏƒÎ· ÎµÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚"
#define MSG_RESUME_PRINT                    "Î£Ï…Î½Î­Ï‡Î¹ÏƒÎ· ÎµÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚"
#define MSG_STOP_PRINT                      "Î”Î¹Î±ÎºÎ¿Ï€Î® ÎµÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚"
#define MSG_CARD_MENU                       "Î•ÎºÏ„Ï�Ï€Ï‰ÏƒÎ· Î±Ï€ÏŒ SD"
#define MSG_NO_CARD                         "Î”ÎµÎ½ Î²Ï�Î­Î¸Î·ÎºÎµ SD"
#define MSG_DWELL                           "Î‘Î½Î±ÏƒÏ„Î¿Î»Î® Î»ÎµÎ¹Ï„Î¿Ï…Ï�Î³Î¯Î±Ï‚..."
#define MSG_USERWAIT                        "Î‘Î½Î±Î¼Î¿Î½Î® Î³Î¹Î± Ï‡Ï�Î®ÏƒÏ„Î·â€¦"
#define MSG_RESUMING                        "Î£Ï…Î½ÎµÏ‡Î¯Î¶ÎµÏ„Î±Î¹ Î· ÎµÎºÏ„Ï�Ï€Ï‰ÏƒÎ·"
#define MSG_PRINT_ABORTED                   "Î”Î¹Î±ÎºÏŒÏ€Ï„ÎµÏ„Î±Î¹ Î· ÎµÎºÏ„Ï�Ï€Ï‰ÏƒÎ·"
#define MSG_NO_MOVE                         "ÎšÎ±Î¼Î¯Î± ÎºÎ¯Î½Î·ÏƒÎ·."
#define MSG_KILLED                          "Î¤Î•Î¡ÎœÎ‘Î¤Î™Î£ÎœÎŸÎ£. "
#define MSG_STOPPED                         "Î”Î™Î‘ÎšÎŸÎ Î—. "
#define MSG_CONTROL_RETRACT                 "Î‘Î½Î¬ÏƒÏ…Ï�ÏƒÎ· Î¼Î¼"
#define MSG_CONTROL_RETRACT_SWAP            "Î•Î½Î±Î»Î»Î±Î³Î® Î±Î½Î¬ÏƒÏ…Ï�ÏƒÎ·Ï‚ Î¼Î¼"
#define MSG_CONTROL_RETRACTF                "Î‘Î½Î¬ÏƒÏ…Ï�ÏƒÎ· V"
#define MSG_CONTROL_RETRACT_ZLIFT           "ÎœÎµÏ„Î±Ï€Î®Î´Î·ÏƒÎ· Î¼Î¼"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet+mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "Î‘Ï…Ï„ÏŒÎ¼Î±Ï„Î· Î±Î½Î¬ÏƒÏ…Ï�ÏƒÎ·"
#define MSG_FILAMENTCHANGE                  "Î‘Î»Î»Î±Î³Î® Î½Î®Î¼Î±Ï„Î¿Ï‚"
#define MSG_INIT_SDCARD                     "Î Ï�Î¿ÎµÏ„Î¿Î¹Î¼Î±ÏƒÎ¯Î± ÎºÎ¬Ï�Ï„Î±Ï‚ SD"
#define MSG_CNG_SDCARD                      "Î‘Î»Î»Î±Î³Î® ÎºÎ¬Ï�Ï„Î±Ï‚ SD"
#define MSG_ZPROBE_OUT                      "Î”Î¹ÎµÏ�ÎµÏ�Î½Î·ÏƒÎ· Z ÎµÎºÏ„ÏŒÏ‚ ÎºÎ»Î¯Î½Î·Ï‚"
#define MSG_YX_UNHOMED                      "Î•Ï€Î±Î½Î±Ï†Î¿Ï�Î¬ Î§/Î¥ Ï€Ï�Î¹Î½ Î±Ï€ÏŒ Î–"
#define MSG_XYZ_UNHOMED                     "Î•Ï€Î±Î½Î±Ï†Î¿Ï�Î¬ Î§Î¥Î– Ï€Ï�ÏŽÏ„Î±"
#define MSG_ZPROBE_ZOFFSET                  "ÎœÎµÏ„Î±Ï„ÏŒÏ€Î¹ÏƒÎ· Î–"
#define MSG_BABYSTEP_X                      "ÎœÎ¹ÎºÏ�ÏŒ Î²Î®Î¼Î± Î§"
#define MSG_BABYSTEP_Y                      "ÎœÎ¹ÎºÏ�ÏŒ Î²Î®Î¼Î± Î¥"
#define MSG_BABYSTEP_Z                      "ÎœÎ¹ÎºÏ�ÏŒ Î²Î®Î¼Î± Î–"
#define MSG_ENDSTOP_ABORT                   "ÎœÎ±Ï„Î±Î¯Ï‰ÏƒÎ· endstop "
#define MSG_HEATING_FAILED_LCD              "Î‘Î½ÎµÏ€Î¹Ï„Ï…Ï‡Î®Ï‚ Î¸Î­Ï�Î¼Î±Î½ÏƒÎ·"
#define MSG_ERR_REDUNDANT_TEMP              "Î›Î¬Î¸Î¿Ï‚: Î Î›Î•ÎŸÎ�Î‘Î–ÎŸÎ¥Î£Î‘ Î˜Î•Î¡ÎœÎŸÎ¤Î—Î¤Î‘"
#define MSG_THERMAL_RUNAWAY                 "Î”Î™Î‘Î¦Î¥Î“Î— Î˜Î•Î¡ÎœÎŸÎ¤Î—Î¤Î‘Î£"
#define MSG_ERR_MAXTEMP                     "Î›Î¬Î¸Î¿Ï‚: ÎœÎ•Î“Î™Î£Î¤Î— Î˜Î•Î¡ÎœÎŸÎ¤Î—Î¤Î‘"
#define MSG_ERR_MINTEMP                     "Î›Î¬Î¸Î¿Ï‚: Î•Î›Î‘Î§Î™Î£Î¤Î— Î˜Î•Î¡ÎœÎŸÎ¤Î—Î¤Î‘"
#define MSG_ERR_MAXTEMP_BED                 "Î›Î¬Î¸Î¿Ï‚: ÎœÎ•Î“Î™Î£Î¤Î— Î˜Î•Î¡ÎœÎŸÎ¤Î—Î¤Î‘ ÎšÎ›Î™Î�Î—Î£"
#define MSG_ERR_MINTEMP_BED                 "Î›Î¬Î¸Î¿Ï‚: Î•Î›Î‘Î§Î™Î£Î¤Î— Î˜Î•Î¡ÎœÎŸÎ¤Î—Î¤Î‘ ÎšÎ›Î™Î�Î—Î£"
#define MSG_HEATING                         "Î˜ÎµÏ�Î¼Î±Î¯Î½ÎµÏ„Î±Î¹â€¦"
#define MSG_HEATING_COMPLETE                "Î— Î¸Î­Ï�Î¼Î±Î½ÏƒÎ· Î¿Î»Î¿ÎºÎ»Î·Ï�ÏŽÎ¸Î·ÎºÎµ."
#define MSG_BED_HEATING                     "Î˜Î­Ï�Î¼Î±Î½ÏƒÎ· ÎºÎ»Î¯Î½Î·Ï‚."
#define MSG_BED_DONE                        "Î— ÎºÎ»Î¯Î½Î· Î¿Î»Î¿ÎºÎ»Î·Ï�ÏŽÎ¸Î·ÎºÎµ."
#define MSG_DELTA_CALIBRATE                 "Î’Î±Î¸Î¼Î¿Î½ÏŒÎ¼Î·ÏƒÎ· Delta"
#define MSG_DELTA_CALIBRATE_X               "Î’Î±Î¸Î¼Î¿Î½ÏŒÎ¼Î·ÏƒÎ· X"
#define MSG_DELTA_CALIBRATE_Y               "Î’Î±Î¸Î¼Î¿Î½ÏŒÎ¼Î·ÏƒÎ· Y"
#define MSG_DELTA_CALIBRATE_Z               "Î’Î±Î¸Î¼Î¿Î½ÏŒÎ¼Î·ÏƒÎ· Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Î’Î±Î¸Î¼Î¿Î½ÏŒÎ¼Î·ÏƒÎ· ÎºÎ­Î½Ï„Ï�Î¿Ï…"

#endif // LANGUAGE_EL_GR_H

