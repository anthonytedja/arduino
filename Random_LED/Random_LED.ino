/* This is my Section 1 - Pin Manipulation Program
 * Assignment 3 - Random LED
 * Made by Anthony Tedja
 * Arduino Duemilanove or Diecimila, ATmega328 on Something that cant be COM1
 * Must light 6 LEDs in a random order
 * V1
 */

int anthony = 1; // time the program runs

void setup()
{
byte sum = analogRead(5); // the reading that analogRead gets
pinMode(A5,INPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
randomSeed(sum);
}

void loop() 
{
if(anthony<11)
{
int outcome = random(6,12); // possible outcomes
digitalWrite(outcome,HIGH);
delay(250);
digitalWrite(outcome,LOW);
delay(250);
anthony++;
}
}

