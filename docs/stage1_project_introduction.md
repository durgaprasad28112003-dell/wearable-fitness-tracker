# Stage 1 – Project Introduction

## 1.1 Project Title

**Wearable Fitness Tracker – Virtual Biometric Data Pipeline**

## 1.2 Project Idea

The project is a Linux-based C++ simulation of a wearable fitness monitoring system.

Instead of using physical biometric sensors, the system generates virtual sensor readings for parameters such as heart rate, SpO2, body temperature, and steps.

The generated readings are processed and validated by the C++ application and then displayed on the terminal and stored in a log file.

The project also demonstrates Linux system programming concepts and includes a basic Linux character device driver source component.

## 1.3 Problem Statement

A real wearable fitness tracker collects biometric information from sensors and processes the collected data.

For a software-based academic demonstration, physical sensors are not required. The proposed system provides a virtual environment in which biometric readings can be generated, processed, validated, displayed, and logged using C++ on Linux.

## 1.4 Objectives

The objectives of the project are:

- To simulate biometric sensor readings.
- To process the readings using C++.
- To validate readings using predefined ranges.
- To identify normal and abnormal readings.
- To store readings in a log file.
- To demonstrate Linux process creation using `fork()`.
- To demonstrate process identification using `getpid()`.
- To demonstrate parent-child process synchronization using `wait()`.
- To include basic Linux Device Driver concepts.
- To use Git and GitHub for version control.

## 1.5 Project Scope

The scope of the project includes:

- Virtual generation of biometric data.
- Processing of heart rate, SpO2, body temperature, and step data.
- Normal/abnormal validation.
- Terminal-based monitoring.
- File-based logging.
- Basic Linux process management.
- Basic Linux Device Driver source implementation.
- Makefile-based compilation.

The project does not currently include physical biometric sensors or direct communication between the C++ application and the kernel driver.

## 1.6 Expected Outcome

The expected outcome is a working Linux-based C++ application capable of generating virtual biometric readings, validating them, displaying the results, and recording them in a log file.

The project also provides a basic demonstration of Linux system programming and Linux Device Driver concepts.

## 1.7 Application

The project can serve as an educational foundation for understanding how a software-based wearable monitoring system can be designed before integrating real sensors and embedded hardware.

## 1.8 Stage 1 Deliverables

- Project idea and objective definition.
- Problem statement.
- Project scope.
- Expected outcome.
- Initial project structure.
- GitHub repository for version control.

## 1.9 Next Stage

The next stage focuses on defining detailed functional and non-functional requirements, project modules, deliverables, and the development plan.
