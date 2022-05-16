/* This is my Section 1 - Pin Manipulation Program
 *  Assignment 1 - Morse Code
 *  Made by Anthony Tedja 
 *  Arduino Duemilanove or Diecimila, ATmega328 on Something that cant be COM1
 *  Must flash word "ANTHONY" in morse code using one LED and should loop indefinitely
 *  V1
 */

byte ledyellow1 = 13; // this is the pin my LED is hooked up to
byte dot = 250; // time LED is on. Length of dot is one unit
int dash = 750; // time LED is on. Length of dash is three units
byte delayinletter = 250; // time LED is off. Length of each part for one letter is one unit
int delayeachletter = 750; // time LED is off. Length of each space between each letter is three units
int ending = 1750; // time LED is off. Lenth of each space between words are seven units

void setup() 
{
pinMode(ledyellow1,OUTPUT);
}

void loop() 
{
// A
digitalWrite(ledyellow1,HIGH);
delay(dot);
digitalWrite(ledyellow1,LOW);
delay(delayinletter);
digitalWrite(ledyellow1,HIGH);
delay(dash);

//This code for every space in each letter
digitalWrite(ledyellow1,LOW);
delay(delayeachletter);

// N
digitalWrite(ledyellow1,HIGH);
delay(dash);
digitalWrite(ledyellow1,LOW);
delay(delayinletter);
digitalWrite(ledyellow1,HIGH);
delay(dot);

//This code for every space in each letter
digitalWrite(ledyellow1,LOW);
delay(delayeachletter);

// T
digitalWrite(ledyellow1,HIGH);
delay(dash);

//This code for every space in each letter
digitalWrite(ledyellow1,LOW);
delay(delayeachletter);

// H
digitalWrite(ledyellow1,HIGH);
delay(dot);
digitalWrite(ledyellow1,LOW);
delay(delayinletter);
digitalWrite(ledyellow1,HIGH);
delay(dot);
digitalWrite(ledyellow1,LOW);
delay(delayinletter);
digitalWrite(ledyellow1,HIGH);
delay(dot);
digitalWrite(ledyellow1,LOW);
delay(delayinletter);
digitalWrite(ledyellow1,HIGH);
delay(dot);

//This code for every space in each letter
digitalWrite(ledyellow1,LOW);
delay(delayeachletter);

// O
digitalWrite(ledyellow1,HIGH);
delay(dash);
digitalWrite(ledyellow1,LOW);
delay(delayinletter);
digitalWrite(ledyellow1,HIGH);
delay(dash);
digitalWrite(ledyellow1,LOW);
delay(delayinletter);
digitalWrite(ledyellow1,HIGH);
delay(dash);

//This code for every space in each letter
digitalWrite(ledyellow1,LOW);
delay(delayeachletter);

// N
digitalWrite(ledyellow1,HIGH);
delay(dash);
digitalWrite(ledyellow1,LOW);
delay(delayinletter);
digitalWrite(ledyellow1,HIGH);
delay(dot);

//This code for every space in each letter
digitalWrite(ledyellow1,LOW);
delay(delayeachletter);

// Y
digitalWrite(ledyellow1,HIGH);
delay(dash);
digitalWrite(ledyellow1,LOW);
delay(delayinletter);
digitalWrite(ledyellow1,HIGH);
delay(dot);
digitalWrite(ledyellow1,HIGH);
delay(dash);
digitalWrite(ledyellow1,LOW);
delay(delayinletter);
digitalWrite(ledyellow1,HIGH);
delay(dash);

//This code for the end of ANTHONY
digitalWrite(ledyellow1,LOW);
delay(ending);

}
