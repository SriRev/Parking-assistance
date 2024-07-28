## Parking Assistance System

## Overview

This project implements a simple parking assistance system using an Arduino board. The system uses an ultrasonic sensor to measure the distance to obstacles and provides visual and audio feedback to assist with parking.

## Features

- Real-time distance measurement using an ultrasonic sensor
- Visual feedback through three LEDs (green, yellow, red)
- Audio feedback using a buzzer
- Adjustable distance thresholds for different alert levels

## Hardware Requirements

- Arduino board (e.g., Arduino Uno)
- HC-SR04 Ultrasonic Sensor
- 3 LEDs (Green, Yellow, Red)
- Buzzer
- Resistors for LEDs (typically 220Ω)
- Breadboard and jumper wires

## Pin Configuration

- Ultrasonic Sensor Trigger Pin: 9
- Ultrasonic Sensor Echo Pin: 10
- Green LED: 5
- Yellow LED: 6
- Red LED: 7
- Buzzer: 8

## Setup

1. Connect the components to the Arduino board as per the pin configuration.
2. Upload the provided code to your Arduino board.
3. Position the ultrasonic sensor at the rear of your vehicle, facing the potential obstacles.

## Operation

- The system continuously measures the distance to the nearest obstacle.
- LEDs provide visual feedback:
  - Green: Safe distance (> 100 cm)
  - Yellow: Caution (50-100 cm)
  - Red: Danger (< 50 cm)
- The buzzer provides audio feedback:
  - No sound: Safe distance
  - Intermittent beeps: Caution
  - Continuous tone: Danger

## Customization

You can adjust the `safeDistance`, `cautionDistance`, and `dangerDistance` variables in the code to change the alert thresholds according to your needs.

## Serial Output

The measured distance is continuously output to the Serial Monitor, which can be useful for debugging or logging purposes.

## Future Improvements

- Add a display for precise distance readout
- Implement multiple sensors for better coverage
- Create a mobile app interface for more detailed feedback
- Add voice alerts for different distance ranges
