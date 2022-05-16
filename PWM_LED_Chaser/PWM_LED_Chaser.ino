/* This is my Section 2 - PWM
 * Assignment 2 - PWM LED Chaser
 * Made by Anthony Tedja
 * Arduino Duemilanove or Diecimila, ATmega328 on Something that cant be COM1
 * Must light 6 LEDs, 3 at a time with different brightness'
 * V2
 */

byte led = 0; // Variable for "order"
int brightness = 255; // This is the max brightness

void setup() 
{
}

void loop() 
{
int order [] = {1,2,3,5,6,9,10,11,12,13}; // Which LED is on

for(led=2;led<=9;led++)
{
analogWrite(order[led],brightness);
analogWrite(order[led-1],128);
analogWrite(order[led-2],64);
delay(brightness);
analogWrite(order[led],0);
analogWrite(order[led-1],0);
analogWrite(order[led-2],0);
}

for(led=7;led>=1;led--)
{
analogWrite(order[led],brightness);
analogWrite(order[led+1],128);
analogWrite(order[led+2],64);
delay(brightness);
analogWrite(order[led],0);
analogWrite(order[led+1],0);
analogWrite(order[led+2],0);
}

}
