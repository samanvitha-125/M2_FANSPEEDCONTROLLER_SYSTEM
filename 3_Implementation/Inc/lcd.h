#ifndef __LCD_H_
#define __LCD_H_

/**
 * @brief 16 X 2 LCD display header file included.
 *
 */
#include <LiquidCrystal.h>

/**
 * @brief INITIALISED ALL USER FUNCTIONS USED IN THIS PROGRAM
 * 
 */
void mode(void);
void manual(void);
void waterpump(byte waterpump_state);
void automatic(void);
void sensor_data(void);

/**
 * @brief DEFINING ATMEGA 328 PINS WITH VARIABLE NAMES
 * 
 */

#define MODE_SELECT      0 
#define MANUAL_SWITCH    1
#define MOTOR_STATE      8
#define SENSOR_1         9
#define SENSOR_2         10
#define SENSOR_3         11
#define SENSOR_4         12
#define SENSOR_5         13

/**
 * @brief DEFINING USER VARIABLES USED IN THIS PROGRAM.
 * 
 */
