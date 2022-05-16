/* 
 * Assignment 1 - Morse Code
 * Made by Anthony Tedja
 * Arduino Duemilanove or Diecimila, ATmega328 on Something that cant be COM1
 * Must flash word "ANTHONY" in morse code using one LED and should loop indefinitely
 * 05/09/2018
 * V1.0
 */

int led = 13; // LED pin number
int dot = 250; // Time LED is on for dot
int dash = 750; // Time LED is on for dash
int delayinletter = 250; // Time LED is off between dots and dashes
int delayeachletter = 750; // Time LED is off between different letters
int ending = 3000; // Time LED is off at the end of code

void setup()
{
  
  // LED setup
  pinMode(led,OUTPUT);
  
}

void space()
{
  
  // Subroutine for every space in each letter
  digitalWrite(led,LOW);
  delay(delayeachletter);
  
}

void loop()
{

  // A
  digitalWrite(led,HIGH);
  delay(dot);
  digitalWrite(led,LOW);
  delay(delayinletter);
  digitalWrite(led,HIGH);
  delay(dash);
  
  space();
  
  // N
  digitalWrite(led,HIGH);
  delay(dash);
  digitalWrite(led,LOW);
  delay(delayinletter);
  digitalWrite(led,HIGH);
  delay(dot);
  
  space();
  
  // T
  digitalWrite(led,HIGH);
  delay(dash);
  
  space();
  
  // H
  digitalWrite(led,HIGH);
  delay(dot);
  digitalWrite(led,LOW);
  delay(delayinletter);
  digitalWrite(led,HIGH);
  delay(dot);
  digitalWrite(led,LOW);
  delay(delayinletter);
  digitalWrite(led,HIGH);
  delay(dot);
  digitalWrite(led,LOW);
  delay(delayinletter);
  digitalWrite(led,HIGH);
  delay(dot);
  
  space();
  
  // O
  digitalWrite(led,HIGH);
  delay(dash);
  digitalWrite(led,LOW);
  delay(delayinletter);
  digitalWrite(led,HIGH);
  delay(dash);
  digitalWrite(led,LOW);
  delay(delayinletter);
  digitalWrite(led,HIGH);
  delay(dash);

  space();
  
  // N
  digitalWrite(led,HIGH);
  delay(dash);
  digitalWrite(led,LOW);
  delay(delayinletter);
  digitalWrite(led,HIGH);
  delay(dot);
  
  space();
  
  // Y
  digitalWrite(led,HIGH);
  delay(dash);
  digitalWrite(led,LOW);
  delay(delayinletter);
  digitalWrite(led,HIGH);
  delay(dot);
  digitalWrite(led,HIGH);
  delay(dash);
  digitalWrite(led,LOW);
  delay(delayinletter);
  digitalWrite(led,HIGH);
  delay(dash);
  
  //This code for the end of ANTHONY
  digitalWrite(led,LOW);
  delay(ending);

}
