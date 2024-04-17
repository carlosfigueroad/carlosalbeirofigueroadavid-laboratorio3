#ifndef PUNTO4_H
#define PUNTO4_H

#include <string>
#include <map>

class Codificador {
public:
    static std::map<char, char> leerCodificacion(const std::string& nombreArchivo);
    static void codificar(const std::string& origen, const std::string& destino, const std::map<char, char>& codificacion);
    static void decodificar(const std::string& origen, const std::string& destino, const std::map<char, char>& codificacion);
};

#endif // PUNTO4_H
