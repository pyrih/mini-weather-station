#!/bin/bash

OUTPUT = "./station/secrets.h"

arduino_secrets:
	@echo "Generating $(OUTPUT)"
	@[ -e $(OUTPUT) ] && rm $(OUTPUT)
	@echo "#define SECRET_SSID \"$(WIFI_SSID_NAME)\"" >> $(OUTPUT)
	@echo "#define SECRET_PASS \"$(WIFI_PASSWORD)\"" >> $(OUTPUT)
