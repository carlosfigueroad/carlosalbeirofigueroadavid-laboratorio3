#ifndef CuentaCorriente_H  // Se verifica si CUENTACORRIENTE_H no está definido para evitar la inclusión múltiple
#define CuentaCorriente_H  // Se define CUENTACORRIENTE_H

#include <string>  // Se incluye la biblioteca string para usar cadenas de texto

// Se declara la clase CuentaCorriente
class CuentaCorriente {
private:  // Se definen las propiedades privadas de la clase
    std::string nombre;
    std::string apellidos;
    std::string direccion;
    std::string telefono;
    double saldo;

public:  // Se definen los métodos públicos de la clase
    CuentaCorriente();  // Constructor por defecto
    CuentaCorriente(std::string nom, std::string ape, std::string dir, std::string tel, double sal);  // Constructor con argumentos
    void setNombre(std::string nom);
    std::string getNombre() const;
    void setApellidos(std::string ape);
    std::string getApellidos() const;
    void setDireccion(std::string dir);
    std::string getDireccion() const;
    void setTelefono(std::string tel);
    std::string getTelefono() const;
    void setSaldo(double sal);
    double getSaldo() const;
    void retirarDinero(double cantidad);
    void ingresarDinero(double cantidad);
    void consultarCuenta() const;
    bool saldoNegativo() const;
};

#endif  // Fin de la definición de CUENTACORRIENTE_H
