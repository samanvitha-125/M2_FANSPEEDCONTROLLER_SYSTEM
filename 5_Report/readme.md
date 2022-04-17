# REQUIREMENTS

# Water Level Control System

## Introduction

Now a days everyone is looking for automation and advancements in all sectors. The Automatic Water Filling System is capable to start and stop the water pump to fill the overhead water tank according to the water level in that tank. 
Usually, we turn the water pump "on" to fill the tank and forgot to turn it "off" at that moment water overflows from that tank which leads to a lot of wastage of water and electricity.
In this project, the sensor will sense the level of water in the tank, Based on that the controller will set the water pump to turn "on" and "off" when required. The Heater will generate the heat and an LCD will show requested the temperature. In our project we have used an ATmega328 microcontroller along with a temperature sensor, Pushbutton, Heat generator, LED and LCD, etc.

## Features

![Features](https://github.com/vinayvanka/M2_EmbSys/blob/main/Project/1_Requirements/features.jpeg)

## SWOT ANALYSIS

![Swot analysis](https://github.com/vinayvanka/M2_EmbSys/blob/main/Project/1_Requirements/SWOT%20Analysis.jpeg)

## 5W's and 1H

![5W's and 1H](https://github.com/vinayvanka/M2_EmbSys/blob/main/Project/1_Requirements/5W1H.jpeg)


## High-Level Requirements
|HLR|     Description                      |
|------|  --------------                   |
|HLR_1|   It should sense water level      |
|HLR_2|   It should control the water pump |
|HLR_3|   It should have automatic and manual conmtrol|
|HLR_4|   It should display status         |



## Low-Level Requirement
|ID|Low Level Requirement for HLR_1 | |ID|Low Level Requirement for HLR_2|
|------|  ------------|--|--|--|
|LLR_1|It may have Float Switch | |LLR_1|It should have relay switch|
|LLR_2|It may have Capacitive Sensor| |LLR_2|It should have water pump|


|ID|Low Level Requirement for HLR_3 | |ID|Low Level Requirement for HLR_4|
|------|  ------------|--|--|--|
|LLR_1|It should have manual Switch| |LLR_1|It should read sensor data|
|LLR_2|It should callibrate waterlevel with logic| |LLR_2|It should have LCD display|

# Architecture 

![block diagram](https://github.com/vinayvanka/M2_EmbSys/blob/main/Project/2_Architectures/Water_level_block_diagram.png)


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

![Flow_Diagram](https://github.com/vinayvanka/M2_EmbSys/blob/main/Project/2_Architectures/water_flow.png)

# BEHAVIORAL DIAGRAM

![Bhehavioral diagram](https://github.com/vinayvanka/M2_EmbSys/blob/main/Project/2_Architectures/behavioral.png)

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
