/***************************
 * DYNAMIXEL Analog Knob
 * Read Analog Sensor pin 0 and write 
 * that value to servo 1
 ***************************/
#include <ax12.h> //import ax12 library to send DYNAMIXEL commands

const int ANALOG_PIN = 0;
const int SERVO_ID_A = 1;
const int SERVO_ID_B = 2;
const int SERVO_ID_C = 4;
const int SERVO_ID_D = 6;

int servoPosition; // position from control servo


void setup()
{
  dxlInit(1000000); //start the DYNAMIXEL chain at 1mbps

}

void loop()
{
    servoPosition = analogRead(ANALOG_PIN); //analog read is 10-bit and returns a 0-1023 value, just like the servo position for the servo
    //dxlSetGoalPosition(OUTPUT_SERVO,servoPosition); //set the position of servo # 1 to '0'
    dxlSetGoalPosition(SERVO_ID_A,servoPosition); //set the position of servo # 1 to '0'
    dxlSetGoalPosition(SERVO_ID_B,servoPosition); //set the position of servo # 1 to '0'
    dxlSetGoalPosition(SERVO_ID_C,servoPosition); //set the position of servo # 1 to '0'
    dxlSetGoalPosition(SERVO_ID_D,servoPosition); //set the position of servo # 1 to '0'
    delay(2);//wait for servo to move
 
}




