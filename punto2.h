
#ifndef PUNTO2_H
#define PUNTO2_H

#include <string>
#include <fstream>

class ArchivoTexto {
public:
    // Metodo para escribir texto en un archivo
    static void escribirTexto(const std::string& nombreArchivo, const std::string& texto);

    // Metodo para leer texto de un archivo
    static std::string leerTexto(const std::string& nombreArchivo);
};

#endif // PUNTO2_H
