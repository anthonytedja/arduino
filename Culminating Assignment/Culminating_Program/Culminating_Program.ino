/* 
 * Culminating Assignment
 * Made by Anthony Tedja 
 * Arduino Duemilanove or Diecimila, ATmega328 on Something that cant be COM1
 * Must make robot go through the track with sensors
 * V 1.6.0
 */

int counter =0; // Counter for start
int timer = 0; // Counter for the timing
int Lsensor = A1; // Left Sensor
int Rsensor = A2; // Right Sensor
int LB = 7; // Left Backwards
int LF = 8; // Left Forwards
int RF = 9; // Right Forwards
int RB = 10; // Right Backwards
int button = 12; // Start Button
int Lmid; // Left Middle Value
int Rmid; // Right Middle Value
int Lvalue; // Variable for left sensor reading
int Rvalue; // Variable for right sensor reading
int timing = 200; // Delay time

void setup() // Setup code
{
  
  Serial.begin(9600); // Open communication port and set the baud rate to 9600
  pinMode(LB, OUTPUT); // Left Backwards
  pinMode(LF, OUTPUT); // Left Forwards
  pinMode(RF, OUTPUT); // Right Forwards
  pinMode(RB, OUTPUT); // Right Backwards
  pinMode(button, INPUT); // Button for start
  pinMode(Lsensor, INPUT); // Left Sensor
  pinMode(Rsensor, INPUT); // Rigth Sensor
  
}

void forward() // Subroutine for going forwards
{
  
  digitalWrite(LB, LOW); // Left Backwards
  digitalWrite(LF, HIGH); // Left Forwards
  delay(500);
  digitalWrite(RF, HIGH); // Right Forwards
  digitalWrite(RB, LOW); // Right Backwards
  delay(200);
}

void pause() // Subroutine to stop moving
{
  
  digitalWrite(LB, LOW); // Left Backwards
  digitalWrite(LF, LOW); // Left Forwards
  digitalWrite(RF, LOW); // Right Forwards
  digitalWrite(RB, LOW); // Right Backwards
  
}

void left() // Subroutine to turn left
{
  
  digitalWrite(LB, LOW); // Left Backwards
  digitalWrite(LF, LOW); // Left Forwards
  digitalWrite(RF, HIGH); // Right Forwards
  digitalWrite(RB, LOW); // Right Backwards
  
}

void right() // Subroutine to turn right
{
  
  digitalWrite(LB, LOW); // Left Backwards
  digitalWrite(LF, HIGH); // Left Forwards
  digitalWrite(RF, LOW); // Right Forwards
  digitalWrite(RB, LOW); // Right Backwards
  
}

void loop() // Main loop
{
  
  timer ++; // Timer for pauses

  if(digitalRead(12) == HIGH) // Once you press the button
  {
    
    counter ++; // Add to the counter
    
  }

  if(counter > 0) // After you press the button
  {

    Lvalue = analogRead(Lsensor); // Read the sensor and save the value into Lvalue
    Serial.println(Lvalue);
    Rvalue = analogRead(Rsensor); // Read the sensor and save the value into Rvalue
    Serial.println(Rvalue);
    
    if(Lvalue >= 1010 and Rvalue <= 600) // If the sensors read both white
    {
      
      forward(); // Go to the forwards subroutine
      
    }

    else if (Lvalue < 1010 and Rvalue < 600) // If only the left sensor reads black
    {
      
      left(); // Go to the left subroutine
      delay(timing);
      
    }

    else if (Lvalue > 1010 and Rvalue > 600) // If only the right sensor reads black
    {
      
      right(); // Go to the right subroutine
      delay(timing);
      
    }

    else if (Lvalue < 1010 and Rvalue < 600) // When the sensors will read both black
    {

      if(timer < 5000) // When the robot reaches the end
      {

        timer = 0; // Reset the timer
        
        pause(); // Go to the pause subroutine
        delay(100000000);
        
      }

      else // When the robot reaches a black line
      {
        
        timer = 0; // Reset the timer
        
        pause(); // Go to the pause subroutine
        delay(2500);

        forward(); // Move forwards a bit
     
      }
      
    }

  }
  
}
