#ifndef CONTA_BANCO_H
#define CONTA_BANCO_H

#include "Cliente.h"

class Conta_banco {
private:
    int numero;
    double saldo;
    Cliente titular;
public:
    Conta_banco(int numero, Cliente titular, double saldo = 0.0);
    void depositar(double valor);
    void sacar(double valor);
    void transferir(double valor, Conta_banco &conta);
    void transferir(double valor, Conta_banco &conta_1, Conta_banco &conta_2);
    void exibir_saldo() const;
    void exibir_informacoes() const;
};

#endif
