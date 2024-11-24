#include <Servo.h>

const int STEERING = 10;
const int ULTRA_SONIC_SENSOR = 9;
const int MOTOR = 6;
const int SPEED = 155;

void setup() {
    steeringServo.attach(STEERING);

    pinMode(motorForward, OUTPUT);
    pinMode(motorBackward, OUTPUT);

    steeringServo.write(90);
}

moveFoward(){
    analogWrite(motorForward, SPEED);
    analogWrite(motorBackward, 0);
}
moveBackward(){
    analogWrite(motorForward, 0);
    analogWrite(motorBackward, SPEED);
}
steerLeft(){
    steeringServo.write(45);
}
steerRight(){
    steeringServo.write(135);
}
centerSteer(){
    steeringServo.write(90);
}

void loop(){
    moveFoward();
    delay(2000);
    moveBackward()
    delay(2000);
    
    steerRight();
    SteerLeft();
    centerSteer();
}