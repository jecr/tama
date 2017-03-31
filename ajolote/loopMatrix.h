unsigned long tiempoTotal = millis(); // Lleva track del tiempo

/*if (dedo != 0) {
  tiempoEase = random(1, 2) * 1000; // Asigna un tiempo de easing random
  caminando = 0;
  switch (dedo) {
    case 1:
      xTo = random(25, 32);
      yTo = random(0, 8);
      caminando = 1;
    case 2:
      xTo = random(25, 32);
      yTo = random(0, 8);
      caminando = 1;
    case 3:
      xTo = random(25, 32);
      yTo = random(0, 8);
      caminando = 1;
    case 4:
      xTo = random(0, 8);
      yTo = random(0, 8);
      caminando = 1;
    case 5:
      xTo = random(0, 8);
      yTo = random(0, 8);
      caminando = 1;
    case 6:
      xTo = random(0, 8);
      yTo = random(0, 8);
      caminando = 1;
  }
}*/

if (caminando == 0) { // Si no está caminando, asigna un nuevo objetivo al azar
  if (comida == 1 && dedo == 0) {
    tiempoEase = random(1, 2) * 1000; // Asigna un tiempo de easing random
    xTo = xCom;
    yTo = yCom;
  } else {
    tiempoEase = random(2, 5) * 1000; // Asigna un tiempo de easing random
    xTo = random(0, 32);
    yTo = random(0, 8);
  }

  caminando = 1; // Ahora está caminando
}

if (caminando == 1) {

  if (tiempoTotal - ultimoTiempo >= intervalo) { // Si no se ha cumplido el intervalo
    colaX = xNow;
    colaY = yNow;
    // Calcula el nuevo intervalo (easing)
    transcurrido = tiempoEase - (tiempoTotal - ultimoTiempo);
    intervalo += transcurrido * easing;
    // Actualiza la hora
    ultimoTiempo = tiempoTotal;
    // Si la diferencia de posición no es 0, mueve hacia ese punto
    if (xTo - xNow != 0) {
      if (xTo > xNow) {
        xNow++;
      } else if (xTo < xNow) {
        xNow--;
      }
    }

    if (yTo - yNow != 0) {
      if (yTo > yNow) {
        yNow++;
      } else if (yTo < yNow) {
        yNow--;
      }
    }
    // Si ya llegó al objetivo, reinicia el intervalo y apaga el estado caminando
    if (xTo - xNow == 0 && yTo - yNow == 0) {
      intervalo = 0;
      caminando = 0;
      if (xNow == xCom && yNow == yCom && comida == 1) {
        comida = 0;
      }
    }

  }

}

//Borra la pantalla
matrix.fillScreen(0);

matrix.drawPixel(xNow, yNow, HIGH); // actualiza el pixel

matrix.drawPixel(colaX, colaY, HIGH);

if (comida == 1) {
  matrix.drawPixel(xCom, yCom, HIGH);
}

matrix.write(); // Escribe
