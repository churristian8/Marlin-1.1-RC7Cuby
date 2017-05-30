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
 * Bulgarian
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_BG_H
#define LANGUAGE_BG_H

#define MAPPER_D0D1                // For Cyrillic
// Define SIMULATE_ROMFONT to see what is seen on the character based display defined in Configuration.h
//#define SIMULATE_ROMFONT
#define DISPLAY_CHARSET_ISO10646_5

#define WELCOME_MSG                         MACHINE_NAME " Ð“Ð¾Ñ‚Ð¾Ð²."
#define MSG_SD_INSERTED                     "ÐšÐ°Ñ€Ñ‚Ð°Ñ‚Ð° Ðµ Ð¿Ð¾Ñ�Ñ‚Ð°Ð²ÐµÐ½Ð°"
#define MSG_SD_REMOVED                      "ÐšÐ°Ñ€Ñ‚Ð°Ñ‚Ð° Ðµ Ð¸Ð·Ð²Ð°Ð´ÐµÐ½Ð°"
#define MSG_MAIN                            "ÐœÐµÐ½ÑŽ"
#define MSG_AUTOSTART                       "Ð�Ð²Ñ‚Ð¾Ñ�Ñ‚Ð°Ñ€Ñ‚"
#define MSG_DISABLE_STEPPERS                "Ð˜Ð·ÐºÐ». Ð´Ð²Ð¸Ð³Ð°Ñ‚ÐµÐ»Ð¸"
#define MSG_AUTO_HOME                       "ÐŸÐ°Ñ€ÐºÐ¸Ñ€Ð°Ð½Ðµ"
#define MSG_LEVEL_BED_HOMING                "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               "Click to Begin"
#define MSG_LEVEL_BED_DONE                  "Leveling Done!"
#define MSG_LEVEL_BED_CANCEL                "Cancel"
#define MSG_SET_HOME_OFFSETS                "Ð—Ð°Ð´Ð°Ð¹ Ð�Ð°Ñ‡Ð°Ð»Ð¾"
#define MSG_HOME_OFFSETS_APPLIED            "Offsets applied"
#define MSG_SET_ORIGIN                      "Ð˜Ð·Ñ…Ð¾Ð´Ð½Ð° Ñ‚Ð¾Ñ‡ÐºÐ°"
#define MSG_PREHEAT_1                       "ÐŸÐ¾Ð´Ð³Ñ€Ñ�Ð²Ð°Ð½Ðµ PLA"
#define MSG_PREHEAT_1_N                     "ÐŸÐ¾Ð´Ð³Ñ€Ñ�Ð²Ð°Ð½Ðµ PLA"
#define MSG_PREHEAT_1_ALL                   "ÐŸÐ¾Ð´Ð³Ñ€. PLA Ð’Ñ�Ð¸Ñ‡ÐºÐ¸"
#define MSG_PREHEAT_1_BEDONLY               "ÐŸÐ¾Ð´Ð³Ñ€. PLA Ð›ÐµÐ³Ð»Ð¾"
#define MSG_PREHEAT_1_SETTINGS              "Ð�Ð°Ñ�Ñ‚Ñ€Ð¾Ð¹ÐºÐ¸ PLA"
#define MSG_PREHEAT_2                       "ÐŸÐ¾Ð´Ð³Ñ€Ñ�Ð²Ð°Ð½Ðµ ABS"
#define MSG_PREHEAT_2_N                     "ÐŸÐ¾Ð´Ð³Ñ€Ñ�Ð²Ð°Ð½Ðµ ABS"
#define MSG_PREHEAT_2_ALL                   "ÐŸÐ¾Ð´Ð³Ñ€. ABS Ð’Ñ�Ð¸Ñ‡ÐºÐ¸"
#define MSG_PREHEAT_2_BEDONLY               "ÐŸÐ¾Ð´Ð³Ñ€. ABS Ð›ÐµÐ³Ð»Ð¾"
#define MSG_PREHEAT_2_SETTINGS              "Ð�Ð°Ñ�Ñ‚Ñ€Ð¾Ð¹ÐºÐ¸ ABS"
#define MSG_COOLDOWN                        "ÐžÑ…Ð»Ð°Ð¶Ð´Ð°Ð½Ðµ"
#define MSG_SWITCH_PS_ON                    "Ð’ÐºÐ». Ð·Ð°Ñ…Ñ€Ð°Ð½Ð²Ð°Ð½Ðµ"
#define MSG_SWITCH_PS_OFF                   "Ð˜Ð·ÐºÐ». Ð·Ð°Ñ…Ñ€Ð°Ð½Ð²Ð°Ð½Ðµ"
#define MSG_EXTRUDE                         "Ð•ÐºÑ�Ñ‚Ñ€ÑƒÐ·Ð¸Ñ�"
#define MSG_RETRACT                         "ÐžÑ‚ÐºÐ°Ñ‚"
#define MSG_MOVE_AXIS                       "Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ Ð¿Ð¾ Ð¾Ñ�"
#define MSG_LEVEL_BED                       "Ð�Ð¸Ð²ÐµÐ»Ð¸Ñ€Ð°Ð½Ðµ"
#define MSG_MOVE_X                          "Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ Ð¿Ð¾ X"
#define MSG_MOVE_Y                          "Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ Ð¿Ð¾ Y"
#define MSG_MOVE_Z                          "Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ Ð¿Ð¾ Z"
#define MSG_MOVE_E                          "Ð•ÐºÑ�Ñ‚Ñ€ÑƒÐ´ÐµÑ€"
#define MSG_MOVE_01MM                       "ÐŸÑ€ÐµÐ¼ÐµÑ�Ñ‚Ð¸ Ñ� 0.1mm"
#define MSG_MOVE_1MM                        "ÐŸÑ€ÐµÐ¼ÐµÑ�Ñ‚Ð¸ Ñ� 1mm"
#define MSG_MOVE_10MM                       "ÐŸÑ€ÐµÐ¼ÐµÑ�Ñ‚Ð¸ Ñ� 10mm"
#define MSG_SPEED                           "Ð¡ÐºÐ¾Ñ€Ð¾Ñ�Ñ‚"
#define MSG_NOZZLE                          LCD_STR_THERMOMETER " Ð”ÑŽÐ·Ð°"
#define MSG_BED                             LCD_STR_THERMOMETER " Ð›ÐµÐ³Ð»Ð¾"
#define MSG_FAN_SPEED                       "Ð’ÐµÐ½Ñ‚Ð¸Ð»Ð°Ñ‚Ð¾Ñ€"
#define MSG_FLOW                            "ÐŸÐ¾Ñ‚Ð¾Ðº"
#define MSG_CONTROL                         "Ð£Ð¿Ñ€Ð°Ð²Ð»ÐµÐ½Ð¸Ðµ"
#define MSG_MIN                             LCD_STR_THERMOMETER " ÐœÐ¸Ð½Ð¸Ð¼ÑƒÐ¼"
#define MSG_MAX                             LCD_STR_THERMOMETER " ÐœÐ°ÐºÑ�Ð¸Ð¼ÑƒÐ¼"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Ð¤Ð°ÐºÑ‚Ð¾Ñ€"
#define MSG_AUTOTEMP                        "Ð�Ð²Ñ‚Ð¾-Ñ‚ÐµÐ¼Ð¿."
#define MSG_ON                              "Ð’ÐºÐ». "
#define MSG_OFF                             "Ð˜Ð·ÐºÐ». "
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "Acc"
#define MSG_VXY_JERK                        "Vxy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_X                               "X"
#define MSG_Y                               "Y"
#define MSG_Z                               "Z"
#define MSG_E                               "E"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-Ð¾Ñ‚ÐºÐ°Ñ‚"
#define MSG_XSTEPS                          "X Ñ�Ñ‚ÑŠÐ¿ÐºÐ¸/mm"
#define MSG_YSTEPS                          "Y Ñ�Ñ‚ÑŠÐ¿ÐºÐ¸/mm"
#define MSG_ZSTEPS                          "Z Ñ�Ñ‚ÑŠÐ¿ÐºÐ¸/mm"
#define MSG_ESTEPS                          "E Ñ�Ñ‚ÑŠÐ¿ÐºÐ¸/mm"
#define MSG_TEMPERATURE                     "Ð¢ÐµÐ¼Ð¿ÐµÑ€Ð°Ñ‚ÑƒÑ€Ð°"
#define MSG_MOTION                          "Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ"
#define MSG_VOLUMETRIC                      "Ð�Ð¸ÑˆÐºÐ°"
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "Ð”Ð¸Ð°Ð¼. Ð½Ð¸ÑˆÐºÐ°"
#define MSG_CONTRAST                        "LCD ÐºÐ¾Ð½Ñ‚Ñ€Ð°Ñ�Ñ‚"
#define MSG_STORE_EPROM                     "Ð—Ð°Ð¿Ð°Ð·Ð¸ Ð² EPROM"
#define MSG_LOAD_EPROM                      "Ð—Ð°Ñ€ÐµÐ´Ð¸ Ð¾Ñ‚ EPROM"
#define MSG_RESTORE_FAILSAFE                "Ð¤Ð°Ð±Ñ€Ð¸Ñ‡Ð½Ð¸ Ð½Ð°Ñ�Ñ‚Ñ€Ð¾Ð¹ÐºÐ¸"
#define MSG_REFRESH                         LCD_STR_REFRESH "ÐžÐ±Ð½Ð¾Ð²Ð¸"
#define MSG_WATCH                           "ÐŸÑ€ÐµÐ³Ð»ÐµÐ´"
#define MSG_PREPARE                         "Ð”ÐµÐ¹Ñ�Ñ‚Ð²Ð¸Ñ�"
#define MSG_TUNE                            "Ð�Ð°Ñ�Ñ‚Ñ€Ð¾Ð¹ÐºÐ°"
#define MSG_PAUSE_PRINT                     "ÐŸÐ°ÑƒÐ·Ð°"
#define MSG_RESUME_PRINT                    "Ð’ÑŠÐ·Ð¾Ð±Ð½Ð¾Ð²Ð¸ Ð¿ÐµÑ‡Ð°Ñ‚Ð°"
#define MSG_STOP_PRINT                      "Ð¡Ð¿Ñ€Ð¸ Ð¿ÐµÑ‡Ð°Ñ‚Ð°"
#define MSG_CARD_MENU                       "ÐœÐµÐ½ÑŽ ÐºÐ°Ñ€Ñ‚Ð°"
#define MSG_NO_CARD                         "Ð�Ñ�Ð¼Ð° ÐºÐ°Ñ€Ñ‚Ð°"
#define MSG_DWELL                           "ÐŸÐ¾Ñ‡Ð¸Ð²ÐºÐ°..."
#define MSG_USERWAIT                        "Ð˜Ð·Ñ‡Ð°ÐºÐ²Ð°Ð½Ðµ"
#define MSG_RESUMING                        "ÐŸÑ€Ð¾Ð´ÑŠÐ»Ð¶. Ð¿ÐµÑ‡Ð°Ñ‚Ð°"
#define MSG_PRINT_ABORTED                   "ÐŸÐµÑ‡Ð°Ñ‚ÑŠÑ‚ Ðµ Ð¿Ñ€ÐµÐºÑŠÑ�Ð½Ð°Ñ‚"
#define MSG_NO_MOVE                         "Ð�Ñ�Ð¼Ð° Ð´Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ"
#define MSG_KILLED                          "Ð£Ð‘Ð˜Ð¢Ðž."
#define MSG_STOPPED                         "Ð¡ÐŸÐ Ð¯Ð�Ðž."
#define MSG_CONTROL_RETRACT                 "ÐžÑ‚ÐºÐ°Ñ‚ mm"
#define MSG_CONTROL_RETRACT_SWAP            "Ð¡Ð¼Ñ�Ð½Ð° ÐžÑ‚ÐºÐ°Ñ‚ mm"
#define MSG_CONTROL_RETRACTF                "ÐžÑ‚ÐºÐ°Ñ‚  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Ð¡ÐºÐ¾Ðº mm"
#define MSG_CONTROL_RETRACT_RECOVER         "Ð’ÑŠÐ·Ð²Ñ€Ð°Ñ‚ +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Ð¡Ð¼Ñ�Ð½Ð° Ð’ÑŠÐ·Ð²Ñ€Ð°Ñ‚ +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "Ð’ÑŠÐ·Ð²Ñ€Ð°Ñ‚  V"
#define MSG_AUTORETRACT                     "Ð�Ð²Ñ‚Ð¾oÑ‚ÐºÐ°Ñ‚"
#define MSG_FILAMENTCHANGE                  "Ð¡Ð¼Ñ�Ð½Ð° Ð½Ð¸ÑˆÐºÐ°"
#define MSG_INIT_SDCARD                     "Ð˜Ð½Ð¸Ñ†. SD-ÐšÐ°Ñ€Ñ‚Ð°"
#define MSG_CNG_SDCARD                      "Ð¡Ð¼Ñ�Ð½Ð° SD-ÐšÐ°Ñ€Ñ‚Ð°"
#define MSG_ZPROBE_OUT                      "Z-Ñ�Ð¾Ð½Ð´Ð°Ñ‚Ð° Ðµ Ð¸Ð·Ð²Ð°Ð´ÐµÐ½Ð°"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "first"
#define MSG_ZPROBE_ZOFFSET                  "Z ÐžÑ‚Ñ�Ñ‚Ð¾Ñ�Ð½Ð¸Ðµ"
#define MSG_BABYSTEP_X                      "ÐœÐ¸Ð½Ð¸Ñ�Ñ‚ÑŠÐ¿ÐºÐ° X"
#define MSG_BABYSTEP_Y                      "ÐœÐ¸Ð½Ð¸Ñ�Ñ‚ÑŠÐ¿ÐºÐ° Y"
#define MSG_BABYSTEP_Z                      "ÐœÐ¸Ð½Ð¸Ñ�Ñ‚ÑŠÐ¿ÐºÐ° Z"
#define MSG_ENDSTOP_ABORT                   "Ð¡Ñ‚Ð¾Ð¿ ÐšÑ€.Ð˜Ð·ÐºÐ»ÑŽÑ‡Ð²Ð°Ñ‚ÐµÐ»Ð¸"
#define MSG_DELTA_CALIBRATE                 "Ð”ÐµÐ»Ñ‚Ð° ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ°"
#define MSG_DELTA_CALIBRATE_X               "ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° X"
#define MSG_DELTA_CALIBRATE_Y               "ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° Y"
#define MSG_DELTA_CALIBRATE_Z               "ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° Z"
#define MSG_DELTA_CALIBRATE_CENTER          "ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° Ð¦ÐµÐ½Ñ‚ÑŠÑ€"

#endif // LANGUAGE_BG_H

