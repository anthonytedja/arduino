/*
   LED CUBE Program - Routine 4
   Created by Anthony Tedja March 20, 2019
   TER4M1 – LED CUBE Assignment
   Sketch for Up and Down
   V 1.1.0
*/

int counter = 0; // For tracking the level
int previous = 1; // For tracking previous level

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
  if (counter == 0) // Bottom row
  {
    digitalWrite(A0, HIGH); // Turn on bottom row
    digitalWrite(A1, HIGH);
    digitalWrite(A2, LOW);

    light();

    counter++; // Move up a row
    previous--;
  }

  if (counter == 1 && previous == 0) // Middle row from bottom row
  {
    digitalWrite(A0, HIGH); // Turn on middle row
    digitalWrite(A1, LOW);
    digitalWrite(A2, HIGH);

    light();

    counter++; // Move up a row
    previous++;
  }

  if (counter == 1 && previous == 2) // Middle row from top row
  {
    digitalWrite(A0, HIGH); // Turn on middle row
    digitalWrite(A1, LOW);
    digitalWrite(A2, HIGH);

    light();

    counter--; // Move down a row
    previous--;
  }

  if (counter == 2) // Top row
  {
    digitalWrite(A0, LOW); // Turn on top row
    digitalWrite(A1, HIGH);
    digitalWrite(A2, HIGH);

    light();

    counter--; // Move down a row
    previous++;
  }
}

void light() // Subroutine for turning on rows
{
  for (int i = 5; i < 14; i++)
  {
    digitalWrite(i, HIGH);
  }

  delay(500);

  for (int i = 5; i < 14; i++)
  {
    digitalWrite(i, LOW);
  }
}

