# Arduino
## Arduino study notes

### Arduino study notes  - what is arduino?

To understand arduino first to understand what is the microcontroller, arduino platform is the basis of AVR instruction set of single-chip.

### 1.What is a single chip? Is it different from a personal computer?

A computer that can work has a number of parts: a central processing unit CPU (for operation, control), a random access memory (data storage), a memory ROM (program memory), an input / output device I / O Line mouth, parallel output, etc.). On the personal computer (PC) these parts are divided into a number of chips, installed in a known as the motherboard printed circuit board. In the microcontroller, these parts are all done in an integrated circuit chip, so called single (single chip) machine, and some of the microcontroller in addition to the above part, but also integrated other parts such as simulation Digital / digital conversion (A / D) and digital / analog conversion (D / A) and so on.

### 2.What is the use of single-chip?

The actual work is not any need for computer occasions require a high performance of the computer, a computer to control the temperature of the refrigerator to use the Core Duo processor? The application of the key is to see if it is enough, whether there is a good cost performance. If a refrigerator need to deal with the temperature control of the Core, then the price is astronomical.SCM is usually used for industrial production control, life and procedures and control related (such as: keyboard, refrigerator, intelligent air conditioning, etc.) occasions.The following figure is an Atmega328P-PU microcontroller, based on the AVR instruction set 8-bit processor, frequency 20MHz, memory space 32KB.

#### What is Arduino?
Arduino is a set of tools that can be used to sense and control the real world of physics. It consists of a single-chip and open source hardware platform, and a set of development environment for the Arduino board programming.
Arduino can be used to develop interactive products, such as it can read a lot of switches and sensor signals, and can control a wide range of electric lights, motors and other physical equipment. Arduino project can be a separate, can also run and your computer running the program (such as: Flash, Processing, MaxMSP) to communicate. Arduino board you can choose your own manual assembly or purchase has been assembled; Arduino open source IDE can be downloaded free of charge.
Arduino project can be a separate, can also run and your computer running the program (such as: Flash, Processing, MaxMSP) to communicate. Arduino board you can choose your own manual assembly or purchase has been assembled; Arduino open source IDE can be downloaded free of charge.

Arduino's programming language is like a connection to a physical-like computing platform, which is based on a multimedia-oriented programming environment.

#### Why to use Arduino?

There are a lot of single-chip and single-chip platform are suitable for use as an interactive system design. For example: Parallax Basic Stamp, Netmedia's BX-24, Phidgets, MIT's Handyboard and others, etc. provide similar functionality. All of these tools, you do not need to care about the cumbersome details of microcontroller programming, provided to you is a set of easy to use tool kits. Arduino also simplifies the process of working with the microcontroller, but compared with other systems Arduino in many places more superiority, especially for teachers, students and some amateurs to use:

- Cheap - Arduino board is quite cheap compared to other platforms. The cheapest Arduino version can be made by hand.

- Cross-platform - Arduino software can run on Windows, Macintosh OSX, and Linux operating systems. Most other microcontroller systems can only run on Windows.

- Simple programming environment - beginners can easily learn to use the Arduino programming environment, while it can provide advanced users with advanced applications. For the teachers, it is generally easy to use the Processing programming environment, so if students learn the use of the Processing environment, then they use the Arduino development environment will feel very familiar with the time.

- Software is open source and scalable - Arduino software is open source and can be extended for experienced programmers. Arduino programming language can be extended through the C ++ library. If someone wants to understand the technical details, you can skip the Arduino language and use the AVR C programming language (because the Arduino language is actually based on AVR C). Similarly, if you need to, you can also add AVR-C code directly to your Arduino program.

