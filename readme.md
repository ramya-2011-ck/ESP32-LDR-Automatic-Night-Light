# ESP32 LDR Automatic Night Light 🌙

An automatic night light system using an ESP32 and an LDR (Light Dependent Resistor). The system monitors the surrounding light level and automatically switches an LED ON or OFF based on a predefined threshold.

## Components Required

- ESP32 Development Board
- LDR (Photoresistor)
- LED
- 220Ω resistor
- Connecting wires

## GPIO Connections

| Component | ESP32 Pin |
|---|---|
| LDR Analog Output (AO) | GPIO 34 |
| LED | GPIO 25 |
| LDR VCC | 3.3V |
| LDR GND | GND |
| LED Cathode (−) | GND through resistor |

## Working Principle

1. The LDR detects the surrounding illumination.
2. Its resistance changes according to the amount of light falling on it.
3. The ESP32 reads the sensor's analog voltage using `analogRead()`.
4. The ADC converts the voltage into a digital value ranging from 0 to 4095.
5. The ESP32 compares the sensor reading with a predefined threshold of 2000.
6. If the reading is below 2000, the LED turns ON.
7. Otherwise, the LED turns OFF.

## Code Logic

```text
       LDR Sensor
           |
           ↓
     analogRead()
           |
           ↓
    ADC Value (0–4095)
           |
           ↓
   Compare with 2000
           |
       +---+---+
       |       |
     < 2000   >= 2000
       |       |
       ↓       ↓
    LED ON   LED OFF
```

## Serial Monitor Output

The LDR readings are displayed using serial communication at a baud rate of 115200.

Example:

```text
LDR: 1686
LDR: 1690
LDR: 1702
```

## Threshold Value

The threshold is set to `2000` in the program.

It can be adjusted according to the sensor readings observed under different lighting conditions. The ON/OFF behavior depends on the sensor's analog reading.

## Tools and Technologies Used

- ESP32
- Arduino C/C++
- Wokwi Simulator
- Serial Monitor
- Git and GitHub

## Simulation

The project was developed and tested using the Wokwi ESP32 simulator.

## Learning Outcomes

- Understanding LDR sensors and their working principle.
- Reading analog sensor values using `analogRead()`.
- Understanding ADC values in ESP32.
- Using conditional statements (`if-else`) for decision-making.
- Controlling an LED using GPIO pins.
- Displaying sensor readings using serial communication.

## Simulation
The project was developed and tested using the Wokwi ESP32 simulator.

## Circuit

![ESP32 Traffic Signal](Automatic_light.png)

