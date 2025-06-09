#include <iostream>
#include <string>
using std::string;

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class funcionario {

  //Atributos protegidos
  protected:
  string nome;
  float salarioBase;
  float salarioFinal;

  //Atributo privado
  private:
  int id;

  //Metordos
  public:
  virtual ~funcionario() {}
  void setNome(string nome);
  string getNome();
  void setSalarioBase(float salarioBase);     
  float getSalarioBase();
  void setId(int id);
  int getId();
  virtual void exibirInformacoes();        //Metodo virtual
  virtual void calcularSalarioFinal() = 0; //Método virtual puro
};

#endif