matrix.setIntensity(15); // brillo del led
matrix.setRotation(0, 2); // Rotación de las pantallas
matrix.setRotation(1, 2);
matrix.setRotation(2, 2);
matrix.setRotation(3, 2);

// Adjust to your own needs
//  matrix.setPosition(0, 0, 0); // The first display is at <0, 0>
//  matrix.setPosition(1, 1, 0); // The second display is at <1, 0>
//  matrix.setPosition(2, 2, 0); // The third display is at <2, 0>
//  matrix.setPosition(3, 3, 0); // And the last display is at <3, 0>
//  ...
//  matrix.setRotation(0, 2);    // The first display is position upside down
//  matrix.setRotation(3, 2);    // The same hold for the last display

//Clear the screen
matrix.fillScreen(0);
matrix.write();
