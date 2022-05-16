/* 
 * Assignment 3 - Push My Buttons
 * Made by Anthony Tedja
 * Arduino Duemilanove or Diecimila, ATmega328 on Something that cant be COM1
 * Must light LED when button isn't pushed
 * 05/14/2018
 * V1.0
 */

byte led = 6; // LED pin number
byte button = 12; // Button pin number
byte reading; // Variable for button reading

void setup()
{
  
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);

}

void loop()
{
  
  reading = digitalRead(button); // Read button if its being pushed

  if(reading == LOW) // Only if its being pushed
  {
    
    digitalWrite(led,HIGH);
    
  }
  
  digitalWrite(led,LOW);
  
}
