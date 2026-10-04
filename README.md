# Wearable Fitness Tracker - Virtual Biometric Data Pipeline

## 1. Project Overview

The Wearable Fitness Tracker - Virtual Biometric Data Pipeline is a Linux-based C++ project that simulates a wearable fitness monitoring system.

The project generates virtual biometric sensor readings, processes the data, checks the readings against predefined validation ranges, displays the results on the terminal, and stores the readings in a log file.

The project also demonstrates Linux system programming concepts such as process creation and process identification using Linux system calls.

A basic Linux character device driver source component is also included to demonstrate Linux Device Driver concepts.

---

## 2. Problem Statement

Real wearable fitness devices collect information from sensors such as heart-rate, SpO2, temperature, and activity sensors.

For learning and demonstration purposes, this project provides a software-based simulation of such a system without requiring physical biometric sensors.

The project demonstrates how sensor-like data can be generated, processed, validated, displayed, and logged in a Linux environment.

---

## 3. Objectives

The main objectives of the project are:

- Simulate biometric sensor data.
- Process biometric readings using C++.
- Validate readings using predefined ranges.
- Identify normal and abnormal readings.
- Store processed readings in a log file.
- Demonstrate Linux process creation using `fork()`.
- Display parent and child process information.
- Demonstrate basic Linux Device Driver concepts.
- Use Makefiles for project compilation.
- Maintain the project using Git and GitHub.

---

## 4. Biometric Parameters

The system processes the following parameters:

| Parameter | Unit |
|---|---|
| Heart Rate | BPM |
| SpO2 | % |
| Body Temperature | °C |
| Steps | Count |

The project uses predefined validation ranges to classify readings as `NORMAL` or `ABNORMAL`.

---

## 5. Main Features

- Virtual biometric data generation
- Heart rate monitoring
- SpO2 monitoring
- Body temperature monitoring
- Step tracking
- Normal/abnormal status detection
- Terminal-based output
- File-based logging
- Linux process creation using `fork()`
- Process identification using `getpid()`
- Parent process synchronization using `wait()`
- Basic Linux character device driver source
- Makefile-based compilation
- Git/GitHub version control

---

## 6. Technologies Used

- C++
- C
- Linux
- Linux System Calls
- Linux Device Driver concepts
- Make
- Git
- GitHub

---

## 7. Project Structure

```text
wearable-fitness-tracker/
│
├── include/
│   ├── biometric_data.h
│   ├── logger.h
│   └── sensor.h
│
├── src/
│   ├── main.cpp
│   ├── sensor.cpp
│   └── logger.cpp
│
├── driver/
│   ├── fitness_driver.c
│   └── Makefile
│
├── logs/
│   └── fitness_log.txt
│
├── docs/
│   ├── stage1_project_introduction.md
│   ├── stage2_requirements_and_plan.md
│   ├── stage3_system_design.md
│   ├── stage4_implementation.md
│   ├── stage5_testing_and_improvement.md
│   └── stage6_final_implementation.md
│
├── Makefile
├── README.md
└── .gitignore

