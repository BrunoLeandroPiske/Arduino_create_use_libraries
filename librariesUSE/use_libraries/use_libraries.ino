#include <IO.h>

IO LED(13);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  LED.liga();
  delay(1000);
  LED.desliga();
  delay(1000);
}