- Hardware open source and scalable - Arduino board based on Atmel's ATMEGA8 and ATMEGA168 / 328 microcontrollers. Arduino is based on the Creative Commons license agreement, so experienced circuit designers can design their own modules according to their needs, can be extended or improved. Even for some relatively no experience of the user, you can also create a test board to understand how Arduino work, save money and save trouble.
Arduino based on the AVR platform, the AVR library for the second compilation of the package, the port are packaged, the register, the address pointer and the like do not control. Greatly reducing the difficulty of software development, suitable for non-professional enthusiasts use. Advantages and disadvantages of coexistence, because it is the second compilation of the package, the code is not as good as the use of AVR code to prepare concise, code execution efficiency and code size are weaker than AVR direct compiler. performance:
Digital I / O Digital Input / Output Port 0-13.
Analog I / O Analog Input / Output Port 0-5.
Support ICSP download, support TX / RX.
Input voltage: USB interface power supply or 5V-12V external power supply.
Output voltage: 3.3V 5V DC output support.
Processor: Atmel Atmega168 328 processor, because of its many supporters, the company has developed 32-bit MCU platform to support arduino.
VIN port: VIN is an abbreviation for input voltage, indicating an input port with an external power supply.

AREF: Reference voltage for the analog inputs. Use the analogReference () command to call.

ICSP: also known as the ISP (In System Programmer), is an online instant burn, the current relatively new chips are supported by this burning mode, including we often heard of the 8051 series of chips, are also slowly adopted This simple way of burning. We all know that the traditional way of burning, are will be burned chip, pulled up from the circuit board, and some die on the circuit board chip, have to first chip welding down to burn. In order to solve this problem, invented the ICSP online instant burning mode. Only need to prepare a R232 line (connected to the burner), and a connection between the burner and burn the chip pin connection can be. Power supply + 5V, GND, two are responsible for transmitting the burning information of the pin, plus a burning voltage pin, so you can burn.

View the serial data via the Arduino compiler
The simplest example:


```c

void setup()
{
  Serial.begin(9600); // Open the serial port and set the baud rate to 9600 bps
}
void loop()
{
      int val;
      val=analogRead(5);// The sensor is connected to the analog port 5，Numbers are variable according to their needs     
 Serial.println(val,DEC);// Sends a string from the serial port and wraps it      
delay(100);
}

```
If the circuit is installed correctly, follow the example code to run, upload, and then click on the compiler's Serial Monitor button, you can see from the code definition of the input (here is the analog port 5) to obtain the data.

Arduino language is built on the basis of C / C + +, in fact, is the basis of the C language, Arduino language only AVR microcontroller (micro-controller) related to some of the parameters are set function, without us to understand his bottom, So we do not understand the AVR microcontroller (microcontroller) friends can easily get started.
In the Arduino DIYER contact with this time, found that some friends on the Arduino language is still relatively difficult to start, then here I simply comment on the Arduino language (I also half a pot of water, wrong place also please correct me).

/************* Basic C language *************/

### Keywords:

- [if](https://www.arduino.cc/en/Reference/If)
- [if else](https://www.arduino.cc/en/Reference/Else)
- [for](https://www.arduino.cc/en/Reference/For)
- [switch case](https://www.arduino.cc/en/Reference/SwitchCase)
- [while](https://www.arduino.cc/en/Reference/While)
- [do while](https://www.arduino.cc/en/Reference/DoWhile)
- [break](https://www.arduino.cc/en/Reference/Break)
- [continue](https://www.arduino.cc/en/Reference/Continue)
- [return](https://www.arduino.cc/en/Reference/Return)
- [go to](https://www.arduino.cc/en/Reference/Goto)

### Syntax symbol:

- [{}](https://www.arduino.cc/en/Reference/Braces)
- [//](https://www.arduino.cc/en/Reference/Comments)
- [/* */](https://www.arduino.cc/en/Reference/Comments)


### Operator:

-  =
-  +
-  -
-  *
-  /
-  %
- [==](https://www.arduino.cc/en/Reference/If)
- [=!](https://www.arduino.cc/en/Reference/If)
- [<=](https://www.arduino.cc/en/Reference/If)
- [=>](https://www.arduino.cc/en/Reference/If)
- [&&](https://www.arduino.cc/en/Reference/Boolean)
- [||](https://www.arduino.cc/en/Reference/Boolean)
- [!](https://www.arduino.cc/en/Reference/Boolean)
- [++](https://www.arduino.cc/en/Reference/Increment)
- [--](https://www.arduino.cc/en/Reference/Increment)
