#include "Constants.h"
#include "Secrets.h"
#include "Sensor.h"

const char *ssid = SECRET_SSID;
const char *pass = SECRET_PASS;

Sensor sensor;

void setup() {
    // put your setup code here, to run once
    Serial.begin(115200);
    sensor.init();
}

void loop() {
    // put your main code here, to run repeatedly
    int temperature = (int) sensor.getTemperature();
    Serial.println(temperature);

    delay(1000);
}
