# Stage 3 – System Design and Architecture

## 3.1 System Architecture

The main application follows this flow:

```text
Virtual Biometric Data
          |
          v
    C++ Application
          |
          v
   Data Processing
          |
          v
    Range Validation
       /       \
      /         \
 NORMAL       ABNORMAL
      \         /
       \       /
          v
   Terminal Output
          |
          v
      File Logging
A separate Linux Device Driver component is included:

```text
Linux Device Driver Source
            |
            v
       Linux Kernel
The current C++ application does not directly communicate with the kernel driver.

## 3.2 Component Responsibilities

| Component | Responsibility |
|---|---|
| `sensor.cpp` | Generate virtual biometric readings |
| `sensor.h` | Sensor-related declarations |
| `biometric_data.h` | Biometric data structure |
| `logger.cpp` | Write readings to log file |
| `logger.h` | Logging declarations |
| `main.cpp` | Application control and Linux process operations |
| `fitness_driver.c` | Basic Linux device-driver implementation |
| Makefiles | Build automation |

## 3.3 Data Structure

The biometric data is represented using a C++ data structure containing:

- Heart rate
- SpO2
- Body temperature
- Steps
- Validation status

## 3.4 Process Design

The application demonstrates Linux process management using:

```text
Parent Process
      |
    fork()
      |
   +--+--+
   |     |
Parent   Child
   |     |
 wait()  getpid()
The parent process waits for the child process using `wait()`.

## 3.5 Device Driver Design

The driver source uses Linux kernel interfaces including:

- `miscdevice`
- `file_operations`
- Read operation
- Write operation
- `copy_to_user()`
- `copy_from_user()`
- `printk()`

The driver is maintained separately from the user-space C++ application.

## 3.6 UML-Level Representation

### Class-Level Representation

```text
+----------------------+
|     BiometricData    |
+----------------------+
| heartRate            |
| spo2                 |
| temperature          |
| steps                |
| status               |
+----------------------+

+----------------------+
|       Sensor         |
+----------------------+
| generateData()       |
+----------------------+

+----------------------+
|       Logger         |
+----------------------+
| logData()            |
+----------------------+
## 3.7 Development Tools

- Linux/WSL2
- G++
- GCC
- Make
- Git
- GitHub
- Text editor / terminal

## 3.8 Version Control Plan

The project uses Git with the `main` branch. Source code, documentation, Makefiles, and configuration files are maintained in the repository.

## 3.9 Next Stage

The next stage focuses on implementation of the core modules, prototype execution, Linux system programming, device-driver source, and progressive integration.
