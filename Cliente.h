#include <string>
using namespace std;

class Cliente {
private:
   string nome;
   string cpf;
public:
    Cliente(string nome,string cpf) {
        this->nome = nome;
        this->cpf = cpf;
    }
   string get_nome() const {
        return nome;
    }
   string get_cpf() const {
        return cpf;
    }
};
