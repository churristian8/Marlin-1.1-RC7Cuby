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
 * Russian
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_RU_H
#define LANGUAGE_RU_H

#define MAPPER_D0D1                // For Cyrillic
// Define SIMULATE_ROMFONT to see what is seen on the character based display defined in Configuration.h
//#define SIMULATE_ROMFONT
#define DISPLAY_CHARSET_ISO10646_5

#define WELCOME_MSG                         MACHINE_NAME " Ð“Ð¾Ñ‚Ð¾Ð²."
#define MSG_SD_INSERTED                     "ÐšÐ°Ñ€Ñ‚Ð° Ð²Ñ�Ñ‚Ð°Ð²Ð»ÐµÐ½Ð°"
#define MSG_SD_REMOVED                      "ÐšÐ°Ñ€Ñ‚Ð° Ð¸Ð·Ð²Ð»ÐµÑ‡ÐµÐ½Ð°"
#define MSG_MAIN                            "ÐœÐµÐ½ÑŽ"
#define MSG_AUTOSTART                       "Ð�Ð²Ñ‚Ð¾Ñ�Ñ‚Ð°Ñ€Ñ‚"
#define MSG_DISABLE_STEPPERS                "Ð’Ñ‹ÐºÐ». Ð´Ð²Ð¸Ð³Ð°Ñ‚ÐµÐ»Ð¸"
#define MSG_AUTO_HOME                       "ÐŸÐ°Ñ€ÐºÐ¾Ð²ÐºÐ°"
#define MSG_LEVEL_BED_HOMING                "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               "Click to Begin"
#define MSG_LEVEL_BED_DONE                  "Leveling Done!"
#define MSG_LEVEL_BED_CANCEL                "Cancel"
#define MSG_SET_HOME_OFFSETS                "Ð—Ð°Ð¿Ð¾Ð¼Ð½Ð¸Ñ‚ÑŒ Ð¿Ð°Ñ€ÐºÐ¾Ð²ÐºÑƒ"
#define MSG_HOME_OFFSETS_APPLIED            "Offsets applied"
#define MSG_SET_ORIGIN                      "Ð—Ð°Ð¿Ð¾Ð¼Ð½Ð¸Ñ‚ÑŒ Ð½Ð¾Ð»ÑŒ"
#define MSG_PREHEAT_1                       "ÐŸÑ€ÐµÐ´Ð½Ð°Ð³Ñ€ÐµÐ² PLA"
#define MSG_PREHEAT_1_N                     "Ð“Ñ€ÐµÑ‚ÑŒ PLA Ð¡Ð¾Ð¿Ð»Ð¾ "
#define MSG_PREHEAT_1_ALL                   "Ð“Ñ€ÐµÑ‚ÑŒ PLA Ð’Ñ�Ðµ"
#define MSG_PREHEAT_1_BEDONLY               "Ð“Ñ€ÐµÑ‚ÑŒ PLA Ð¡Ñ‚Ð¾Ð»"
#define MSG_PREHEAT_1_SETTINGS              "Ð�Ð°Ñ�Ñ‚Ñ€Ð¾Ð¹ÐºÐ¸ PLA"
#define MSG_PREHEAT_2                       "ÐŸÑ€ÐµÐ´Ð½Ð°Ð³Ñ€ÐµÐ² ABS"
#define MSG_PREHEAT_2_N                     "Ð“Ñ€ÐµÑ‚ÑŒ ABS Ð¡Ð¾Ð¿Ð»Ð¾ "
#define MSG_PREHEAT_2_ALL                   "Ð“Ñ€ÐµÑ‚ÑŒ ABS Ð’Ñ�Ðµ"
#define MSG_PREHEAT_2_BEDONLY               "Ð“Ñ€ÐµÑ‚ÑŒ ABS Ð¡Ñ‚Ð¾Ð»"
#define MSG_PREHEAT_2_SETTINGS              "Ð�Ð°Ñ�Ñ‚Ñ€Ð¾Ð¹ÐºÐ¸ ABS"
#define MSG_COOLDOWN                        "ÐžÑ…Ð»Ð°Ð¶Ð´ÐµÐ½Ð¸Ðµ"
#define MSG_SWITCH_PS_ON                    "Ð’ÐºÐ»ÑŽÑ‡Ð¸Ñ‚ÑŒ ÐŸÐ¸Ñ‚Ð°Ð½Ð¸Ðµ"
#define MSG_SWITCH_PS_OFF                   "ÐžÑ‚ÐºÐ»ÑŽÑ‡Ð¸Ñ‚ÑŒ ÐŸÐ¸Ñ‚Ð°Ð½Ð¸Ðµ"
#define MSG_EXTRUDE                         "Ð­ÐºÑ�Ñ‚Ñ€ÑƒÐ·Ð¸Ñ�"
#define MSG_RETRACT                         "Ð’Ñ‚Ñ�Ð³Ð¸Ð²Ð°Ð½Ð¸Ðµ"
#define MSG_MOVE_AXIS                       "Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ Ð¿Ð¾ Ð¾Ñ�Ñ�Ð¼"
#define MSG_MOVE_X                          "Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ Ð¿Ð¾ X"
#define MSG_MOVE_Y                          "Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ Ð¿Ð¾ Y"
#define MSG_MOVE_Z                          "Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ Ð¿Ð¾ Z"
#define MSG_MOVE_E                          "Ð­ÐºÑ�Ñ‚Ñ€ÑƒÐ´ÐµÑ€"
#define MSG_MOVE_01MM                       "Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ XYZ 0.1mm"
#define MSG_MOVE_1MM                        "Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ XYZ 1mm"
#define MSG_MOVE_10MM                       "Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ XY 10mm"
#define MSG_LEVEL_BED                       "ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²Ð°Ñ‚ÑŒ Ñ�Ñ‚Ð¾Ð»"
#define MSG_SPEED                           "Ð¡ÐºÐ¾Ñ€Ð¾Ñ�Ñ‚ÑŒ"
#define MSG_NOZZLE                          LCD_STR_THERMOMETER " Ð¡Ð¾Ð¿Ð»Ð¾"
#define MSG_BED                             LCD_STR_THERMOMETER " Ð¡Ñ‚Ð¾Ð»"
#define MSG_FAN_SPEED                       "ÐšÑƒÐ»ÐµÑ€"
#define MSG_FLOW                            "ÐŸÐ¾Ñ‚Ð¾Ðº"
#define MSG_CONTROL                         "Ð�Ð°Ñ�Ñ‚Ñ€Ð¾Ð¹ÐºÐ¸"
#define MSG_MIN                             LCD_STR_THERMOMETER " ÐœÐ¸Ð½Ð¸Ð¼ÑƒÐ¼"
#define MSG_MAX                             LCD_STR_THERMOMETER " ÐœÐ°ÐºÑ�Ð¸Ð¼ÑƒÐ¼"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Ð¤Ð°ÐºÑ‚Ð¾Ñ€"
#define MSG_AUTOTEMP                        "Ð�Ð²Ñ‚Ð¾Ñ‚ÐµÐ¼Ð¿ÐµÑ€Ð°Ñ‚ÑƒÑ€Ð°"
#define MSG_ON                              "Ð’ÐºÐ». "
#define MSG_OFF                             "ÐžÑ‚ÐºÐ». "
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
#define MSG_AMAX                            "Amax"
#define MSG_A_RETRACT                       "A-Ð²Ñ‚Ñ�Ð³Ð¸Ð²Ð°Ð½Ð¸Ðµ"
#define MSG_XSTEPS                          "X ÑˆÐ°Ð³/Ð¼Ð¼"
#define MSG_YSTEPS                          "Y ÑˆÐ°Ð³/Ð¼Ð¼"
#define MSG_ZSTEPS                          "Z ÑˆÐ°Ð³/Ð¼Ð¼"
#define MSG_ESTEPS                          "E ÑˆÐ°Ð³/Ð¼Ð¼"
#define MSG_TEMPERATURE                     "Ð¢ÐµÐ¼Ð¿ÐµÑ€Ð°Ñ‚ÑƒÑ€Ð°"
#define MSG_MOTION                          "ÐœÐµÑ…Ð°Ð½Ð¸ÐºÐ°"
#define MSG_VOLUMETRIC                      "ÐŸÑ€ÑƒÑ‚Ð¾Ðº"
#define MSG_VOLUMETRIC_ENABLED              "E Ð² mm3"
#define MSG_FILAMENT_DIAM                   "Ð”Ð¸Ð°Ð¼ÐµÑ‚Ñ€ Ð¿Ñ€ÑƒÑ‚ÐºÐ°"
#define MSG_CONTRAST                        "ÐšÐ¾Ð½Ñ‚Ñ€Ð°Ñ�Ñ‚ LCD"
#define MSG_STORE_EPROM                     "Ð¡Ð¾Ñ…Ñ€Ð°Ð½Ð¸Ñ‚ÑŒ Ð² EEPROM"
#define MSG_LOAD_EPROM                      "Ð¡Ñ‡Ð¸Ñ‚Ð°Ñ‚ÑŒ Ð¸Ð· EEPROM"
#define MSG_RESTORE_FAILSAFE                "Ð¡Ð±Ñ€Ð¾Ñ� EEPROM"
#define MSG_REFRESH                         "ÐžÐ±Ð½Ð¾Ð²Ð¸Ñ‚ÑŒ"
#define MSG_WATCH                           "ÐžÐ±Ð·Ð¾Ñ€"
#define MSG_PREPARE                         "Ð”ÐµÐ¹Ñ�Ñ‚Ð²Ð¸Ñ�"
#define MSG_TUNE                            "Ð�Ð°Ñ�Ñ‚Ñ€Ð¾Ð¹ÐºÐ¸"
#define MSG_PAUSE_PRINT                     "ÐŸÐ°ÑƒÐ·Ð° Ð¿ÐµÑ‡Ð°Ñ‚Ð¸"
#define MSG_RESUME_PRINT                    "ÐŸÑ€Ð¾Ð´Ð¾Ð»Ð¶Ð¸Ñ‚ÑŒ Ð¿ÐµÑ‡Ð°Ñ‚ÑŒ"
#define MSG_STOP_PRINT                      "ÐžÑ�Ñ‚Ð°Ð½Ð¾Ð²Ð¸Ñ‚ÑŒ Ð¿ÐµÑ‡Ð°Ñ‚ÑŒ"
#define MSG_CARD_MENU                       "ÐžÐ±Ð·Ð¾Ñ€ ÐºÐ°Ñ€Ñ‚Ñ‹"
#define MSG_NO_CARD                         "Ð�ÐµÑ‚ ÐºÐ°Ñ€Ñ‚Ñ‹"
#define MSG_DWELL                           "Ð¡Ð¾Ð½..."
#define MSG_USERWAIT                        "ÐžÐ¶Ð¸Ð´Ð°Ð½Ð¸Ð¸Ðµ"
#define MSG_RESUMING                        "Ð’Ð¾Ð·Ð¾Ð±Ð½Ð¾Ð²Ð»ÐµÐ½Ð¸Ðµ..."
#define MSG_PRINT_ABORTED                   "ÐžÑ‚Ð¼ÐµÐ½Ð° Ð¿ÐµÑ‡Ð°Ñ‚Ð¸"
#define MSG_NO_MOVE                         "Ð�ÐµÑ‚ Ð´Ð²Ð¸Ð¶ÐµÐ½Ð¸Ñ�."
#define MSG_KILLED                          "Ð£Ð‘Ð˜Ð¢Ðž."
#define MSG_STOPPED                         "ÐžÐ¡Ð¢Ð�Ð�ÐžÐ’Ð›Ð•Ð�Ðž."
#define MSG_CONTROL_RETRACT                 "Ð’Ñ‚Ñ�Ð³Ð¸Ð²Ð°Ð½Ð¸Ðµ mm"
#define MSG_CONTROL_RETRACT_SWAP            "Ð’Ñ‚Ñ�Ð³. Ñ�Ð¼ÐµÐ½Ñ‹ mm"
#define MSG_CONTROL_RETRACTF                "Ð’Ñ‚Ñ�Ð³Ð¸Ð²Ð°Ð½Ð¸Ðµ V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Ð’Ñ‚Ñ�Ð³. Ð¿Ñ€Ñ‹Ð¶ÐºÐ° mm"
#define MSG_CONTROL_RETRACT_RECOVER         "Ð’Ð¾Ð·Ð²Ñ€Ð°Ñ‚ +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Ð’Ð¾Ð·Ð²Ñ€Ð°Ñ‚ Ñ�Ð¼ÐµÐ½Ñ‹ +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "Ð’Ð¾Ð·Ð²Ñ€Ð°Ñ‚  V"
#define MSG_AUTORETRACT                     "Ð�Ð²Ñ‚Ð¾ Ð’Ñ‚Ñ�Ð³Ð¸Ð²Ð°Ð½Ð¸Ðµ"
#define MSG_FILAMENTCHANGE                  "Ð¡Ð¼ÐµÐ½Ð° Ð¿Ñ€ÑƒÑ‚ÐºÐ°"
#define MSG_INIT_SDCARD                     "Ð˜Ð½Ð¸Ñ†. ÐºÐ°Ñ€Ñ‚Ñƒ"
#define MSG_CNG_SDCARD                      "Ð¡Ð¼ÐµÐ½Ð¸Ñ‚ÑŒ ÐºÐ°Ñ€Ñ‚Ñƒ"
#define MSG_ZPROBE_OUT                      "Z Ð´Ð°Ñ‚Ñ‡Ð¸Ðº Ð²Ð½Ðµ Ñ�Ñ‚Ð¾Ð»Ð°"
#define MSG_YX_UNHOMED                      "ÐŸÐ°Ñ€ÐºÑƒÐ¹ X/Y Ð¿ÐµÑ€ÐµÐ´ Z"
#define MSG_ZPROBE_ZOFFSET                  "Ð¡Ð¼ÐµÑ‰ÐµÐ½Ð¸Ðµ Z"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Ð¡Ñ€Ð°Ð±Ð¾Ñ‚Ð°Ð» ÐºÐ¾Ð½Ñ†ÐµÐ²Ð¸Ðº"
#define MSG_HEATING_FAILED_LCD              "Ð Ð°Ð·Ð¾Ð³Ñ€ÐµÐ² Ð½Ðµ ÑƒÐ´Ð°Ð»Ñ�Ñ�"
#define MSG_ERR_REDUNDANT_TEMP              "ÐžÑˆÐ¸Ð±ÐºÐ°:Ð¡Ð»Ð¸ÑˆÐºÐ¾Ð¼ Ð³Ð¾Ñ€Ñ�Ñ‡Ð¾"
#define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     "ÐžÑˆÐ¸Ð±ÐºÐ°: Ð¢ Ð¼Ð°ÐºÑ�."
#define MSG_ERR_MINTEMP                     "ÐžÑˆÐ¸Ð±ÐºÐ°: Ð¢ Ð¼Ð¸Ð½."
#define MSG_ERR_MAXTEMP_BED                 "ÐžÑˆÐ¸Ð±ÐºÐ°:Ð¢ Ð¼Ð°ÐºÑ�.Ñ�Ñ‚Ð¾Ð»"
#define MSG_ERR_MINTEMP_BED                 "ÐžÑˆÐ¸Ð±ÐºÐ°:Ð¢ Ð¼Ð¸Ð½.Ñ�Ñ‚Ð¾Ð»"
#define MSG_HEATING                         "Ð�Ð°Ð³Ñ€ÐµÐ²Ð°ÑŽ Ñ�Ð¾Ð¿Ð»Ð¾..."
#define MSG_HEATING_COMPLETE                "Ð�Ð°Ð³Ñ€ÐµÐ² Ð²Ñ‹Ð¿Ð¾Ð»Ð½ÐµÐ½"
#define MSG_BED_HEATING                     "Ð�Ð°Ð³Ñ€ÐµÐ²Ð°ÑŽ Ñ�Ñ‚Ð¾Ð»"
#define MSG_BED_DONE                        "Ð¡Ñ‚Ð¾Ð» Ñ€Ð°Ð·Ð¾Ð³Ñ€ÐµÑ‚"
#define MSG_DELTA_CALIBRATE                 "ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° Delta"
#define MSG_DELTA_CALIBRATE_X               "ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²Ð°Ñ‚ÑŒ X"
#define MSG_DELTA_CALIBRATE_Y               "ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²Ð°Ñ‚ÑŒ Y"
#define MSG_DELTA_CALIBRATE_Z               "ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²Ð°Ñ‚ÑŒ Z"
#define MSG_DELTA_CALIBRATE_CENTER          "ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²Ð°Ñ‚ÑŒ Center"

#endif // LANGUAGE_RU_H

