/*
   LED CUBE Program - Routine 1
   Created by Anthony Tedja March 20, 2019
   TER4M1 – LED CUBE Assignment
   Sketch for Spiral pattern
   V 1.2.0
*/

int counter = 0; // For tracking the side
int previous = 1; // For tracking previous side

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
digitalWrite(A0, HIGH); // Light up sprial sequence
digitalWrite(A1, HIGH);
digitalWrite(A2, LOW);
sequence();
counter++; // Move up the row
previous--;
}

  if (counter == 1 && previous == 0) // Middle row coming from bottom row
  {
    digitalWrite(A0, HIGH); // Light up sprial sequence
    digitalWrite(A1, LOW);
    digitalWrite(A2, HIGH);
    sequence();
    counter++; // Move up the row
    previous++;
  }

  if (counter == 1 && previous == 2) // Middle row coming from top row
  {
    digitalWrite(A0, HIGH); // Light up sprial sequence
    digitalWrite(A1, LOW);
    digitalWrite(A2, HIGH);
    sequence();
    counter--; // Move up the row
    previous--;
  }

  if (counter == 2) // Top row
  {
    digitalWrite(A0, LOW); // Light up sprial sequence
    digitalWrite(A1, HIGH);
    digitalWrite(A2, HIGH);
    sequence();
    counter--; // Move down the row
    previous++;
  }
}

void sequence() // Subroutine for main code
{

  digitalWrite(5, HIGH);
  delay(100);

  digitalWrite(5, LOW);
  delay(1);

  digitalWrite(6, HIGH);
  delay(100);

  digitalWrite(6, LOW);
  delay(1);

  digitalWrite(7, HIGH);
  delay(100);

  digitalWrite(7, LOW);
  delay(1);

  digitalWrite(10, HIGH);
  delay(100);

  digitalWrite(10, LOW);
  delay(1);

  digitalWrite(13, HIGH);
  delay(100);

  digitalWrite(13, LOW);
  delay(1);

  digitalWrite(12, HIGH);
  delay(100);

  digitalWrite(12, LOW);
  delay(1);

  digitalWrite(11, HIGH);
  delay(100);

  digitalWrite(11, LOW);
  delay(1);

  digitalWrite(8, HIGH);
  delay(100);

  digitalWrite(8, LOW);
  delay(1);

  digitalWrite(9, HIGH);
  delay(100);

  digitalWrite(9, LOW);
  delay(1);
}
