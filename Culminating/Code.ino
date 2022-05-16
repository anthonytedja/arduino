/* This is my Culminating Project "Bat Mobile"
 *  Made by Anthony Tedja 
 *  Arduino Duemilanove or Diecimila, ATmega328 on Something that cant be COM1
 *  Must make robot go through the track
 *  V 3.1.9
 */

int turnl = 550; // To make the robot turn left 
int turnr = 750; // To make the robot turn right
int pause = 250; // The delay before the next step
long finish = 1000000; // The end to stop for a long time

void setup()
{
pinMode(7,OUTPUT); // Left Backward
pinMode(8,OUTPUT); // Left Forward
pinMode(9,OUTPUT); // Right Forward
pinMode(10,OUTPUT); // Right Backward
}

void loop()
{
  
// Go Forward  
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
delay(4000);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
delay(pause);

// Turn Left
digitalWrite(7,HIGH);
digitalWrite(9,HIGH);
delay(turnl);
digitalWrite(7,LOW);
digitalWrite(9,LOW);
delay(pause);

// Go Forward
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
delay(6000);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
delay(pause);

// Turn Right 
digitalWrite(8,HIGH);
digitalWrite(10,HIGH);
delay(turnr);
digitalWrite(8,LOW);
digitalWrite(10,LOW);
delay(pause);

// Go Straight
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
delay(4500);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
delay(pause);

// Turn Right 
digitalWrite(8,HIGH);
digitalWrite(10,HIGH);
delay(turnl);
digitalWrite(8,LOW);
digitalWrite(10,LOW);
delay(pause);

// Go Straight
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
delay(3000);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
delay(pause);

// Turn Left
digitalWrite(7,HIGH);
digitalWrite(9,HIGH);
delay(turnl);
digitalWrite(7,LOW);
digitalWrite(9,LOW);
delay(pause);

// Go Straight
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
delay(5000);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
delay(finish);
}




