#ifndef __TYPES_H__
#define __TYPES_H__

#include <stdlib.h>
#include <stdio.h>

#ifndef NULL
#define NULL ((void*)0)
#endif
#define LOW_TEMP                00.0
#define HIGH_TEMP               45.0
#define LOW_SOC                 20.0
#define HIGH_SOC                80.0
#define LOW_CHARGE              00.0
#define HIGH_CHARGE             00.8
#define PrintErrorMessage(...)  (void)fprintf(stderr, __VA_ARGS__)
#define NUMBER_OF_LANGUAGES     NumberOfLanguages
#define NotInRange(x)           x ## OutOfRange
#ifdef TRUE
#undef TRUE
#endif
#ifdef FALSE
#undef FALSE
#endif

typedef char * string;
typedef unsigned char uint8_t;
typedef enum
{
  FALSE = 0U,
  TRUE = 1U
} bool_t;
typedef enum __LANGUAGE__
{
    ENGLISH = 0,
    SPANISH,
    GERMAN,
    NumberOfLanguages,
} Language;
typedef enum __ERROR_ID__
{
    NoError = 0,
    NotInRange(temperature),
    NotInRange(stateOfCharge),
    NotInRange(chargeRate),
    NumberOfErrors,
} ErrorID;

#endif