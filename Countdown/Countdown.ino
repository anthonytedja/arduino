/* This is my Section 2 - PWM
 * Assignment 1 - Countdown
 * Made by Anthony Tedja
 * Arduino Duemilanove or Diecimila, ATmega328 on Something that cant be COM1
 * Must light 6 LEDs one at a time and dim each one before the next
 * V3,
 */

byte led = 0; // Variable for "order"
int brightness = 255; // This is the max brightness

void setup() 
{
}  

void loop() 
{
int order [] = {3,5,6,9,10,11}; // Which LED is on

analogWrite(order[0],brightness); //3
analogWrite(order[1],brightness); //5
analogWrite(order[2],brightness); //6
analogWrite(order[3],brightness); //9
analogWrite(order[4],brightness); //10
analogWrite(order[5],brightness); //11


for(led=5;led>=0;led--)
{
for(brightness=255;brightness>=0;brightness--)
{
analogWrite(order[led],brightness);
delay(5);
}
}

}

