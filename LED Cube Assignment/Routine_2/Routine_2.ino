/*
   LED CUBE Program - Routine 2
   Created by Anthony Tedja March 20, 2019
   TER4M1 – LED CUBE Assignment
   Sketch for Starlight Sparkle
   V 1.3.0
*/

int counter = 0; // Counter used for timing

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
  while (counter < 3000) // Run code for 30 Seconds
  {

    int rndm = random(0, 3); // Generate number for level

    if (rndm == 0) // Top floor
    {
      digitalWrite(A0, LOW);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, HIGH);
    }

    if (rndm == 1) // Middle floor
    {
      digitalWrite(A0, HIGH);
      digitalWrite(A1, LOW);
      digitalWrite(A2, HIGH);
    }

    if (rndm == 2) // Bottom floor
    {
      digitalWrite(A0, HIGH);
      digitalWrite(A1, HIGH);
      digitalWrite(A2, LOW);
    }

    int rnd = random(5, 14); // Generate number for section

    digitalWrite(rnd, HIGH); // Turn it on

    delay(10); // Timing
    
    digitalWrite(rnd, LOW); // Reset interactions
    digitalWrite(rndm,LOW); // Reset interactions
    
    counter++; // Add timing to the counter
  }

}
