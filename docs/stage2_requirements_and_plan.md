# Stage 2 – Requirements and Development Plan

## 2.1 Functional Requirements

The system shall:

1. Generate virtual biometric readings.
2. Process heart rate, SpO2, body temperature, and step data.
3. Validate readings using predefined ranges.
4. Classify readings as NORMAL or ABNORMAL.
5. Display readings on the Linux terminal.
6. Store readings in a log file.
7. Create a child process using `fork()`.
8. Display process identification information.
9. Use `wait()` for parent-child process synchronization.
10. Provide a basic Linux Device Driver source component.
11. Support compilation through Makefiles.

## 2.2 Non-Functional Requirements

- The application shall run on Linux.
- The application shall be implemented using C++ and Linux system programming concepts.
- The source code shall be modular and readable.
- The project shall use Git for version control.
- The project shall contain execution and build documentation.
- Generated log data shall be separated from source code.

## 2.3 Project Modules

### Sensor Module
Responsible for generating virtual biometric readings.

### Data Processing Module
Responsible for processing and validating biometric values.

### Logging Module
Responsible for storing processed readings in a log file.

### Linux System Programming Module
Demonstrates process creation and process management using Linux system calls.

### Device Driver Component
Contains a basic Linux character/misc device driver source demonstrating driver interfaces and kernel-level concepts.

## 2.4 Development Environment

- Operating System: Linux environment using WSL2
- Language: C++
- Driver Language: C
- Compiler: GNU Compiler Collection (GCC/G++)
- Build Tool: Make
- Version Control: Git
- Repository: GitHub

## 2.5 Project Deliverables

- Working C++ application
- Linux system programming implementation
- Linux Device Driver source
- Makefiles
- README documentation
- Stage 1–6 documentation
- GitHub repository

## 2.6 Development Plan

| Stage | Activity |
|---|---|
| Stage 1 | Project introduction and scope |
| Stage 2 | Requirements and development planning |
| Stage 3 | System design and architecture |
| Stage 4 | Initial implementation and prototype |
| Stage 5 | Testing, integration and improvement |
| Stage 6 | Final implementation and presentation |

## 2.7 Next Stage

The next stage focuses on system architecture, component responsibilities, data structures, UML representation, development environment, and implementation planning.
