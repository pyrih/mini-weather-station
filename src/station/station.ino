#include <ESP8266WebServer.h>

#include "Constants.h"
#include "Network.h"
#include "Secrets.h"
#include "Sensor.h"

Sensor sensor;
ESP8266WebServer server(DEFAULT_HTTP_PORT);

void setup() {
    // put your setup code here, to run once
    Serial.begin(BAUD);

    sensor.init();
    connectToWiFi();

    server.on("/", handle_OnConnect);
    server.onNotFound(handle_NotFound);
    server.begin();
    Serial.println("HTTP server started");
}

void loop() {
    // put your main code here, to run repeatedly
    server.handleClient();
}

void handle_OnConnect() {
    int temperature = (int) sensor.getTemperature();
    Serial.println(temperature);

    String response = "tbd";
    server.send(200, "text/html", response);
}

void handle_NotFound() {
    server.send(404, "text/plain", "Not found");
}
