#include "Conta_banco.h"
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

Conta_banco::Conta_banco(int numero, Cliente titular, double saldo)
    : numero(numero), titular(titular), saldo(saldo) {}

void Conta_banco::depositar(double valor) {
    if (valor > 0) {
        saldo += valor;
    } else {
        cout << "Erro: valor de depósito inválido." << endl;
    }
}
void Conta_banco::sacar(double valor) {
    if (valor <= 0) {
        cout << "Erro: valor de saque inválido." << endl;
    } else if (valor > saldo) {
        cout << "Erro: saldo insuficiente para saque na conta " << numero << "." << endl;
    } else {
        saldo -= valor;
    }
}
void Conta_banco::transferir(double valor, Conta_banco &conta) {
    if (valor <= 0) {
        cout << "Erro: valor de transferência inválido." << endl;
    } else if (valor > saldo) {
        cout << "Erro: saldo insuficiente para transferência da conta " << numero << "." << endl;
    } else {
        saldo -= valor;
        conta.depositar(valor);
        cout << fixed << setprecision(2);
        cout << "Transferido: R$ " << valor << " da conta " << numero << " para a conta " << conta.numero << endl;
    }
}
void Conta_banco::transferir(double valor, Conta_banco &conta_1, Conta_banco &conta_2) {
    if (valor <= 0) {
        cout << "Erro: valor de transferência inválido." << endl;
    } else if (valor > saldo) {
        cout << "Erro: saldo insuficiente para transferência da conta " << numero << "." << endl;
    } else {
        saldo -= valor;
        double metade = valor / 2.0;
        conta_1.depositar(metade);
        conta_2.depositar(metade);
        cout << fixed << setprecision(2);
        cout << "Transferido: R$ " << metade << " para cada conta (" << conta_1.numero << " e " << conta_2.numero << ") da conta " << numero << endl;
    }
}
void Conta_banco::exibir_saldo() const {
    cout << fixed << setprecision(2);
    cout << "Saldo atual da conta " << numero << ": R$ " << saldo << endl;
}
void Conta_banco::exibir_informacoes() const {
    cout << "Titular: " << titular.get_nome() << ", CPF: " << titular.get_cpf() << endl;
    cout << "Número da Conta: " << numero << ", Saldo: R$ " << fixed << setprecision(2) << saldo << endl;
}
