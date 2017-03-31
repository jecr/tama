/**
 * Par las pantallas
 */
int x = numberOfHorizontalDisplays * 8 / 2;
int y = numberOfVerticalDisplays * 8 / 2;

/**
 * Movimiento
 */
int yTo, xTo;

int xNow = 0;
int yNow = 0;

/**
 * Timer for the delay
 */
unsigned long ultimoTiempo = 0; // La última vez que el ajolote dio un paso
float intervalo = 0; // Intervalo de velocidad, aumenta con el easing para hacer lento al ajolote
long transcurrido; // Para el easing
long tiempoEase; // El tiempo que va a tardar en llegar a su objetivo
float easing = 0.025; // Easing constante

/**
 * Estados
 */
int caminando = 0; // Si está caminando

/**
 * Comida
 */
int comida = 0, xCom, yCom;

/**
 * Cola
 */
int colaX, colaY;
