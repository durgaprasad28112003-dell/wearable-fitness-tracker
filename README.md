# 🫀 Wearable Fitness Tracker – Virtual Biometric Data Pipeline

<p align="center">
  <b>A Linux-based C++ simulation of a wearable fitness monitoring system</b>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/C++-17-blue?style=for-the-badge&logo=cplusplus" alt="C++">
  <img src="https://img.shields.io/badge/Linux-Systems-black?style=for-the-badge&logo=linux" alt="Linux">
  <img src="https://img.shields.io/badge/Make-Build-orange?style=for-the-badge" alt="Make">
  <img src="https://img.shields.io/badge/Git-GitHub-red?style=for-the-badge&logo=git" alt="Git">
</p>

---

## 📌 Project Overview

**Wearable Fitness Tracker – Virtual Biometric Data Pipeline** is a Linux-based C++ project that simulates the software pipeline of a wearable fitness monitoring system.

Instead of using physical biometric sensors, the application generates **virtual sensor readings** for:

- ❤️ Heart Rate
- 🫁 SpO2
- 🌡️ Body Temperature
- 👣 Steps

The generated readings are processed, validated against predefined ranges, displayed on the Linux terminal, and stored in a log file.

The project also demonstrates **Linux system programming concepts** such as process creation and process identification, along with a separate **basic Linux Device Driver source component**.

---

## 🎯 Objectives

The main objectives of this project are:

- Simulate biometric sensor data using C++.
- Process and validate biometric readings.
- Identify `NORMAL` and `ABNORMAL` readings.
- Store processed readings in a log file.
- Demonstrate Linux process creation using `fork()`.
- Demonstrate process identification using `getpid()`.
- Demonstrate parent-child synchronization using `wait()`.
- Implement a basic Linux character/misc device-driver source component.
- Use Makefiles for repeatable compilation.
- Maintain the project using Git and GitHub.

---

## ⚙️ Key Features

| Feature | Description |
|---|---|
| 🩺 Virtual Sensors | Generates simulated biometric readings |
| ❤️ Heart Rate | Processes BPM values |
| 🫁 SpO2 | Processes oxygen saturation values |
| 🌡️ Temperature | Processes body-temperature values |
| 👣 Steps | Tracks simulated step counts |
| ✅ Validation | Classifies readings as NORMAL/ABNORMAL |
| 📝 Logging | Stores readings in a runtime log |
| 🐧 Linux Processes | Demonstrates `fork()`, `getpid()` and `wait()` |
| 🔧 Device Driver | Includes a basic Linux character/misc driver source |
| 🛠️ Makefile | Simplifies project compilation |
| 🔀 Git/GitHub | Maintains source and project documentation |

---

# 🏗️ System Architecture

### Main Application

```text
                  VIRTUAL BIOMETRIC DATA
                           │
                           ▼
                   ┌─────────────────┐
                   │  C++ Application │
                   └────────┬────────┘
                            │
                            ▼
                   ┌─────────────────┐
                   │ Data Processing  │
                   └────────┬────────┘
                            │
                            ▼
                   ┌─────────────────┐
                   │ Range Validation │
                   └────────┬────────┘
                            │
                    ┌───────┴───────┐
                    ▼               ▼
                ┌───────┐       ┌──────────┐
                │NORMAL │       │ ABNORMAL │
                └───┬───┘       └────┬─────┘
                    └───────┬─────────┘
                            ▼
                   ┌─────────────────┐
                   │ Terminal Output │
                   └────────┬────────┘
                            │
                            ▼
                   ┌─────────────────┐
                   │   File Logging  │
                   └─────────────────┘
