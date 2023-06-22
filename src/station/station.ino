#include "Constants.h"
#include "Network.h"
#include "Secrets.h"
#include "Sensor.h"

Sensor sensor;

void setup() {
    // put your setup code here, to run once
    Serial.begin(115200);

    sensor.init();
    connectToWiFi();
}

void loop() {
    // put your main code here, to run repeatedly
    int temperature = (int) sensor.getTemperature();
    Serial.println(temperature);

    delay(DELAY_1S);
}
