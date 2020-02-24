#include <Stepper.h>

// change this to the number of steps on your motor
#define STEPS 32
#define STEPS_W 2048
// create an instance of the stepper class, specifying
// the number of steps of the motor and the pins it's
// attached to
Stepper stepper(STEPS, 8, 10, 9, 11);

// the previous reading from the analog input

int i = 0,val=0,per = 0;
void setup() {
  // set the speed of the motor to 30 RPMs
  stepper.setSpeed(500);
  
}

void loop() {
  
  
int val = analogRead(0);


i = map(val,0,1024,0,STEPS_W/3.55);



stepper.step(i-per);

per = i;  
  
}
