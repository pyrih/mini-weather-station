#ifndef SENSOR_H
#define SENSOR_H

#include <Adafruit_BME280.h>
#include <Adafruit_Sensor.h>

class Sensor {

public:
    Sensor();

    void init();

    float getTemperature();

    float getHumidity();

    float getPressureHpa();

    float getPressureMmhg();

    float getAltitude();

private:
    Adafruit_BME280 bme;
};

#endif
