#include "config.h"
#include "macros.h"
#include "hardware.h"
#include "debounce.h"
#include "debounce.c"
int main()
{
  debounce_init(&debounce_dir_1,&debounce_PORT_1,debounce_digit_1);
  while (1)
  {
    if (debounce_pushed(debounce_PIN_1,debounce_digit_1)){}
    else{}
  }
  return 0;
}