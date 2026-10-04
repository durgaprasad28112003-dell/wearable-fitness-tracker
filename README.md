# Wearable Fitness Tracker - Virtual Biometric Data Pipeline

## Overview

This project is a simple virtual wearable fitness tracker developed using C++ and Linux system programming concepts.

The system simulates biometric sensor readings such as:

- Heart Rate
- SpO2
- Body Temperature
- Steps

The generated data is processed, checked against predefined limits, displayed on the terminal, and stored in a log file.

## Features

- Virtual biometric data generation
- Heart rate monitoring
- SpO2 monitoring
- Temperature monitoring
- Step tracking
- Normal/abnormal status detection
- File-based logging
- Linux process creation using `fork()`
- Parent and child process identification
- Makefile-based compilation

## Technologies Used

- C++
- Linux
- Linux system calls
- Git
- GitHub
- Makefile

## Project Structure

```text
wearable-fitness-tracker/
├── include/
│   ├── biometric_data.h
│   ├── logger.h
│   └── sensor.h
├── src/
│   ├── main.cpp
│   ├── sensor.cpp
│   └── logger.cpp
├── logs/
│   └── fitness_log.txt
├── data/
├── docs/
├── Makefile
└── README.md
