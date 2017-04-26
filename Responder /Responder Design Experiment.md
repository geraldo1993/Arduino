# Responder Design Experiment
This experiment is to expand the experiment of the above key control light into three buttons corresponding to three small lights, occupying 6 digital I / O interface.
Principle here is not to say with the above experiment, the following attached to the schematic diagram and physical connection diagram。

<img src="img/responder.png"

<img src="img/responder1.png"


Reference source code:
```c

int redled=10;
int yellowled=9;
int greenled=8;
int redpin=7;
int yellowpin=6;
int greenpin=5;
int red;
int yellow;
int green;
void setup()
{
pinMode(redled,OUTPUT);
pinMode(yellowled,OUTPUT);
pinMode(greenled,OUTPUT);
pinMode(redpin,INPUT);
pinMode(yellowpin,INPUT);
pinMode(greenpin,INPUT);
}
void loop()
{
red=digitalRead(redpin);
if(red==LOW)
{ digitalWrite(redled,LOW);}
else
{ digitalWrite(redled,HIGH);}
yellow=digitalRead(yellowpin);
if(yellow==LOW)
{ digitalWrite(yellowled,LOW);}
else
{ digitalWrite(yellowled,HIGH);}
green=digitalRead(greenpin);
if(green==LOW)
{ digitalWrite(greenled,LOW);}
else
{ digitalWrite(greenled,HIGH);}
}

````

This procedure and the previous program in addition to the interface is no exception, so do not do the program annotation analysis.
Download the program, our own production of simple answer device to complete.
