#include "punto1.h"
#include <iostream>

// Implementacion del constructor por defecto
CuentaCorriente::CuentaCorriente()
    : nombreCliente("Carlos Figueroa"), numeroCuenta("787851455-25"), saldo(1550000), direccion("Calle 96 Carrera 95b"), telefono("3104538508") {}

// Metodo para depositar dinero en la cuenta
void CuentaCorriente::depositar(double cantidad) {
    if (cantidad > 0) {
        saldo += cantidad;
    }
}

// Metodo para retirar dinero de la cuenta
bool CuentaCorriente::retirar(double cantidad) {
    if (cantidad > 0 && saldo >= cantidad) {
        saldo -= cantidad;
        return true;
    }
    return false;
}

// Metodo para obtener el saldo actual de la cuenta
double CuentaCorriente::obtenerSaldo() const {
    return saldo;
}

// Metodo para mostrar informacion de la cuenta
void CuentaCorriente::mostrarInformacion() const {
    std::cout << "Nombre del cliente: " << nombreCliente << std::endl;
    std::cout << "Numero de cuenta: " << numeroCuenta << std::endl;
    std::cout << "Saldo: " << saldo << std::endl;
    std::cout << "Direccion: " << direccion << std::endl;
    std::cout << "Telefono: " << telefono << std::endl;
}
