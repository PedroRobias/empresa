#include <iostream>
#include <string>
using namespace std;
#include "../Classes/funcionario.h"

//Set nome
void funcionario::setNome(string nome){
    this->nome = nome;
};

//Get nome
string funcionario::getNome(){
    return nome;
};

//Set salario base
void funcionario::setSalarioBase(float salarioBase){
    this->salarioBase = salarioBase;
};    

//Get salario base
float funcionario::getSalarioBase(){
    return salarioBase;
};

//Set id
void funcionario::setId(int id){
    this->id = id;
};

//Get id
int funcionario::getId(){
    return id;
};

//Exibir informações
void funcionario::exibirInformacoes(){
    cout << "Nome: " << nome << endl;
    cout << "Salario: " << salarioBase << endl;
    cout << "Id: " << id << endl;
};