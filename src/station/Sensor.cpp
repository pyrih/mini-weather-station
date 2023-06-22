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

void Sensor::read() {
    temperature = bme.readTemperature();
    humidity = bme.readHumidity();
    pressure_hpa = bme.readPressure() / DIVIDER_OF_100;
    pressure_mmhg = bme.readPressure() / DIVIDER_OF_100 * HPA_TO_MMHG_MULTIPLIER;
    altitude = bme.readAltitude(SEA_LEVEL_PRESSURE_HPA);
}
