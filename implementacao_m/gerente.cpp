#include <iostream>
#include <string>
using namespace std;
#include "../Classes/gerente.h"

//Set bonus mensal
void gerente::setBonusMensal(float bonusMensal){
    this->bonusMensal = bonusMensal;
}

//Calcular salario final
void gerente::calcularSalarioFinal(){
    this->salarioFinal = salarioBase + bonusMensal;
}

//Exibir informações
void gerente::exibirInformacoes(){
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << nome << endl;
    cout << "Tipo: Gerente " << endl;
    cout << "Bônus: " << bonusMensal << endl;
    cout << "Salario Base: " << salarioBase << endl;
    cout << "Salario final: " << salarioFinal << endl;
}
;

