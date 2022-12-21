#ifndef __CHECKBATTERYSTATUS_H__
#define __CHECKBATTERYSTATUS_H__

#include "types.h"

#define ERROR_MESSAGE_MASK        ((uint8_t)0x01U)

void PrintMessageIfError(uint8_t errorCode, Language language);
bool_t IsRangeInvalid(float lowerLimit, float upperLimit, float inputValue);
uint8_t GetBatteryStatus(float temperature, float soc, float chargeRate);

#endif
