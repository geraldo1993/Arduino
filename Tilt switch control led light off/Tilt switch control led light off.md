## Example 13 - Tilt switch

Tilt switch control led light off

Experimental device
1. Ball switch: 1 Led light:
2. 1 220Ω resistor: 1 pcs
3. Colorful breadboard experiment jumper: several
4. 2, Experimental connection

 Follow the Arduino tutorial to connect the control board, expansion board, breadboard, and the download cable. Then connect the led lights to the digital 8-pin, ball switch to the analog 5-pin.
3.The principle of the experiment when the switch is lower than the horizontal position of the tilt, switch through, analog port voltage of about 5V (digital binary for 1023), light led lights. When the other end is below the horizontal position tilt, the switch stops, the analog port voltage value is about 0V (digital binary is expressed as 0), extinguishes the led light. In the program, whether the analog port voltage value is greater than about 2.5V (digital hexadecimal representation of 512), you can know whether the tilt switch to find out.4、
code

The program code is as follows：

```c
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
```

After the program is downloaded to the experimental board, we can tilt the board to observe the status of the led lights. When the gold side is lower than the horizontal position of the tilt, switch find through, light led lights; when the silver end is lower than the horizontal position tilt, switch off, simulation
The mouth voltage is about 0V (digital binary is expressed as 0), off the led lights.
Master the program, we can follow their own ideas experiment, you can control other devices such as buzzers, etc.
