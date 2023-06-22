#ifndef SENSOR_H
#define SENSOR_H

#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

class Sensor {

public:
    Sensor();

    void init();

    void read();

private:
    Adafruit_BME280 bme;
    float temperature;
    float humidity;
    float pressure_hpa;
    float pressure_mmhg;
    float altitude;
};

#endif
