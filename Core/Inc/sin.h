#ifndef SIN_H
#define SIN_H

#include "stdint.h"

#define SAMPLING_10KHZ_C

#ifdef SAMPLING_2_5KHZ
#define SAMPLES 26
#define TIMER_PRESCALER 4
#define TIMER_PERIOD 3076
#endif

#ifdef SAMPLING_5KHZ
#define SAMPLES 51
#define TIMER_PRESCALER 4
#define TIMER_PERIOD 1569
#endif

#ifdef SAMPLING_7_5KHZ
#define SAMPLES 76
#define TIMER_PRESCALER 0
#define TIMER_PERIOD 4210
#endif

#ifdef SAMPLING_10KHZ
#define SAMPLES 101
#define TIMER_PRESCALER 0
#define TIMER_PERIOD 3168
#endif

#ifdef SAMPLING_10KHZ_C
#define SAMPLES 101
#define TIMER_PRESCALER 0
#define TIMER_PERIOD 3168
#endif

extern const uint32_t sintable[SAMPLES];
extern void calculate_sintable(uint32_t* lut, uint8_t k);

#endif
