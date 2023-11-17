#include <Stepper.h>

// Defines the number of steps per rotation
const int stepsPerRevolution = 2038;

// Creates an instance of stepper class
// Pins entered in sequence IN1-IN3-IN2-IN4 for proper step sequence
Stepper right = Stepper(stepsPerRevolution, 8, 10, 9, 11);
Stepper left = Stepper(stepsPerRevolution,3,5,4,6);

void setup() {
    // Nothing to do (Stepper Library sets pins as outputs)
    right.setSpeed(5);
    left.setSpeed(5);
}

void loop() {
	// Rotate CW slowly at 5 RPM
	turnRight();
}
void forward(){
  for(int s=0; s<360; s++)
    {
      right.step(1);
      left.step(-1);
    }
}
void backward(){
  for(int s=0; s<360; s++)
    {
      right.step(-1);
      left.step(1);
    }
}
void turnRight(){
  for(int s=0; s<360; s++)
    {
      right.step(-1);
      left.step(-2);
    }
}
void turnLeft(){
  for(int s=0; s<360; s++)
    {
      right.step(2);
      left.step(1);
    }
}