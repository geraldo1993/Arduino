// Geraldo Braho

int buzzer=8;// Set the digital IO pin to control the buzzer
void setup()
{
pinMode(buzzer,OUTPUT);// Set the digital IO mode, OUTPUT for the out
}
void loop()
{
unsigned char i,j;// Define the variable
while(1)
{
for(i=0;i<80;i++)// out of a frequency of sound
{
digitalWrite(buzzer,HIGH);// Make a sound
delay(1);// Delay 1ms
digitalWrite(buzzer,LOW);// No sound
delay(1);// Delay ms
}
for(i=0;i<100;i++)// The sound of another frequency
{
digitalWrite(buzzer,HIGH);// Make a sound
delay(2);// Delay 2ms
digitalWrite(buzzer,LOW);// No sound
delay(2);// Delay 2ms
}
}
}
