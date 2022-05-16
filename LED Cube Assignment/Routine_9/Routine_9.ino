/*
   LED CUBE Program - Routine 9
   Created by Anthony Tedja March 20, 2019
   TER4M1 – LED CUBE Assignment
   Sketch for Persistance if Vision
   V 1.0.0
*/

int counter;
int timer = 1;

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

  if(timer == 1) // Display "1"
  {
    counter = 0;
    while(counter < 150)
    {
      digitalWrite(A0, HIGH);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, LOW);

      digitalWrite(7, HIGH);
      delay(2);

      digitalWrite(7, LOW);
      delay(1);
      
      digitalWrite(A0, HIGH);
      digitalWrite(A1, LOW);
      digitalWrite(A2, HIGH);

      digitalWrite(7, HIGH);
      delay(2);

      digitalWrite(7, LOW);
      delay(1);

      digitalWrite(A0, LOW);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, HIGH);

      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      delay(2);

      digitalWrite(7, LOW);
      digitalWrite(9, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      delay(1);
      
      counter++; // Move to the next number
      
    }
    
    timer++;
  }

  if(timer == 2) // Display "2"
  {
    counter = 0;
    while(counter < 150)
    {
      digitalWrite(A0, HIGH);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, LOW);

      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(13, HIGH);
      delay(2);

      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(10, LOW);
      digitalWrite(13, LOW);
      delay(1);
      
      digitalWrite(A0, HIGH);
      digitalWrite(A1, LOW);
      digitalWrite(A2, HIGH);

      digitalWrite(10, HIGH);
      delay(2);

      digitalWrite(10, LOW);
      delay(1);

      digitalWrite(A0, LOW);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, HIGH);

      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      delay(2);

      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      delay(1);
      
      counter++; // Move to the next number
      
    }
    
    timer++;
  }

  if(timer == 3) // Display "3"
  {
    counter = 0;
    while(counter < 150)
    {
      digitalWrite(A0, HIGH);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, LOW);

      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(13, HIGH);
      delay(2);

      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(10, LOW);
      digitalWrite(13, LOW);
      delay(1);
      
      digitalWrite(A0, HIGH);
      digitalWrite(A1, LOW);
      digitalWrite(A2, HIGH);

      digitalWrite(6, HIGH);
      delay(2);

      digitalWrite(6, LOW);
      delay(1);

      digitalWrite(A0, LOW);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, HIGH);

      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      delay(2);

      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      delay(1);
      
      counter++; // Move to the next number
      
    }
    
    timer++;
  }

  if(timer == 4) // Display "4"
  {
    counter = 0;
    while(counter < 150)
    {
      digitalWrite(A0, HIGH);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, LOW);

      digitalWrite(6, HIGH);
      delay(2);

      digitalWrite(6, LOW);
      delay(1);
      
      digitalWrite(A0, HIGH);
      digitalWrite(A1, LOW);
      digitalWrite(A2, HIGH);

      digitalWrite(6, HIGH);
      delay(2);

      digitalWrite(6, LOW);
      delay(1);

      digitalWrite(A0, LOW);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, HIGH);

      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      delay(2);

      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(10, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      delay(1);
      
      counter++; // Move to the next number
      
    }
    
    timer++;
  }

  if(timer == 5) // Display "5"
  {
    counter = 0;
    while(counter < 150)
    {
      digitalWrite(A0, HIGH);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, LOW);

      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(13, HIGH);
      delay(2);

      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(10, LOW);
      digitalWrite(13, LOW);
      delay(1);
      
      digitalWrite(A0, HIGH);
      digitalWrite(A1, LOW);
      digitalWrite(A2, HIGH);

      digitalWrite(6, HIGH);
      delay(2);

      digitalWrite(6, LOW);
      delay(1);

      digitalWrite(A0, LOW);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, HIGH);

      digitalWrite(5, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      delay(2);

      digitalWrite(5, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      delay(1);
      
      counter++; // Move to the next number
      
    }
    
    timer++;
  }

  if(timer == 6) // Display "6"
  {
    counter = 0;
    while(counter < 150)
    {
      digitalWrite(A0, HIGH);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, LOW);

      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(13, HIGH);
      delay(2);

      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(10, LOW);
      digitalWrite(13, LOW);
      delay(1);
      
      digitalWrite(A0, HIGH);
      digitalWrite(A1, LOW);
      digitalWrite(A2, HIGH);

      digitalWrite(6, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(13, HIGH);
      delay(2);

      digitalWrite(6, LOW);
      digitalWrite(10, LOW);
      digitalWrite(13, LOW);
      delay(1);

      digitalWrite(A0, LOW);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, HIGH);

      digitalWrite(5, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      delay(2);

      digitalWrite(5, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      delay(1);
      
      counter++; // Move to the next number
      
    }
    
    timer++;
  }

  if(timer == 7) // Display "7"
  {
    counter = 0;
    while(counter < 150)
    {
      digitalWrite(A0, HIGH);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, LOW);

      digitalWrite(6, HIGH);
      delay(2);

      digitalWrite(6, LOW);
      delay(1);
      
      digitalWrite(A0, HIGH);
      digitalWrite(A1, LOW);
      digitalWrite(A2, HIGH);

      digitalWrite(6, HIGH);
      delay(2);

      digitalWrite(6, LOW);
      delay(1);

      digitalWrite(A0, LOW);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, HIGH);

      digitalWrite(6, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      delay(2);

      digitalWrite(6, LOW);
      digitalWrite(8, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      delay(1);
      
      counter++; // Move to the next number
      
    }
    
    timer++;
  }

  if(timer == 8) // Display "8"
  {
    counter = 0;
    while(counter < 150)
    {
      digitalWrite(A0, HIGH);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, LOW);

      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(13, HIGH);
      delay(2);

      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(10, LOW);
      digitalWrite(13, LOW);
      delay(1);
      
      digitalWrite(A0, HIGH);
      digitalWrite(A1, LOW);
      digitalWrite(A2, HIGH);

      digitalWrite(6, HIGH);
      digitalWrite(10, HIGH);
      delay(2);

      digitalWrite(6, LOW);
      digitalWrite(10, LOW);
      delay(1);

      digitalWrite(A0, LOW);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, HIGH);

      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      delay(2);

      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      delay(1);
      
      counter++; // Move to the next number
      
    }
    
    timer++;
  }

  if(timer == 9) // Display "9"
  {
    counter = 0;
    while(counter < 150)
    {
      digitalWrite(A0, HIGH);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, LOW);

      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(13, HIGH);
      delay(2);

      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(10, LOW);
      digitalWrite(13, LOW);
      delay(1);
      
      digitalWrite(A0, HIGH);
      digitalWrite(A1, LOW);
      digitalWrite(A2, HIGH);

      digitalWrite(5, HIGH);
      delay(2);

      digitalWrite(5, LOW);
      delay(1);

      digitalWrite(A0, LOW);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, HIGH);

      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(13, HIGH);
      delay(2);

      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      delay(1);
      
      counter++; // Move to the next number
      
    }

    delay(1000);
    timer = 1;
  }
  
}
