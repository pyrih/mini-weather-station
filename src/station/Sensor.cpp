#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

#include "Constants.h"
#include "Sensor.h"

Sensor::Sensor() {
    Adafruit_BME280 bme;
}

void Sensor::init() {
    delay(DELAY_100MS);

    if (!bme.begin(0x76)) {
        Serial.println("[WARNING] Could not find a valid BME280 sensor, check wiring!");
        while (1);
    }
}

float Sensor::getTemperature() {
    return bme.readTemperature();
}

float Sensor::getHumidity() {
    return bme.readHumidity();
}

float Sensor::getPressureHpa() {
    return bme.readPressure() / DIVIDER_OF_100;
}

float Sensor::getPressureMmhg() {
    return bme.readPressure() / DIVIDER_OF_100 * HPA_TO_MMHG_MULTIPLIER;
}

float Sensor::getAltitude() {
    return bme.readAltitude(SEA_LEVEL_PRESSURE_HPA);
}
