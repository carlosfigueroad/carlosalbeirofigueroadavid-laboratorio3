// main.cpp: Archivo principal que incluye el menu interactivo para ejecutar ejercicios

#include "punto1.h"
#include "punto2.h"
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
        // ... (Otras opciones del menu)
        std::cout << "Ingresa tu opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                // ... (Logica para Ejercicio 1)
                break;
            case 2: {
                std::cout << "Has seleccionado el Ejercicio 2.\n";
                std::cout << "1. Escribir en archivo\n";
                std::cout << "2. Leer de archivo\n";
                int accion;
                std::cout << "Elige una accion: ";
                std::cin >> accion;
                std::cin.ignore();  // Limpia el buffer de entrada

                if (accion == 1) {
                    std::string nombreArchivo, texto;
                    std::cout << "Ingresa el nombre del archivo: ";
                    std::getline(std::cin, nombreArchivo);
                    std::cout << "Escribe el texto que deseas guardar: ";
                    std::getline(std::cin, texto);
                    ArchivoTexto::escribirTexto(nombreArchivo, texto);
                    std::cout << "Texto guardado exitosamente.\n";
                } else if (accion == 2) {
                    std::string nombreArchivo;
                    std::cout << "Ingresa el nombre del archivo: ";
                    std::getline(std::cin, nombreArchivo);
                    std::string contenido = ArchivoTexto::leerTexto(nombreArchivo);
                    std::cout << "Contenido del archivo:\n" << contenido << std::endl;
                } else {
                    std::cout << "Accion no valida.\n";
                }
                break;
            }
            // ... (Otras opciones del menu)
            case 6:
                std::cout << "Saliendo del programa...\n";
                salir = true;
                break;
            default:
                std::cout << "Opcion no valida. Intenta de nuevo.\n";
        }
    }

    return 0;
}
