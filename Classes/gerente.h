#ifndef  GERENTE_H 
#define  GERENTE_H

#include <iostream>
#include <string>
#include "funcionario.h"

using namespace std;

// Classe Gerente:
class gerente : public funcionario {

//Atributo
private:     
  float bonusMensal;

//Metodos
public:

  void setBonusMensal(float bonusMensal);
  void calcularSalarioFinal() override;
  void exibirInformacoes() override;

    };
#endif 