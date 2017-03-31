/*
Pins usados:
2, A5
*/

/**
 * Stuff for the matrix's controls
 */
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Max72xxPanel.h>

int pinCS = 12;
int numberOfHorizontalDisplays = 4;
int numberOfVerticalDisplays = 1;

Max72xxPanel matrix = Max72xxPanel(pinCS, numberOfHorizontalDisplays, numberOfVerticalDisplays);

/**
 * Stuff for the light switch
 */
const int sen1 = A0;
const int sen2 = A1;
const int sen3 = A2;
const int sen4 = A3;
const int sen5 = A4;
const int sen6 = A5;

const int electricida = 31;
int dedo = 0;

// variables:
int sensorMin = 1023;        // minimum sensor value
int sensorMax = 0;           // maximum sensor value

int sv1 = 0, sv2 = 0, sv3 = 0, sv4 = 0, sv5 = 0, sv6 = 0;
int sMin1 = 1023, sMin2 = 1023, sMin3 = 1023, sMin4 = 1023, sMin5 = 1023, sMin6 = 1023;
int sMax1 = 0, sMax2 = 0, sMax3 = 0, sMax4 = 0, sMax5 = 0, sMax6 = 0;

void setup() {
  Serial.begin(9600);

#include "setupMatrix.h"

#include "setupSwitch.h"

}

#include "postSetupMatrix.h"

void loop() {

#include "loopMatrix.h"
#include "loopSwitch.h"

}
