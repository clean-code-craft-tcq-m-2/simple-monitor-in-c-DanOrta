#include "checkBatteryStatus.h"
#include "printMessages.h"

void PrintMessageIfError(uint8_t errorCode, Language language)
{
    ErrorID internalErrorID;

    for(uint8_t i = 0U; i < (uint8_t)(NumberOfErrors - 1); i++)
    {
        internalErrorID = (ErrorID)(errorCode & (ERROR_MESSAGE_MASK << i));
        if(internalErrorID != NoError)
            PrintErrorMessage("%s\n", GetErrorMessage(internalErrorID, language));
    }
}

bool_t IsRangeInvalid(float lowerLimit, float upperLimit, float inputValue)
{
  return (bool_t)((inputValue < lowerLimit) || (inputValue > upperLimit));
}

uint8_t GetBatteryStatus(float temperature, float soc, float chargeRate)
{
  uint8_t batteryStatus = 0U;

  // TODO: Insert this in a loop and pass the parameters to the function as an array (global variable or something)
  batteryStatus |= (IsRangeInvalid(LOW_TEMP, HIGH_TEMP, temperature) << (temperatureOutOfRange - 1));
  batteryStatus |= (IsRangeInvalid(LOW_SOC, HIGH_SOC, soc) << (stateOfChargeOutOfRange - 1));
  batteryStatus |= (IsRangeInvalid(LOW_CHARGE, HIGH_CHARGE, chargeRate) << (chargeRateOutOfRange - 1));

  return batteryStatus;
}
