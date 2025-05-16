#include <string>

class Cliente {
private:
    std::string nome;
    std::string cpf;

public:
    Cliente(std::string nome, std::string cpf) {
        this->nome = nome;
        this->cpf = cpf;
    }

    std::string getNome() const {
        return nome;
    }

    std::string getCpf() const {
        return cpf;
    }
};
