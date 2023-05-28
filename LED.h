#include "Arduino.h"
class LED
{
  public:
    int pin;
    LED(int pin_);
    void on();
    void off();
  private:
    int _pin;
};
