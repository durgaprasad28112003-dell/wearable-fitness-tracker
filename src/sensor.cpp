#include "biometric_data.h"

BiometricData generateData(int readingNumber) {

    BiometricData data;

    if (readingNumber == 1) {
        data.heartRate = 78;
        data.spo2 = 98;
        data.temperature = 36.7;
        data.steps = 5421;
    }
    else if (readingNumber == 2) {
        data.heartRate = 82;
        data.spo2 = 97;
        data.temperature = 36.8;
        data.steps = 5435;
    }
    else if (readingNumber == 3) {
        data.heartRate = 145;
        data.spo2 = 93;
        data.temperature = 38.2;
        data.steps = 5450;
    }
    else if (readingNumber == 4) {
        data.heartRate = 76;
        data.spo2 = 98;
        data.temperature = 36.6;
        data.steps = 5462;
    }
    else {
        data.heartRate = 91;
        data.spo2 = 97;
        data.temperature = 37.0;
        data.steps = 5478;
    }

    return data;
}
