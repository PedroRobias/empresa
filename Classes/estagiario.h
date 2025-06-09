#ifndef  ESTAGIARIO_H 
#define  ESTAGIARIO_H

#include <iostream>
#include <string>
#include "funcionario.h"

using namespace std;

// Classe Estagiario:
class estagiario : public funcionario {

//Atributo
private:   
 int horasTrabalhadas;

//Metodos
public:
 void setHorasTrabalhadas(int horasTrabalhadas);
 void calcularSalarioFinal() override;
 void exibirInformacoes() override;
 

    };
#endif 