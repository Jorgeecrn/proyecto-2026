#include <iostream>

#include "Coche.h"
#include "Moto.h"
//
// @Author José Manuel Colmenar
//

// Código de prueba para dos objetos Coche
void pruebaClaseCoche() {
    // Construcción de objetos
    Coche c1("ABC123", "Ford", "Focus");
    Coche c2("XYZ789", "Chevrolet", "Camaro");

    // Modifica kilometraje
    c1.setKilometraje(125000);

    // Muestra fichas
    std::cout << c1.obtenerFicha() << std::endl << std::endl;
    std::cout << c2.obtenerFicha() << std::endl;
}

// Prueba de dos objetos Moto
void pruebaClaseMoto() {
    // Construcción de objetos
    Moto m1("123ABC", "Honda", "CBR", 600);
    Moto m2("XYZ789", "Yamaha", "R10", 1000);

    // Modifica kilometraje
    m1.setKilometraje(1500);

    // Muestra fichas
    std::cout << m1.obtenerFicha() << std::endl << std::endl;
    std::cout << m2.obtenerFicha() << std::endl;
}

int main() {

    // Prueba coches
    pruebaClaseCoche();

    // Prueba motos
    pruebaClaseMoto();

    return 0;
}