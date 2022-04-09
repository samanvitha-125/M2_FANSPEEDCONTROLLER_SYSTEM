# Temperature Based Fan Speed Controller

## DESCRIPTION
* This project is a standalone automatic fan speed controller that controls the speed of an electric fan according to our requirement.
* Use of embedded technology makes this closed loop feedback control system efficient and reliable.
* Microcontroller (ATMega8 / 168 / 328) allows dynamic and faster control. Liquid crystal display (LCD) makes the system user-friendly. 
* The sensed temperature and fan speed level values are simultaneously displayed on the LCD panel.
* It is very compact using few components and can be implemented for several applications including air-conditioners, water heaters, snow-melters, ovens, heat-exchangers, mixers, furnaces, incubators, thermal baths and veterinary operating tables. ARDUINO micro controller is the heart of the circuit as it controls all the functions.
* The temperature sensor LM35 senses the temperature and converts it into an electrical (analog) signal, which is applied to the microcontroller. 
* The sensed and set values of the temperature are displayed on the 16x2-line LCD. 
* The micro controller drives Transistor to control the fan speed. This project uses regulated 12V, 2A power supply. 
* This project is useful in process industries for maintenance and controlling of Boilers temperature.

# Requirements

## High Level Requirements

| ID | Description |	STATUS |
| --- | ----------- | ------ |
| HLR1 |	Fan is ON |	Implemented |
| HLR2 | Fan is OFF	| Implemented |
| HLR3 |The LCD panel | displays	Implemented |

## Low Level Requirements

| ID |	Description	 | STATUS |
| ---- | ---------- | ------ |
| LLR1	 | It Detects the temperature of the room and send that information	| Implemented |
| LLR2 |	Arduino carries out the contrast of current temperature and set temperature |	Implemented |
| LLR3	| The output obtained from the operation is given through the o/p port of an Arduino to the LCD display that connected with the board |	Implemented |
| LLR4 | This generates the PWM pulses from the board which is further given to the driver circuit to get the expected output to the fan |	Implemented |

## SWOT

### Strengths

- This project can be used in Home.
- This project can be used in Industry.
- This will help in saving the energy / electricity.
- To monitor the environments that is not comfortable, or possible, for humans to monitor, especially for extended periods of time.
- Prevents waste of energy when it’s not hot enough for a fan to be needed.
- To assist people who are disabled to adjust the fan speed automatically.

### Weaknesses

- It can only be maintained by technical person. Thus, it becomes difficult to be maintained.
- Due to temperature variation, after sometimes its efficiency may decrease.

### Opportunities

- It can be implemented by Using basic microcontollers and sensors.
- The cost will not be two high

### Threats

- Time taken to implement this project will be high
- The requirement of Man power to implement this project will be high.

## 4w's & 1H

### WHO

* It can be used in both the home as well as Industry purpose.

### WHAT

* It helps in saving the energy and electricity.

### WHEN

* It Prevents waste of energy when it’s not hot enough for a fan to be needed. To assist people who are disabled to adjust the fan speed automatically.

### HOW

* The aim of this project is to design a temperature controlled fan using Arduino, in which the fan is automatically turned ON or OFF according to the temperature

## Functions of the components used in the project

### Relay
* A relay is an electrically operated switch. It consists of a set of input terminals for a single or multiple control signals, and a set of operating contact terminals. The switch may have any number of contacts in multiple contact forms, such as make contacts, break contacts

### Transistor
* A transistor is a semiconductor device used to amplify or switch electrical signals and power. The transistor is one of the basic building blocks of modern electronics. It is composed of semiconductor material, usually with at least three terminals for connection to an electronic circuit.

### Temperature Sensors

* A temperature sensor is a device that is designed to measure the degree of hotness or coolness in an object. The working of a temperature meter depends upon the voltage across the diode. The temperature change is directly proportional to the diode’s resistance. The cooler the temperature, lesser will be the resistance, and vice-versa.

### Liquid Crystal Display

* The LCD is a dot matrix liquid crystal display that displays alphanumeric characters and symbols. 16X2 LCD digital display has been used in the system to show the room temperature. Liquid Crystal Display screen is an electronic display module and find a wide range of applications. A 16x2 LCD display is very basic module and is very commonly used in various devices and circuits. These modules are preferred over sevensegments and other multi segment LEDs. The reasons being: LCDs are economical; easily programmable; have no limitation of displaying special & evencustom characters (unlike in seven segments), animations and so on.

### Arduino

* The Arduino UNO is a standard board of Arduino. Here UNO means 'one' in Italian. It was named as UNO to label the first release of Arduino Software. It was also the first USB board released by Arduino. It is considered as the powerful board used in various projects. Arduino.cc developed the Arduino UNO board.Arduino UNO is based on an ATmega328P microcontroller. It is easy to use compared to other boards, such as the Arduino Mega board, etc. The board consists of digital and analog Input/Output pins (I/O), shields, and other circuits.The Arduino UNO includes 6 analog pin inputs, 14 digital pins, a USB connector, a power jack, and an ICSP (In-Circuit Serial Programming) header. It is programmed based on IDE, which stands for Integrated Development Environment.It can run on both online and offline platforms.

## Application:

* Temperature based fan speed controller is useful for cooling the processor in the laptops and personal computers “more efficiently”. Generally fan in laptop comes with only two or three possible speeds. So it results in more power consumption.
* The fan designed in this project, has different values of speed according to temperature change. This can be also used in small scale industries for cooling the electrical/mechanical equipment. The whole circuit except motor and fan can be manufactured on a single PCB, and it can be used for temperature based control operations
