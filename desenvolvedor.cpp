#include <iostream>
#include <string>
using namespace std;
#include "../Classes/desenvolvedor.h"

//Set quantidade de projetos
void desenvolvedor::setQuantidadeDeProjetos(int quantidadeDeProjetos){
    this->quantidadeDeProjetos = quantidadeDeProjetos;
};

//Calcular salario final
void desenvolvedor::calcularSalarioFinal(){
    salarioFinal = salarioBase + (500 * quantidadeDeProjetos);
}

//Exibir informações
void desenvolvedor::exibirInformacoes(){
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << nome << endl;
    cout << "Tipo: Desenvolvedor" << endl;
    cout << "Projetos: " << quantidadeDeProjetos << endl;
    cout << "Salario Base: " << salarioBase << endl;
    cout << "Salario final: " << salarioFinal << endl;
};
