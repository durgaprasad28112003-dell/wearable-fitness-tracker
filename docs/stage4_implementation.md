# Stage 4 – Initial Implementation and Prototype

## 4.1 Core Implementation

The project was implemented as a modular C++ Linux application.

The main modules are:
- Sensor data generation
- Biometric data processing
- Validation
- File logging
- Linux process management

## 4.2 Virtual Sensor Data

The application generates virtual values for heart rate, SpO2, body temperature, and steps.

The readings are processed and classified using predefined validation ranges.

## 4.3 Linux System Programming

The application uses:
- `fork()` to create a child process.
- `getpid()` to identify processes.
- `wait()` for parent-child synchronization.

## 4.4 Logging

Processed biometric readings are stored in `logs/fitness_log.txt`.

## 4.5 Device Driver Implementation

A basic Linux character/misc device driver source was created in `driver/fitness_driver.c`.

The driver contains read/write operations and uses Linux kernel APIs such as `copy_to_user()` and `copy_from_user()`.

## 4.6 Build System

The main project uses a Makefile to compile the C++ application.

The driver directory contains a separate Makefile intended for kernel-module compilation.

## 4.7 Prototype Result

The C++ prototype successfully compiles using `make`, runs in Linux, generates biometric readings, identifies normal and abnormal readings, displays process information, and creates the runtime log file.

## 4.8 Environment Limitation

Kernel-module compilation/loading was not demonstrated because the current WSL2 environment does not provide matching kernel build headers.

## 4.9 Next Stage

The next stage focuses on testing, debugging, verification, reliability, and documentation.
