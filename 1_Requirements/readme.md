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
