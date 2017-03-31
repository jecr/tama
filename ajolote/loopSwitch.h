// read the sensor:
sv1 = analogRead(sen1);
sv2 = analogRead(sen2);
sv3 = analogRead(sen3);
sv4 = analogRead(sen4);
sv5 = analogRead(sen5);
sv6 = analogRead(sen6);

// apply the calibration to the sensor reading
sv1 = map(sv1, sMin1, sMax1, 0, 255);
sv2 = map(sv2, sMin2, sMax2, 0, 255);
sv3 = map(sv3, sMin3, sMax3, 0, 255);
sv4 = map(sv4, sMin4, sMax4, 0, 255);
sv5 = map(sv5, sMin5, sMax5, 0, 255);
sv6 = map(sv6, sMin6, sMax6, 0, 255);

// in case the sensor value is outside the range seen during calibration
sv1 = constrain(sv1, 0, 255);
sv2 = constrain(sv2, 0, 255);
sv3 = constrain(sv3, 0, 255);
sv4 = constrain(sv4, 0, 255);
sv5 = constrain(sv5, 0, 255);
sv6 = constrain(sv6, 0, 255);

/*Serial.println(sv1);
Serial.println(sv2);
Serial.println(sv3);
Serial.println(sv4);
Serial.println(sv5);
Serial.println(sv6);
Serial.println("========");*/

if (sv1 < 50) {
  if (comida != 1) {
    comida = 1;
    xCom = random(0, 5);
    yCom = random(0, 8);
  }
  dedo = 1;
}

if (sv2 < 50) {
  if (comida != 1) {
    comida = 1;
    xCom = random(5, 11);
    yCom = random(0, 8);
  }
  dedo = 2;
}

if (sv3 < 50) {
  if (comida != 1) {
    comida = 1;
    xCom = random(11, 16);
    yCom = random(0, 8);
  }
  dedo = 3;
}

if (sv4 < 50) {
  if (comida != 1) {
    comida = 1;
    xCom = random(16, 21);
    yCom = random(0, 8);
  }
  dedo = 4;
}

if (sv5 < 50) {
  if (comida != 1) {
    comida = 1;
    xCom = random(21, 27);
    yCom = random(0, 8);
  }
  dedo = 5;
}

if (sv6 < 50) {
  if (comida != 1) {
    comida = 1;
    xCom = random(27, 32);
    yCom = random(0, 8);
  }
  dedo = 6;
}

if (sv1 > 50 && sv2 > 50 && sv3 > 50 && sv4 > 50 && sv5 > 50 && sv6 > 50) {
  dedo = 0;
}

Serial.println(dedo);
