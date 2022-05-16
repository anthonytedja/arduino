/* This is my Section 3 - Input/Output
 * Assignment 1 - Push My Buttons
 * Made by Anthony Tedja
 * Arduino Duemilanove or Diecimila, ATmega328 on Something that cant be COM1
 * Must light LED when button isn't pushed
 * V1
 */

byte led = 3; // Pin for LED
byte button = 8; // Pin for button
byte a; // Button

void setup()
{
pinMode(led,OUTPUT);
pinMode(button,INPUT);
}

void loop()
{
a = digitalRead(button);
if(a==LOW)
{
digitalWrite(led,HIGH);
}
digitalWrite(led,LOW);
}
