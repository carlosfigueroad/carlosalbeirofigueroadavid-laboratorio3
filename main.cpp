// main.cpp
#include "CuentaCorriente.h"  // Se incluye el archivo de cabecera de la clase CuentaCorriente
#include <iostream>  // Se incluye la biblioteca iostream para usar cout y endl

int main() {
    // Se crea una instancia de la clase CuentaCorriente
    CuentaCorriente cuenta1("Juan", "Perez", "Calle 123", "555-5555", 1000.0);

    // Se llama al método consultarCuenta para mostrar los datos de la cuenta
    cuenta1.consultarCuenta();

    // Se llama al método ingresarDinero para añadir dinero a la cuenta
    cuenta1.ingresarDinero(500.0);

    // Se vuelve a llamar al método consultarCuenta para mostrar los datos actualizados de la cuenta
    cuenta1.consultarCuenta();

    // Se llama al método retirarDinero para retirar dinero de la cuenta
    cuenta1.retirarDinero(200.0);

    // Se vuelve a llamar al método consultarCuenta para mostrar los datos actualizados de la cuenta
    cuenta1.consultarCuenta();

    // Se llama al método saldoNegativo para verificar si el saldo es negativo
    if (cuenta1.saldoNegativo()) {
        std::cout << "La cuenta está en números rojos." << std::endl;
    } else {
        std::cout << "La cuenta tiene saldo positivo." << std::endl;
    }

    return 0;
}
