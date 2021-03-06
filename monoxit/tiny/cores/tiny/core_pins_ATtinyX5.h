#ifndef core_pins_ATtinyX5_h
#define core_pins_ATtinyX5_h

#include "core_build_options.h"

/*=============================================================================
  Pin definitions for the ATtiny85
=============================================================================*/

#define PIN_B0  ( 0)
#define PIN_B1  ( 1)
#define PIN_B2  ( 2)
#define PIN_B3  ( 3)
#define PIN_B4  ( 4)
#define PIN_B5  ( 5)  /* RESET */

#define CORE_DIGITAL_FIRST    (0)
#define CORE_DIGITAL_LAST     (5)
#define CORE_DIGITAL_COUNT    (CORE_DIGITAL_LAST-CORE_DIGITAL_FIRST+1)
#define CORE_RESET_INCLUDED   (1)

#define CORE_ANALOG_FIRST     (CORE_DIGITAL_LAST+1)
#define CORE_ANALOG_COUNT     (4)
#define CORE_ANALOG_LAST      (CORE_ANALOG_FIRST+CORE_ANALOG_COUNT-1)

#define CORE_INT0_PIN  PIN_B2

#define CORE_OC0A_PIN  PIN_B0
#define CORE_OC0B_PIN  PIN_B1
#define CORE_OC1A_PIN  PIN_B1
#define CORE_OC1B_PIN  PIN_B4

/* Note: By default, CORE_OC1A_PIN is not used for PWM.  It overlaps with 
CORE_OC0B_PIN.  CORE_OC0B_PIN was used because it supports phase-correct PWM.
There is a build option in "core_build_options.h" to determine which channel 
to use */

#define CORE_PWM0_PIN       CORE_OC0A_PIN
#define CORE_PWM0_TIMER     0
#define CORE_PWM0_CHANNEL   A

#if FAVOR_PHASE_CORRECT_PWM
#define CORE_PWM1_PIN       CORE_OC0B_PIN
#define CORE_PWM1_TIMER     0
#define CORE_PWM1_CHANNEL   B
#else
#define CORE_PWM1_PIN       CORE_OC1A_PIN
#define CORE_PWM1_TIMER     1
#define CORE_PWM1_CHANNEL   A
#endif

#define CORE_PWM2_PIN       CORE_OC1B_PIN
#define CORE_PWM2_TIMER     1
#define CORE_PWM2_CHANNEL   B

#define CORE_PWM_COUNT      (3)


#endif