/* This is my Section 3 - Input/Output
 * Assignment 3 - Random LED Game
 * Made by Anthony Tedja
 * Arduino Duemilanove or Diecimila, ATmega328 on Something that cant be COM1
 * Must make a game with random LED's 
 * V5
 */

int led[]={6,7,8,9,10,11};
int rndm=11; // Random Variable
int button; // Button Read
int blnk=1; // To light LED's 
int win=0; // When you consecutively win 
int store=0; //   To remember
int circle; // To loop the LED's
int stor=0;

void setup() 
{

pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,INPUT); // Button
randomSeed(analogRead(5));
}

void loop()
{
while(win<2)
{
rndm=random(6,11);
digitalWrite(rndm,HIGH);
for(int circle=0;circle<250;circle++)
{
button=digitalRead(12);
if(button==HIGH)
{
break;
}
delay(1);
}

if(button==HIGH)
{
if((rndm==6)||(rndm==7))
{
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
delay(250);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
delay(250);
if(store==1)
{
win++;
}
else
{
win=0;
}
store=1; // Yellow LED's
}

if((rndm==8)||(rndm==9))
{
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
delay(250);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
delay(250);
if(store==2)
{
win++;
}
else
{
win=0;
}
store=2; // Green LED's
}

if((rndm==10)||(rndm==11))
{
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
delay(250);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
delay(250);
if(store==3)
{
win++;
}
else
{
win=0;
}
store=3; // Red LED's
}
}

button=digitalRead(12);
while(button==HIGH)
{
rndm=random(6,11);
digitalWrite(rndm,HIGH);
delay(250);
digitalWrite(rndm,LOW);
delay(250);
button=digitalRead(12);
}

digitalWrite(rndm,LOW);
delay(250);


if(win==2)
{
for(blnk=1;blnk<7;blnk++)
{
for(stor=0;stor<6;stor++)
{
digitalWrite(led[stor],HIGH);
}
delay(250);
for(stor=0;stor<6;stor++)
{
digitalWrite(led[stor],LOW);
}
delay(250);
}
}
}
store = 0;
win = 0;
}
