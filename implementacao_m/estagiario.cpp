#include <iostream>
#include <string>
using namespace std;
#include "../Classes/estagiario.h"

//Set horas trabalhadas
void estagiario::setHorasTrabalhadas(int horasTrabalhadas){
    this->horasTrabalhadas = horasTrabalhadas;
};

//Calcular salario final
void estagiario::calcularSalarioFinal(){
        this->salarioFinal = salarioBase * (horasTrabalhadas/160.0);
}

//Exibir informações
void estagiario::exibirInformacoes(){
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << nome << endl;
    cout << "Tipo: Estagiário" << endl;
    cout << "Horas Trabalhadas: " << horasTrabalhadas << endl;
    cout << "Salario Base: " << salarioBase << endl;
    cout << "Salario final: " << salarioFinal << endl;
};