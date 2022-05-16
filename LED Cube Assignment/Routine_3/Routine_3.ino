/*
   LED CUBE Program - Routine 3
   Created by Anthony Tedja March 20, 2019
   TER4M1 – LED CUBE Assignment
   Sketch for Starburst
   V 1.1.2
*/

void setup() // Setup function
{
  for (int i = 5; i < 14; i++) // Setup the positive pins
  {
    pinMode(i, OUTPUT);
  }

  pinMode(A0, OUTPUT); // Setup the negative pins
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
}

void loop() // The code main code that will loop in the program
{
  center();
  
  delay(500);
  
  burst();
  
  delay(500);

  digitalWrite(5, LOW); // Reset interactions
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);

}

void center() // Subroutine for initial led
{
  digitalWrite(9,HIGH);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  digitalWrite(A2, HIGH);
}

void burst() // Subroutine for final burst
{
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
}

