/*
   LED CUBE Program - Routine 6
   Created by Anthony Tedja March 20, 2019
   TER4M1 – LED CUBE Assignment
   Sketch for Rotating Walls
   V 1.1.3
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
  digitalWrite(A0, LOW); // Turn on for all 3 levels
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);

  digitalWrite(8, HIGH); // Turn on wall
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);

  delay(500);

  digitalWrite(8, LOW); // Turn off wall
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);

  delay(1);

  digitalWrite(5, HIGH); // Turn on wall
  digitalWrite(9, HIGH);
  digitalWrite(13, HIGH);

  delay(500);

  digitalWrite(5, LOW); // Turn off wall
  digitalWrite(9, LOW);
  digitalWrite(13, LOW);

  delay(1);

  digitalWrite(6, HIGH); // Turn on wall
  digitalWrite(9, HIGH);
  digitalWrite(12, HIGH);

  delay(500);

  digitalWrite(6, LOW); // Turn off wall
  digitalWrite(9, LOW);
  digitalWrite(12, LOW);

  delay(1);

  digitalWrite(7, HIGH); // Turn on wall
  digitalWrite(9, HIGH);
  digitalWrite(11, HIGH);

  delay(500);

  digitalWrite(7, LOW); // Turn off wall
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);

  delay(1);
}
