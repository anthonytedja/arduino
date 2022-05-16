/*
   LED CUBE Program - Routine 5
   Created by Anthony Tedja March 20, 2019
   TER4M1 – LED CUBE Assignment
   Sketch for Side to side
   V 1.0.1
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
  digitalWrite(A0, LOW); // Turn on all rows
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  
  if (counter == 0) // Left column
  {
    for (int i = 5; i < 8; i++)
    {
      digitalWrite(i, HIGH);
    }

    delay(500);

    for (int i = 5; i < 8; i++)
    {
      digitalWrite(i, LOW);
    }

    counter++; // Move to the right
    previous--;
  }

  if (counter == 1 && previous == 0) // Middle column coming from the left
  {
    for (int i = 8; i < 11; i++)
    {
      digitalWrite(i, HIGH);
    }

    delay(500);

    for (int i = 8; i < 11; i++)
    {
      digitalWrite(i, LOW);
    }

    counter++; //Move to the right
    previous++;
  }

  if (counter == 1 && previous == 2) // Middle column coming from the right
  {
    for (int i = 8; i < 11; i++)
    {
      digitalWrite(i, HIGH);
    }

    delay(500);
    
    for (int i = 8; i < 11; i++)
    {
      digitalWrite(i, LOW);
    }

    counter--; // Move to the left
    previous--;
  }

  if (counter == 2) // Right column
  {
    for (int i = 11; i < 14; i++)
    {
      digitalWrite(i, HIGH);
    }

    delay(500);

    for (int i = 11; i < 14; i++)
    {
      digitalWrite(i, LOW);
    }

    counter--; // Move to the left
    previous++;
  }
}
