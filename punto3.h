// Punto3.h: Archivo de cabecera que define la clase BuscadorTexto

#ifndef PUNTO3_H
#define PUNTO3_H

#include <string>
#include <fstream>

class BuscadorTexto {
public:
    // Metodo para buscar y contar ocurrencias de un caracter o secuencia en un archivo
    static int contarOcurrencias(const std::string& nombreArchivo, const std::string& busqueda);
};

#endif // PUNTO3_H
