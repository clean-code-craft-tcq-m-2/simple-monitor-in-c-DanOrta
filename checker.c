#include "checker.h"
#include <assert.h>

int main(void)
{
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));

  return 0;
}

bool_t IsRangeInvalid(float lowerLimit, float upperLimit, float inputValue)
{
  if((inputValue < lowerLimit) || (inputValue > upperLimit))
  {
    return TRUE;
  }

  return FALSE;
}

int batteryIsOk(float temperature, float soc, float chargeRate)
{
  if(IsRangeInvalid(0, 45, temperature))
  {
    PrintErrorMessage("Temperature out of range!\n");
    return 0;
  }
  else if(IsRangeInvalid(20, 80, soc))
  {
    PrintErrorMessage("State of Charge (SoC) is out of range!\n");
    return 0;
  }
  else if(IsRangeInvalid(0, 0.8, chargeRate))
  {
    PrintErrorMessage("Charge Rate out of range!\n");
    return 0;
  }
  return 1;
}