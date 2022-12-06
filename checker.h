#ifndef __CHECKER_H__
#define __CHECKER_H__

#include <stdio.h>

#define PrintErrorMessage(...)     (void)fprintf(stderr, __VA_ARGS__)

typedef enum
{
  FALSE = 0U,
  TRUE = 1U
} bool_t;

bool_t IsRangeInvalid(float lowerLimit, float upperLimit, float inputValue);
int batteryIsOk(float temperature, float soc, float chargeRate);

#endif