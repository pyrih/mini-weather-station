#!/bin/bash

OUTPUT = "./src/station/Secrets.h"

secrets:
	@echo "Generating $(OUTPUT)"
	@[ -e $(OUTPUT) ] && rm $(OUTPUT)
	@echo "#define SECRET_SSID \"$(WIFI_SSID_NAME)\"" >> $(OUTPUT)
	@echo "#define SECRET_PASS \"$(WIFI_PASSWORD)\"" >> $(OUTPUT)
