#include <Wire.h>

#include "MAX30100_Pulse Oximeter.h"

#define REPORTING_PERIOD_ US 1000

// Create a PulseOximeter object

PulseOximeter pox;

// Time at which the last beat occurred

uint32_t tsLastReport - 01

// Callback routine is executed when a pulse is detected

void onBeatDetected() {

Serial.println("Beat!"),

void setup()(

Serial.begin(9600),

Serial.print("Initializing pulse oximeter..");

// Initialize sensor

if (Ipox.begin()) {

Serial.println("FAILED"),

for (11)

} else {

Serial.println("SUCCESS"),

// Configure sensor to use 7.6mA for LED drive

pox.setIRLedCurrent (MAX30100_LED_CURR_7_6MA);

// Register a callback routine

pox.setOnBeatDetectedCallback(onBeatDetected);

void loop() {

// Read from the sensor

Fox update(),

// Grab the updated heart rate and SpO2 levels

if (millis() tslastReport > REPORTING_PERIOD_MS) ( Serial.print("Heart rates")/

Serial.print(pox.getHeartRate());

Serial.print("bpm / SpO2:");

Serial.print(pox.getspo2());

Serial.println(""),

tsLastReport = millis()/
