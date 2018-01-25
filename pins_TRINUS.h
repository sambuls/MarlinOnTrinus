


/**
 * Arduino Mega for Trinus pin assignments
	autor : SAM BULS
	date  : 20/01/2018
 */

#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
  #error "Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu."
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "TRINUS"
#endif

//
// Limit Switches
//
#define X_MIN_PIN          71	// G3
#define Y_MIN_PIN          85	// H7
#define Z_MIN_PIN          13	// B7

//
// Steppers
//
#define X_STEP_PIN         38
#define X_DIR_PIN          83
#define X_ENABLE_PIN       82

#define Y_STEP_PIN         37
#define Y_DIR_PIN          40
#define Y_ENABLE_PIN       41

#define Z_STEP_PIN         30	// C7
#define Z_DIR_PIN          32	// C5
#define Z_ENABLE_PIN       34	// C3

#define E0_STEP_PIN        42
#define E0_DIR_PIN         43
#define E0_ENABLE_PIN      44

#define X_MS1_PIN          19   // D2
#define X_MS2_PIN          18   // D3
#define X_MS3_PIN	   81	// D4
#define Y_MS1_PIN          19   // D2
#define Y_MS2_PIN          18   // D3
#define Y_MS3_PIN	   81	// D4
#define Z_MS1_PIN          73   // J3
#define Z_MS2_PIN          75   // J4
#define Z_MS3_PIN	   76	// J5
#define E0_MS1_PIN         46   // L3
#define E0_MS2_PIN         47   // L2
#define E0_MS3_PIN	   45	// L4

//
// Temperature Sensors
//
#define TEMP_0_PIN         12   // Analog Input
//#define TEMP_BED_PIN       14   // Analog Input

//
// Heaters / Fans
//

#define HEATER_0_PIN     9	// H6
#define FAN_SOFT_PWM
#define FAN_PIN		 62     // K0

//
// LED
//

#define RGB_LED_R_PIN 64  // K2
#define RGB_LED_G_PIN 65  // K3
#define RGB_LED_B_PIN 63  // K1

