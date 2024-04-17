// Punto3.cpp: Implementacion de los metodos de la clase BuscadorTexto

#include "punto3.h"

int BuscadorTexto::contarOcurrencias(const std::string& nombreArchivo, const std::string& busqueda) {
    std::ifstream archivo(nombreArchivo);
    std::string contenido;
    int contador = 0;
    if (archivo.is_open()) {
        while (std::getline(archivo, contenido)) {
            size_t pos = contenido.find(busqueda);
            while (pos != std::string::npos) {
                contador++;
                pos = contenido.find(busqueda, pos + busqueda.length());
            }
        }
        archivo.close();
    }
    return contador;
}
