
#include "punto1.h"
#include <iostream>

int main() {
    int opcion;
    bool salir = false;

    while (!salir) {
        std::cout << "**************************************\n";
        std::cout << "* Bienvenido al menu de ejercicios *\n";
        std::cout << "**************************************\n";
        std::cout << "Elige una opcion:\n";
        std::cout << "1. Ejercicio 1\n";
        // ... (Otras opciones del menu)
        std::cout << "Ingresa tu opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                CuentaCorriente cuenta;  // Crea una cuenta con los valores predeterminados
                int accion;
                std::cout << "Has seleccionado el Ejercicio 1.\n";
                std::cout << "1. Retirar dinero\n";
                std::cout << "2. Consultar cuenta\n";
                std::cout << "3. Ingresar dinero\n";
                std::cout << "Elige una accion: ";
                std::cin >> accion;

                switch (accion) {
                    case 1: {
                        double cantidad;
                        std::cout << "Cuanto deseas retirar? ";
                        std::cin >> cantidad;
                        if (cuenta.retirar(cantidad)) {
                            std::cout << "Retiro exitoso. Saldo actual: " << cuenta.obtenerSaldo() << std::endl;
                        } else {
                            std::cout << "Saldo insuficiente.\n";
                        }
                        break;
                    }
                    case 2:
                        cuenta.mostrarInformacion();
                        break;
                    case 3: {
                        double cantidad;
                        std::cout << "Cuanto deseas ingresar? ";
                        std::cin >> cantidad;
                        cuenta.depositar(cantidad);
                        std::cout << "Ingreso exitoso. Saldo actual: " << cuenta.obtenerSaldo() << std::endl;
                        break;
                    }
                    default:
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
