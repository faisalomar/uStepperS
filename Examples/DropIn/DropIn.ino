/*
*			DropIn example sketch!
*
*	Pin connections:
*	-----------------------------
*	| Controller | uStepper S    |
*	|----------------------------|
*	|	Enable   |		D2		 |
*	|	Step     |		D3		 |
*	|	Dir      |		D4		 |
*	|	GND      |		GND		 |
*	------------------------------	
*/

#include <uStepperS.h>
uStepperS stepper;

void setup() {

  Serial.begin(9600);
  stepper.setup(DROPIN, 200, 65, 3.0, 0.0);
}

void loop() {
  stepper.dropinCli();
}
