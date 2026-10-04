# Stage 5 – Testing, Integration and Improvement

## 5.1 Testing Approach

Testing was performed on the Linux C++ application using build, execution, functional, and output verification.

## 5.2 Build Test

Command:

`make`

The C++ source files compile successfully and generate the `fitness_tracker` executable.

## 5.3 Execution Test

Command:

`./fitness_tracker`

The application starts and displays biometric readings and process information.

## 5.4 Biometric Validation Test

Multiple biometric readings were generated and checked against predefined validation ranges.

The application identifies readings as NORMAL or ABNORMAL.

One intentionally abnormal reading was used to verify the validation logic.

## 5.5 Process Test

The Linux process-management functionality was tested using `fork()`, `getpid()`, and `wait()`.

The execution displayed parent and child process IDs.

## 5.6 Logging Test

The generated log was inspected using:

`cat logs/fitness_log.txt`

## 5.7 Integration Test

The C++ modules were compiled together using the main Makefile.

The device-driver source remains a separate kernel-level component because direct driver integration was not demonstrated in the WSL2 environment.

## 5.8 Improvement Activities

- Modular source/header organization.
- Makefile-based compilation.
- Generated log output separated from source files.
- Git-based version control.
- Stage documentation added.

## 5.9 Testing Result

The core user-space application was successfully tested in the Linux environment.

The main environmental limitation is kernel-module compilation/loading due to unavailable matching WSL2 kernel build headers.

## 5.10 Next Stage

The final stage documents the completed implementation, results, limitations, future scope, and presentation plan.
