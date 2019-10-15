#include <Servo.h>

double AnguloX;
double AnguloY;

Servo servo_8;

Servo servo_7;

void setup(){
    pinMode(A4, INPUT);
    pinMode(A5, INPUT);

    servo_8.attach(8);
    servo_7.attach(7);
}


void loop(){

    AnguloX = map(analogRead(A4), 0,1023,0,180);
    AnguloY = map(analogRead(A5), 0,1023,0,180);
    
    servo_8.write(AnguloX);
    delay(100);
    
    servo_7.write(AnguloY);
    delay(100);

}
