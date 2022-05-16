/* This is my Section 1 - Pin Manipulation Program
 * Assignment 2 - LED Chaser
 * Made by Anthony Tedja
 * Arduino Duemilanove or Diecimila, ATmega328 on Something that cant be COM1
 * Must light 6 LEDs one at a time left to right and back again
 * V1
 */

void setup() 
{
int ledflash; // this is the light that is on
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}

void loop()
{
for(int ledflash=6; ledflash<11; ledflash++)
{
digitalWrite(ledflash,HIGH);
delay(50);
digitalWrite(ledflash,LOW);
delay(50);
}

for(int ledflash=11; ledflash>6; ledflash--)
{
digitalWrite(ledflash,HIGH);
delay(50);
digitalWrite(ledflash,LOW);
delay(50);
}
}
