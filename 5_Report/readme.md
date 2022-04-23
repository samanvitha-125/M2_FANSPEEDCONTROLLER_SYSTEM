# REPORT

# REQUIREMENTS

# Water Level Control System

## Introduction

* The Automatic Water Filling System is capable to start and stop the water pump to fill the overhead water tank according to the water level in that tank. 
* Usually, we turn the water pump "on" to fill the tank and forgot to turn it "off" at that moment water overflows from that tank which leads to a lot of wastage of water and electricity.
* In this project, the sensor will sense the level of water in the tank, Based on that the controller will set the water pump to turn "on" and "off" when required. 
* The Heater will generate the heat and an LCD will show requested the temperature.
* The Project Consists of an ATmega328 microcontroller along with a temperature sensor, Pushbutton, Heat generator, LED and LCD, etc.

## Features

![image](https://user-images.githubusercontent.com/62429376/164894783-dee5b958-d570-45a0-b124-204cf07e1b4d.png)


## SWOT ANALYSIS

![image](https://user-images.githubusercontent.com/62429376/164894788-01860ee4-f5c7-403b-9899-4f14dff6181d.png)


## 5W's and 1H

![image](https://user-images.githubusercontent.com/62429376/164894838-86140adf-6384-41a0-ab03-ddb16a5b5b15.png)


## High-Level Requirements

| HLR |     Description                      |
| ---- |  --------------                   |
|HLR_1|   It should sense water level      |
|HLR_2|   It should control the water pump |
|HLR_3|   It should have automatic and manual conmtrol|
|HLR_4|   It should display status         |

## Low-Level Requirements

| ID | Low Level Requirement for HLR_1 | ID | Low Level Requirement for HLR_2 |
| -- | ------------------------------- | -- | ------------------------------- |
| LLR_1 | It may have Float Switch  | LLR_1 | It should have relay switch |
| LLR_2 | It may have Capacitive Sensor | LLR_2 | It should have water pump |


| ID | Low Level Requirement for HLR_3  | ID |Low Level Requirement for HLR_4|
| -----|  ------------ |--|--|
|LLR_1|It should have manual Switch |LLR_1|It should read sensor data|
|LLR_2|It should callibrate waterlevel with logic |LLR_2|It should have LCD display|

## Best Methods To Be Followed

* Used functions to decrease dependency on main function
* Used Functions to accept the inputs from environmental conditions and store the values which helped in creating easy design of the system.
* comments have been placed only wherever necessary to avoid confusions
* Created header file so that the fuctions can be used else where ever required without any difficulty

# Architecture 

![image](https://user-images.githubusercontent.com/62429376/164894638-b505b829-e768-4e33-91c5-7e8ca0c827fd.png)


## LCD Display

* This will display the water level in the tank and alerts like low water level indication, a tank full, etc.

## Power

* Electric power supply to the microcontroller and Relay to drive the sensor and water pump.

## MicroController

* It is the heart of the system where it controlls the sensors to fetch water level, display the status and to control the water pump.

## Water Pump (Actuator)

* To pump water from the ground and fill the water in the tank.

## Water level sensor

* This will sense the water level in the tank and send it to the microcontroller.

## LED Indication

* This will indicate that the water pump is turned on or off.


## Manual ON-OFF Switch

* Manual switch will allow the user to control the water pump from the user end.

## Automatic/manual control switch

* This is a single toggle switch that toggles between automatic and manual mode.

# FLOW DIAGRAM

![image](https://user-images.githubusercontent.com/62429376/164894687-f6b14252-2800-48f2-a423-e25ff494f214.png)


# BEHAVIORAL DIAGRAM

![image](https://user-images.githubusercontent.com/62429376/164894697-0684afbf-05d4-4eb8-91a7-e26b0ea984c6.png)

## STRUCTURAL DIAGRAM
![image](https://user-images.githubusercontent.com/62429376/164894600-d285ddea-3d23-49c3-a17e-5ecd5986cb70.png)

##  Here are the below steps to run the code

 * For Running and Building the code
   * Type make run in terminal
 * For Running the Building tests
   * Type make run_test in terminal
 * For static analysis
   * Type make static_analysis in terminal
 * For dynamic analysis
   * Type make dynamic_analysis in terminal
 * For code coverage
   * Type make coverage in terminal
 * For cleaning
   * Type make clean in terminal
  
  
## Usage of Pointers

## Pointers:
* The Pointer in C, is a variable that stores address of another variable.
*  A pointer can also be used to refer to another pointer function.
*   A pointer can be incremented/decremented, i.e., to point to the next/ previous memory location. The purpose of pointer is to save memory space and achieve faster execution time.
Like variables, pointers in C programming have to be declared before they can be used in your program. Pointers can be named anything you want as long as they obey C’s naming rules. A pointer declaration has the following form.

 syntax:
data_type * pointer_variable_name;

* Types of Pointers in C:
1.Null Pointer
2.Void Pointer
3.Wild pointer
4.Dangling pointer

## Usage of Preprocessor :

* The C preprocessor is a macro processor that is used automatically by the C compiler to transform your program before actual compilation. It is called a macro processor because it allows you to define macros, which are brief abbreviations for longer constructs.

*The C preprocessor provides four separate facilities that you can use as you see fit:

* Inclusion of header files. These are files of declarations that can be substituted into your program.

## Function Pointer
* In the C function pointer is used to resolve the run time-binding. 
* A function pointer is a pointer that stores the address of the function and invokes the function whenever required.
*  In C, we can use function pointers to avoid code redundancy.

## Struct

* A structure is a key word that create user defined data type in C. A structure creates a data type that can be used to group items of possibly different types into a single type.

* ‘struct’ keyword is used to create a structure. 

* A structure variable can either be declared with structure declaration or as a separate declaration like basic types.
* Structure members cannot be initialized with declaration. 

## Typedef

* typedef, which we can use to give a type a new name. Following is an example to define a term BYTE for one-byte numbers.After this type definition, the identifier BYTE can be used as an abbreviation for the type unsigned char
* Syntax: typedef data_type new_name

# Test Plan

|  Test ID | Description  | Input  | Output  | Status |
|---|---|---|---|---|
| TID_01  | Manual Mode  | Mode Switch = 1| Mode Switch = 1| PASS  |
| TID_02  | Manual OFF pump  | push button = 0| push button = 0 | PASS  |
| TID_03  | Pump OFF indication  | push button = 0 | LED = 0 | PASS  |
| TID_04  | Manual ON pump  | push button=1| push button=1 | PASS  |
| TID_05  | Pump ON indication  | push button=1 | LED = 1 | PASS  |
| TID_06  | Automatic mode | Mode Switch = 0| Mode Switch = 0  | PASS  |
| TID_07  | Automatic Pump ON | float switch 1 = 0 | PUMP = 1  | PASS  |
| TID_08  | Automatic Pump OFF | float switch 5 = 1 | PUMP = 0 | PASS  |
| TID_09  | LCD Display | float switch 1 = 0 | LOW water level | PASS  |
| TID_10  | LCD Display | float switch 1 = 1 | 20% water level | PASS  |
| TID_11  | LCD Display | float switch 2 = 1 | 40% water level | PASS  |
| TID_12  | LCD Display | float switch 3 = 1 | 60% water level | PASS  |
| TID_13  | LCD Display | float switch 4 = 1 | 80% water level | PASS  |
| TID_14  | LCD Display | float switch 5 = 1 | TANK FULL !!!   | PASS  |

# OUTPUT CIRCUIT DIAGRAM

<img width="1435" alt="Screenshot 2022-03-08 at 12 37 51 AM" src="https://user-images.githubusercontent.com/62429376/163699453-06a4b4d8-3bfa-496c-8727-2fc4f09a6950.png">

# OUTPUT VIDEO

https://user-images.githubusercontent.com/62429376/163699456-45eba547-bb59-4fe1-bb70-cd3c37a7c4b0.mp
