// Geraldo Braho 


int potpin=0;// Define analog interface 0 Connect the photoresistor
int ledpin=11;// Define the digital interface 11 to output the PWM to adjust the LED brightness
int val=0;// Define the variable val
void setup()
{
pinMode(ledpin,OUTPUT);// Define the digital interface 11 for the output
Serial.begin(9600);// Set the baud rate to 9600
}
void loop()
{
val=analogRead(potpin);// Read the analog value of the sensor and assign it to val
Serial.println(val);// Display val variable values
analogWrite(ledpin,val);// Turn on the LED and set the brightness (PWM output maximum 255)
delay(10);// Delay 0.01 seconds
}
