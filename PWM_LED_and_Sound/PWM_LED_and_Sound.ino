/* This is my Section 2 - PWM
 * Assignment 3 - PWM LED and Sound
 * Made by Anthony Tedja
 * Arduino Duemilanove or Diecimila, ATmega328 on Something that cant be COM1
 * Must light an LED and make a sound
 * V1
 */

byte led = 0; // Start point
int brightness = 255; // This is the max brightness
byte speaker = 11; // Which pin I will use for the speaker 

void setup() 
{
}

void loop() 
{
for(led=0;led<=brightness;led++)
{
analogWrite(10,led);
delay(5);
analogWrite(11,brightness - led);
delay(5);
}

for(led=255;led>=0;led--)
{
analogWrite(11,brightness - led);
delay(5);
analogWrite(10,led);
delay(5);
}
}
