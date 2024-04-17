// Punto2.cpp: Implementacion de los metodos de la clase ArchivoTexto

#include "punto2.h"

void ArchivoTexto::escribirTexto(const std::string& nombreArchivo, const std::string& texto) {
    std::ofstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        archivo << texto;
        archivo.close();
    }
}

std::string ArchivoTexto::leerTexto(const std::string& nombreArchivo) {
    std::ifstream archivo(nombreArchivo);
    std::string texto;
    if (archivo.is_open()) {
        std::getline(archivo, texto, '\0');  // Lee todo el contenido del archivo
        archivo.close();
    }
    return texto;
}
