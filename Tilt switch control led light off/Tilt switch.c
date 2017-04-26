//Geraldo Braho

void setup()
{
pinMode(8,OUTPUT);// Set the number 8 pin to the output mode
}
void loop()
{
int i;// Define hair volume i
while(1)
{
i=analogRead(5);// Read the analog 5-port voltage value
if(i>200)// If greater than 512 (2.5V)
{
digitalWrite(8,HIGH);// Lighting led lights
}
else// otherwise
{
digitalWrite(8,LOW);// Off the led lights
}
}
}
