/* 
 * Assignment 4 - Analog Read
 * Made by Anthony Tedja
 * Arduino Duemilanove or Diecimila, ATmega328 on Something that cant be COM1
 * Must use sensors to output percentage value
 * 05/17/2018
 * V1.3
 */

int sensor = A5; // Sensor pin number
double value; // Variable for sensor reading

void setup()
{
  
  Serial.begin(9600); // Open communication port
  pinMode(sensor, INPUT);
  
}

void loop()
{
  
  value = analogRead(sensor); // Read sensor for its value

  if(value > 620)
  {

    Serial.print("Light     (Value = ");
    Serial.print((value / 1023) * 100); // Convert it to a percentage
    Serial.println("%)");
    
  }

  else
  {

    Serial.print("Dark     (Value = ");
    Serial.print((value / 1023) * 100); // Convert it to a percentage
    Serial.println("%)");
    
  }
  
  delay(100);
  
}

