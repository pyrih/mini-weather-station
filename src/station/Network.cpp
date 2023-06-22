#include <ESP8266WiFi.h>

#include "Constants.h"
#include "Network.h"
#include "Secrets.h"

void connectToWiFi() {
    WiFi.begin(SECRET_SSID, SECRET_PASS);

    Serial.print("[INFO] Connecting to WiFi");
    while (WiFi.status() != WL_CONNECTED) {
        delay(DELAY_1S);
        Serial.print(".");
    }

    Serial.println("\n[INFO] WiFi connected. IP address: ");
    Serial.print(WiFi.localIP());
}