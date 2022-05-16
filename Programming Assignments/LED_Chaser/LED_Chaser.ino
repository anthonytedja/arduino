/*
 * Assignment 2 - LED Chaser
 * Made by Anthony Tedja
 * Arduino Duemilanove or Diecimila, ATmega328 on Something that cant be COM1
 * Must light 6 LEDs one at a time left to right and back again
 * 05/10/2018
 * V1.0
 */

int led; // Variable for LED pins

void setup() 
{
  
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  
}

void loop()
{
  
  for(int led = 6; led < 11; led ++) // Loop for which LED pins are on going up
  {
    
    digitalWrite(led,HIGH);
    delay(50);
    digitalWrite(led,LOW);
    delay(50);
    
  }
  
  for(int led = 11; led > 6; led --) // Loop for which LED pins are on going down
  {
    
    digitalWrite(led,HIGH);
    delay(50);
    digitalWrite(led,LOW);
    delay(50);
    
  }
  
}
