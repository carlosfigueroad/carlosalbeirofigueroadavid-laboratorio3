#include "punto4.h"
#include <fstream>
#include <iostream>

std::map<char, char> Codificador::leerCodificacion(const std::string& nombreArchivo) {
    std::map<char, char> codificacion;
    std::ifstream archivo(nombreArchivo);
    char clave, valor;

    while (archivo >> clave >> valor) {
        codificacion[clave] = valor;
    }

    archivo.close();
    return codificacion;
}

void Codificador::codificar(const std::string& origen, const std::string& destino, const std::map<char, char>& codificacion) {
    std::ifstream archivoOrigen(origen);
    std::ofstream archivoDestino(destino);
    char caracter;

    while (archivoOrigen.get(caracter)) {
        if (codificacion.count(caracter) > 0) {
            archivoDestino << codificacion.at(caracter);
        } else {
            archivoDestino << caracter;
        }
    }

    archivoOrigen.close();
    archivoDestino.close();
}

void Codificador::decodificar(const std::string& origen, const std::string& destino, const std::map<char, char>& codificacion) {
    std::ifstream archivoOrigen(origen);
    std::ofstream archivoDestino(destino);
    char caracter;

    while (archivoOrigen.get(caracter)) {
        for (const auto& par : codificacion) {
            if (par.second == caracter) {
                archivoDestino << par.first;
                break;
            }
        }
    }

    archivoOrigen.close();
    archivoDestino.close();
}
