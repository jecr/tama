
// calibrate during the first five seconds

pinMode(electricida, OUTPUT);

while (millis() < 1000) {
  if (millis() < 500) {
    digitalWrite(electricida, HIGH);
  } else if (millis() > 500 && millis() < 1000) {
    digitalWrite(electricida, LOW);
  }
  sv1 = analogRead(sen1);

  // record the maximum sensor value
  if (sv1 > sMax1) {
    sMax1 = sv1;
  }

  // record the minimum sensor value
  if (sv1 < sMin1) {
    sMin1 = sv1;
  }

  Serial.println(sMin1);
  Serial.println(sMax1);
  Serial.println(sv1);
  Serial.println("=====1=====");
} // end while

while (millis() > 1000 && millis() < 2000) {
  if (millis() > 1000 && millis() < 1500) {
    digitalWrite(electricida, HIGH);
  } else if (millis() > 1500 && millis() < 2000) {
    digitalWrite(electricida, LOW);
  }
  sv2 = analogRead(sen2);

  // record the maximum sensor value
  if (sv2 > sMax2) {
    sMax2 = sv2;
  }

  // record the minimum sensor value
  if (sv2 < sMin2) {
    sMin2 = sv2;
  }

  Serial.println(sMin2);
  Serial.println(sMax2);
  Serial.println(sv2);
  Serial.println("=====2=====");
} // end while

while (millis() > 2000 && millis() < 3000) {
  if (millis() > 2000 && millis() < 2500) {
    digitalWrite(electricida, HIGH);
  } else if (millis() > 2500 && millis() < 3000) {
    digitalWrite(electricida, LOW);
  }
  sv3 = analogRead(sen3);

  // record the maximum sensor value
  if (sv3 > sMax3) {
    sMax3 = sv3;
  }

  // record the minimum sensor value
  if (sv3 < sMin3) {
    sMin3 = sv3;
  }

  Serial.println(sMin3);
  Serial.println(sMax3);
  Serial.println(sv3);
  Serial.println("=====3=====");
} // end while

while (millis() > 3000 && millis() < 4000) {
  if (millis() > 3000 && millis() < 3500) {
    digitalWrite(electricida, HIGH);
  } else if (millis() > 3500 && millis() < 4000) {
    digitalWrite(electricida, LOW);
  }
  sv4 = analogRead(sen4);

  // record the maximum sensor value
  if (sv4 > sMax4) {
    sMax4 = sv4;
  }

  // record the minimum sensor value
  if (sv4 < sMin4) {
    sMin4 = sv4;
  }

  Serial.println(sMin4);
  Serial.println(sMax4);
  Serial.println(sv4);
  Serial.println("=====4=====");
} // end while

while (millis() > 4000 && millis() < 5000) {
  if (millis() > 4000 && millis() < 4500) {
    digitalWrite(electricida, HIGH);
  } else if (millis() > 4500 && millis() < 5000) {
    digitalWrite(electricida, LOW);
  }
  sv5 = analogRead(sen5);

  // record the maximum sensor value
  if (sv5 > sMax5) {
    sMax5 = sv5;
  }

  // record the minimum sensor value
  if (sv5 < sMin5) {
    sMin5 = sv5;
  }

  Serial.println(sMin5);
  Serial.println(sMax5);
  Serial.println(sv5);
  Serial.println("=====5=====");
} // end while

while (millis() > 5000 && millis() < 6000) {
  if (millis() > 5000 && millis() < 5500) {
    digitalWrite(electricida, HIGH);
  } else if (millis() > 5500 && millis() < 6000) {
    digitalWrite(electricida, LOW);
  }
  sv6 = analogRead(sen6);

  // record the maximum sensor value
  if (sv6 > sMax6) {
    sMax6 = sv6;
  }

  // record the minimum sensor value
  if (sv6 < sMin6) {
    sMin6 = sv6;
  }

  Serial.println(sMin6);
  Serial.println(sMax6);
  Serial.println(sv6);
  Serial.println("=====6=====");
} // end while

digitalWrite(electricida, HIGH);
