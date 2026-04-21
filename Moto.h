//
// @Author José Manuel Colmenar
//

#ifndef PROYECTO_2026_MOTO_H
#define PROYECTO_2026_MOTO_H
#include <string>


class Moto {
private:
    std::string matricula;
    std::string marca;
    std::string modelo;
    int cilindrada;
    long kilometraje;
public:
    // Constructores
    Moto() {}
    Moto(std::string matricula, std::string marca, std::string modelo, int cilindrada);
    // Getters (definición inline)
    std::string getMatricula() { return matricula; }
    std::string getMarca() { return marca; }
    std::string getModelo() { return modelo; }
    int getCilindrada() { return cilindrada; }
    long getKilometraje() { return kilometraje; }
    // Setters
    void setMatricula(std::string matricula);
    void setMarca(std::string marca);
    void setModelo(std::string modelo);
    void setCilindrada(int cilindrada);
    void setKilometraje(long kilometraje);
    // Otros métodos
    std::string obtenerFicha();
};



#endif //PROYECTO_2026_MOTO_H
