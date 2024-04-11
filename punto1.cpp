#include "CuentaCorriente.h"  // Se incluye el archivo de cabecera de la clase CuentaCorriente
#include <iostream>  // Se incluye la biblioteca iostream para usar cout y endl

// Se implementan los métodos de la clase CuentaCorriente

// Constructor por defecto
CuentaCorriente::CuentaCorriente() : nombre(""), apellidos(""), direccion(""), telefono(""), saldo(0.0) {}

// Constructor con argumentos
CuentaCorriente::CuentaCorriente(std::string nom, std::string ape, std::string dir, std::string tel, double sal)
    : nombre(nom), apellidos(ape), direccion(dir), telefono(tel), saldo(sal) {}

// Métodos set y get para las propiedades de la clase
void CuentaCorriente::setNombre(std::string nom) { nombre = nom; }
std::string CuentaCorriente::getNombre() const { return nombre; }

void CuentaCorriente::setApellidos(std::string ape) { apellidos = ape; }
std::string CuentaCorriente::getApellidos() const { return apellidos; }

void CuentaCorriente::setDireccion(std::string dir) { direccion = dir; }
std::string CuentaCorriente::getDireccion() const { return direccion; }

void CuentaCorriente::setTelefono(std::string tel) { telefono = tel; }
std::string CuentaCorriente::getTelefono() const { return telefono; }

void CuentaCorriente::setSaldo(double sal) { saldo = sal; }
double CuentaCorriente::getSaldo() const { return saldo; }

// Método para retirar dinero de la cuenta
void CuentaCorriente::retirarDinero(double cantidad) {
    if (cantidad > 0 && saldo >= cantidad) {
        saldo -= cantidad;
    } else {
        std::cout << "Operación no válida." << std::endl;
    }
}

// Método para ingresar dinero a la cuenta
void CuentaCorriente::ingresarDinero(double cantidad) {
    if (cantidad > 0) {
        saldo += cantidad;
    } else {
        std::cout << "Operación no válida." << std::endl;
    }
}

// Método para consultar los datos de la cuenta
void CuentaCorriente::consultarCuenta() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Apellidos: " << apellidos << std::endl;
    std::cout << "Dirección: " << direccion << std::endl;
    std::cout << "Teléfono: " << telefono << std::endl;
    std::cout << "Saldo: " << saldo << std::endl;
}

// Método para verificar si el saldo es negativo
bool CuentaCorriente::saldoNegativo() const {
    return saldo < 0;
}
