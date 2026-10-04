#include <fcntl.h>
#include <unistd.h>
#include <cstdio>
#include "biometric_data.h"

void saveData(const BiometricData& data, int readingNumber) {

    int fd = open("logs/fitness_log.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);

    if (fd == -1) {
        return;
    }

    dprintf(fd, "Reading %d\n", readingNumber);
    dprintf(fd, "Heart Rate: %d BPM\n", data.heartRate);
    dprintf(fd, "SpO2: %d %%\n", data.spo2);
    dprintf(fd, "Temperature: %.1f C\n", data.temperature);
    dprintf(fd, "Steps: %d\n", data.steps);

    if (data.heartRate > 120 || data.spo2 < 95 || data.temperature > 38.0) {
        dprintf(fd, "Status: ABNORMAL\n");
    } else {
        dprintf(fd, "Status: NORMAL\n");
    }

    dprintf(fd, "--------------------------\n");

    close(fd);
}
