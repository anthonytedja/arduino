/*
   LED CUBE Program - Routine 8
   Created by Anthony Tedja March 21, 2019
   TER4M1 – LED CUBE Assignment
   Sketch for Counter Rotating levels
   V 1.4.1
*/

int timer; // To keep track of timing

int previous1, previous2, previous3, previous4; // To store previous values

int a = 7; // Bottom and Top row controls
int b = 6;
int c = 5;

int d = 13; // Middle row controls
int e = 12;
int f = 11;

void setup() // Setup function
{
  for (int i = 5; i < 14; i++) // Setup the positive pins
  {
    pinMode(i, OUTPUT);
  }

  pinMode(A0, OUTPUT); // Setup the negative pins
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);

  digitalWrite(A2, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A0, HIGH);
}

void loop() // The code main code that will loop in the program
{
  timer = 0; // Reset the timer
  
  while(timer < 50) // Run each frame for this amount of time
  { 
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);

    digitalWrite(A2, LOW); // Turn on bottom row
    
    delay(1);
   
    digitalWrite(A2, HIGH); // Turn off
    
    digitalWrite(A0, LOW); // Turn on top row
    
    delay(1);
    
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    
    digitalWrite(A0, HIGH); // Turn off

    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);

    digitalWrite(A1, LOW); // Turn on middle row
    
    delay(1);
    
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    
    digitalWrite(A1, HIGH); // Turn off

    timer++;
  }

  previous1 = a; // Store previous values in variables

  if(a < 7) // Move up
  {
    a++;
  }

  else if(a == 7 || a == 10) // Move right
  {
    a = a + 3;
  }

  else if(a == 13 || a == 12) // Move down
  {
    a--;
  }

  else if(a == 11 || a == 8) // Move left
  {
    a = a - 3;
  }

  previous3 = d; // Store previous values in variables

  if(d < 8 && d > 5) // Move down
  {
    d--;
  }

  else if(d == 10 || d == 13) // Move left
  {
    d = d - 3;
  }

  else if(d == 11 || d == 12) // Move up
  {
    d++;
  }

  else if(d == 5 || d == 8) // Move right
  {
    d = d + 3;
  }

  previous2 = b; // Store previous values in variables for new sequence
  b = previous1;
  c = previous2;

  previous4 = e;
  e = previous3;
  f = previous4;
}
