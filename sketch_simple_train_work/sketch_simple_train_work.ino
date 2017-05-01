#include <legopowerfunctions.h>

LEGOPowerFunctions lego(13);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  lego.SingleOutput(0, PWM_REV2, BLUE, CH1);
  delay(6000);
  lego.SingleOutput(0, PWM_FLT, BLUE, CH1);
  delay(2500);
  lego.SingleOutput(0, PWM_REV5, BLUE, CH1);
  delay(6000);
  lego.SingleOutput(0, PWM_FLT, BLUE, CH1);
  delay(2000);
}

