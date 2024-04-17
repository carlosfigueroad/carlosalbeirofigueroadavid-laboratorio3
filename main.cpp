#include "punto1.h"
#include "punto2.h"
#include "punto3.h"
#include "punto4.h"
#include <iostream>

int main() {
    int opcion;
    bool salir = false;

    while (!salir) {
        std::cout << "**************************************\n";
        std::cout << "* Bienvenido al menu de ejercicios *\n";
        std::cout << "**************************************\n";
        std::cout << "Elige una opcion:\n";
        std::cout << "1. Ejercicio 1 (CuentaCorriente)\n";
        std::cout << "2. Ejercicio 2 (ArchivoTexto)\n";
        std::cout << "3. Ejercicio 3 (BuscadorTexto)\n";
        std::cout << "4. Ejercicio 4 (Codificador)\n";
        std::cout << "Ingresa tu opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                // ... (Logica para Ejercicio 1)
                break;
            case 2:
                // ... (Logica para Ejercicio 2)
                break;
            case 3: {
                // ... (Logica para Ejercicio 3)
                break;
            }
            case 4: {
                std::cout << "Has seleccionado el Ejercicio 4.\n";
                std::string origen, destino, archivoCodificacion;
                int opcionCodificacion;
                std::cout << "Ingresa la ubicacion y nombre del archivo origen: ";
                std::cin >> origen;
                std::cout << "Ingresa la ubicacion y nombre del archivo destino: ";
                std::cin >> destino;
                std::cout << "Deseas codificar (1) o decodificar (2)? ";
                std::cin >> opcionCodificacion;
                std::cout << "Deseas usar la codificacion por defecto (1) o por documento (2)? ";
                std::cin >> opcionCodificacion;
                if (opcionCodificacion == 2) {
                    std::cout << "Ingresa la ubicacion y nombre del documento de codificacion: ";
                    std::cin >> archivoCodificacion;
                }
                std::map<char, char> codificacion = Codificador::leerCodificacion(archivoCodificacion);
                if (opcionCodificacion == 1) {
                    Codificador::codificar(origen, destino, codificacion);
                } else {
                    Codificador::decodificar(origen, destino, codificacion);
                }
                break;
            }
            case 5:
                std::cout << "Saliendo del programa...\n";
                salir = true;
                break;
            default:
                std::cout << "Opcion no valida. Intenta de nuevo.\n";
        }
    }

    return 0;
}
