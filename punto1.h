
#ifndef PUNTO1_H
#define PUNTO1_H

#include <string>

// La clase CuentaCorriente representa una cuenta bancaria con operaciones basicas
class CuentaCorriente {
private:
    // Atributos privados para almacenar informacion de la cuenta
    std::string nombreCliente;
    std::string numeroCuenta;
    double saldo;
    std::string direccion;
    std::string telefono;

public:
    // Constructor por defecto que inicializa los atributos con valores predeterminados
    CuentaCorriente();

    // Metodos para depositar y retirar dinero de la cuenta
    void depositar(double cantidad);
    bool retirar(double cantidad);

    // Metodo para obtener el saldo actual de la cuenta
    double obtenerSaldo() const;

    // Metodo para mostrar informacion de la cuenta
    void mostrarInformacion() const;
};

#endif // PUNTO1_H
