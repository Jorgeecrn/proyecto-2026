//
// @Author José Manuel Colmenar
//

#include "Moto.h"


Moto::Moto(std::string matricula, std::string marca, std::string modelo, int cilindrada) {
    this->matricula = matricula;
    this->marca = marca;
    this->modelo = modelo;
    this->cilindrada = cilindrada;
    this->kilometraje = 0; // Inicializamos el kilometraje a 0
}

void Moto::setMatricula(std::string matricula) {
    this->matricula = matricula;
}

void Moto::setMarca(std::string marca) {
    this->marca = marca;
}

void Moto::setModelo(std::string modelo) {
    this->modelo = modelo;
}

void Moto::setCilindrada(int cilindrada) {
    this->cilindrada = cilindrada;
}

void Moto::setKilometraje(long kilometraje) {
    this->kilometraje = kilometraje;
}

std::string Moto::obtenerFicha() {
    return "Matricula: " + matricula + "\nMarca: " + marca + "\nModelo: " + modelo + "\nCilindrada: " + std::to_string(cilindrada) +
        "\nKilometraje: " + std::to_string(kilometraje);
}