/*
   LED CUBE Program - Routine 7
   Created by Anthony Tedja March 20, 2019
   TER4M1 – LED CUBE Assignment
   Sketch for Snake
   V 1.1.0
*/

int f = 7; // Front
int m = 6; // Middle
int b = 5; // Back
int previous1, previous2; // For tracking previous values

int rnd; // Hold random number

int fran = A2; // Starting posistions
int fran1 = A2;
int mran = A2;
int mran1 = A2;
int bran = A2;

void setup() // Setup function
{
  for (int i = 5; i < 14; i++) // Setup the positive pins
  {
    pinMode(i, OUTPUT);
  }

  pinMode(A0, OUTPUT); // Setup the negative pins
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);

  randomSeed(analogRead(A5)); // For random generation
}

void loop() // The code main code that will loop in the program
{
  for (int i = 0; i < 150; i++) // For amount of time per frame
  {
    digitalWrite(f, HIGH);
    digitalWrite(fran, LOW);
    delay(1);

    digitalWrite(f, LOW);
    digitalWrite(fran, HIGH);

    digitalWrite(m, HIGH);
    digitalWrite(mran, LOW);
    delay(1);

    digitalWrite(m, LOW);
    digitalWrite(mran, HIGH);

    digitalWrite(b, HIGH);
    digitalWrite(bran, LOW);
    delay(1);

    digitalWrite(b, LOW);
    digitalWrite(bran, HIGH);
  }
  
  fran1 = fran; // Copy previous values to variables
  mran1 = mran;

  if (fran1 == A0) // Top row
  {
    rnd = random(0, 2);
  }
  else if (fran1 == A1) // Middle row
  {
    rnd = random(0, 3);
  }
  else if (fran1 == A2) // Bottom row
  {
    rnd = random(1, 3);
  }

  if (rnd == 0) // Set the row values
  {
    fran = A0;
  }

  else if (rnd == 1) 
  {
    fran = A1;
  }

  else if (rnd == 2) 
  {
    fran = A2;
  }

  previous1 = f; // Store old values in variables
  previous2 = m;

  mran = fran1;
  bran = mran1;

  if (fran == fran1) // When the values are the same
  {
    do 
    {
      rnd = random(0, 4); // For row
      
      if (previous1 == 5) // Routine for each pin
      {
        if (rnd == 0) 
        {
          f = previous1 + 3;
        }
        else 
        {
          f = previous1 + 1;
        }
      }

      else if (previous1 == 6) // Routine for each pin
      {
        if (rnd == 0) 
        {
          f = previous1 + 1;
        }
        else if (rnd == 1) 
        {
          f = previous1 - 1;
        }
        else if (rnd == 2) 
        {
          f = previous1 + 3;
        }
      }

      else if (previous1 == 7) // Routine for each pin
      {
        if (rnd == 0) 
        {
          f = previous1 + 3;
        }
        else 
        {
          f = previous1 - 1;
        }
      }

      if (previous1 == 8) // Routine for each pin
      {
        if (rnd == 0) 
        {
          f = previous1 + 3;
        }
        else if (rnd == 1) 
        {
          f = previous1 + 1;
        }
        else 
        {
          f = previous1 - 1;
        }
      }

      if (previous1 == 9) // Routine for each pin
      {
        if (rnd == 0) 
        {
          f = previous1 - 1;
        }
        else if (rnd == 1) 
        {
          f = previous1 + 1;
        }
        else if (rnd == 2) 
        {
          f = previous1 + 3;
        }
        else if (rnd == 3) 
        {
          f = previous1 - 3;
        }
      }

      else if (previous1 == 10) // Routine for each pin
      {
        if (rnd == 0) 
        {
          f = previous1 + 3;
        }
        else if (rnd == 1) 
        {
          f = previous1 - 1;
        }
        else if (rnd == 2) 
        {
          f = previous1 - 3;
        }
         
      }

      else if (previous1 == 11) // Routine for each pin
      {
        if (rnd == 0) 
        {
          f = previous1 - 3;
        }
        else if (rnd == 1) 
        {
          f = previous1 + 1;
        }
      }

      else if (previous1 == 12) // Routine for each pin
      {
        if (rnd == 0) 
        {
          f = previous1 + 1;
        }
        else if (rnd == 1) 
        {
          f = previous1 - 1;
        }
        else if (rnd == 2) 
        {
          f = previous1 - 3;
        }
      }

      else if (previous1 == 13) // Routine for each pin
      {
        if (rnd == 0) 
        {
          f = previous1 - 1;
        }
        else if (rnd == 1) 
        {
          f = previous1 + 3;
        }
        else if (rnd == 2) 
        {
          f = previous1 - 3;
        }
      }

    } while (f == previous1 || f == m || f == b);
  }

  else if (fran != fran1) // When they are different values
  {
    f = previous1;
  }

  m = previous1; // Store old values in variables
  b = previous2;

}
