#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include "sensor.h"
#include "logger.h"

using namespace std;

int main() {

    pid_t child = fork();

    if (child == 0) {
        cout << "Child Process ID: " << getpid() << endl;
        return 0;
    }

    cout << "Parent Process ID: " << getpid() << endl;

    wait(NULL);

    for (int i = 1; i <= 5; i++) {

        BiometricData data = generateData(i);

        bool normal = true;

        if (data.heartRate < 60 || data.heartRate > 100) {
            normal = false;
        }

        if (data.spo2 < 95) {
            normal = false;
        }

        if (data.temperature < 36.0 || data.temperature > 37.5) {
            normal = false;
        }

        cout << "------------------------------" << endl;
        cout << "Reading " << i << endl;
        cout << "------------------------------" << endl;

        cout << "Heart Rate : " << data.heartRate << " BPM" << endl;
        cout << "SpO2       : " << data.spo2 << " %" << endl;
        cout << "Temperature: " << data.temperature << " C" << endl;
        cout << "Steps      : " << data.steps << endl;

        if (normal) {
            cout << "Status     : NORMAL" << endl;
        } else {
            cout << "Status     : ABNORMAL" << endl;
        }

        saveData(data, i);

        cout << endl;
    }

    return 0;
}
