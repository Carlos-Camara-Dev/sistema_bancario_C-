#include "Conta_banco.h"

int main() {
    Cliente c_1("Ana", "111.111.111-11");
    Cliente c_2("Bruno", "222.222.222-22");
    Cliente c_3("Carla", "333.333.333-33");

    Conta_banco conta_1(1001, c_1, 1000.0);
    Conta_banco conta_2(1002, c_2, 200.0);
    Conta_banco conta_3(1003, c_3, 0.0);

    conta_1.exibir_saldo();
    conta_1.transferir(200, conta_2);
    conta_1.transferir(300, conta_2, conta_3);

    conta_1.exibir_informacoes();
    conta_2.exibir_informacoes();
    conta_3.exibir_informacoes();

    return 0;
}
