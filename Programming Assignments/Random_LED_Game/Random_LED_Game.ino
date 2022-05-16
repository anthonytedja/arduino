/* 
 * Bonus Assignment - Random LED Game
 * Made by Anthony Tedja
 * Arduino Duemilanove or Diecimila, ATmega328 on Something that cant be COM1
 * Must make a game with random LED's
 * 05/11/2018
 * V1.4
 */

int led[] = {6,7,8,9,10,11}; // Array for LED pins
int button; // Variable for button reading
int blnk = 1; // To light LED's
int win = 0; // Counter variable
int store = 0; // To remeber which LED was lit last
int stor = 0; // To blink LEDs at the end of the game

void setup() 
{

  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,INPUT); // Button Pin
  
  randomSeed(analogRead(5)); // For random generation
  
}

void loop()
{
  
  while(win < 2) // While you havent won yet
  {
    
    int rndm = random(6,12);
    digitalWrite(rndm,HIGH);
    
    for(int delaytime = 0;delaytime < 250;delaytime ++)
    {
      
      button = digitalRead(12);
      
      if(button == HIGH)
      {
        
        break; // Get out of loop
        
      }
      
      delay(1);
      
    }
  
    if(button == HIGH) // When you push the button
    {
      
      if((rndm == 6)||(rndm == 7)) // If its blue LEDs
      {
        
        digitalWrite(6,HIGH);
        digitalWrite(7,HIGH);
        delay(250);
        digitalWrite(6,LOW);
        digitalWrite(7,LOW);
        delay(250);
        
        if(store == 1)
        {
          
          win ++; // Win counter
          
        }
        
        else
        {
          
          win = 0; // Reset counter
          
        }
      
        store = 1; // Last LED is now blue
        
      }
    
      if((rndm == 8)||(rndm == 9)) // If its red LEDs
      {
        
        digitalWrite(8,HIGH);
        digitalWrite(9,HIGH);
        delay(250);
        digitalWrite(8,LOW);
        digitalWrite(9,LOW);
        delay(250);
        
        if(store == 2)
        {
          
          win ++; // Win counter
        
        }
        
        else
        {
          
          win = 0; // Reset counter
          
        }
        
        store = 2; // Last LED is now red
        
      }
    
      if((rndm == 10)||(rndm == 11)) // If its yellow LEDs
      {
        
        digitalWrite(10,HIGH);
        digitalWrite(11,HIGH);
        delay(250);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
        delay(250);
        
        if(store == 3)
        {
          
          win ++; // Win counter
          
        }
        
        else
        {
          
          win = 0; // Reset counter
        
        }
        
        store = 3; // Last LED is now yellow
        
      }
      
    }
  
    button = digitalRead(12); // Read the button
    
    while(button == HIGH) // When the button is being pushed
    {
      
      rndm = random(6,11);
      digitalWrite(rndm,HIGH);
      delay(250);
      digitalWrite(rndm,LOW);
      delay(250);
      button = digitalRead(12);
    
    }
  
    digitalWrite(rndm,LOW);
    delay(250);
    
    if(win == 2) // When you win the game
    {
      
      for(blnk = 1;blnk < 7;blnk ++)
      {
        
        for(stor = 0;stor < 6;stor ++)
        {
          
          digitalWrite(led[stor],HIGH);
          
        }
      
        delay(250);
      
        for(stor = 0;stor < 6;stor ++)
        { 
          
          digitalWrite(led[stor],LOW);
        
        }
      
        delay(250);
      
      }
    
    }
    
  }
  
  store = 0; // Reset interactions
  win = 0; // Reset interactions
  
}
