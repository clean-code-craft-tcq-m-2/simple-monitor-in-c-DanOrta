#include <assert.h>
#include "main.h"
#include "checkBatteryStatus.h"
#include "printMessages.h"


int main(void)
{
#if 0
  assert(GetBatteryStatus(25, 70, 0.7));
  assert(!GetBatteryStatus(50, 85, 0));
#else
  printf("%u\n", GetBatteryStatus(25.0, 70.0, 0.7));
  printf("%u\n", GetBatteryStatus(50.0, 85.0, 0.0));
  printf("%u\n", GetBatteryStatus(50.0, 85.0, 1.0));

  PrintMessageIfError((uint8_t)0x07U, SPANISH);
#endif

  return 0;
}
