

#include <fourLEDs.h>



int arr[] = {2,3,4,5};
fourLEDs leds(arr);

void setup()
{
  leds.begin();
  
}

void loop()
{
  leds.upCount();
  delay(1000);
  leds.allOff();
  delay(1000);
  
}

