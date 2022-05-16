/* This is my Section 3 - Input/Output
 * Assignment 2 - Push My Buttons 2
 * Made by Anthony Tedja
 * Arduino Duemilanove or Diecimila, ATmega328 on Something that cant be COM1
 * Must make a LED game unsing 6 LED's
 * V1
 */

int led[]={3,5,6,9,10,11,11,10,9,6,5,3};
int a; // Current LED
int button;
int pin=1;
int b=3;

void setup() 
{
pinMode(8,INPUT); // Button
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}

void loop()
{
for(int ledflash=0; ledflash<=11; ledflash++)
{
a=led[ledflash];
digitalWrite(a,HIGH);
button=digitalRead(8);
delay(100);
digitalWrite(a,LOW);

if(button==HIGH)
{
if(a==3)
{
for(pin=1;pin<7;pin++)
{
for(b=3;b<=11;b++)
{
digitalWrite(b,HIGH);
}
delay(250);

for(int b=3;b<=11;b++)
{
digitalWrite(b,LOW);
}
delay(250);
}
}

else
{
for(pin=1;pin<8;pin++)
{
digitalWrite(a,HIGH);
delay(250);
digitalWrite(a,LOW);
delay(250);
}
}
delay(250);
}
}
}
