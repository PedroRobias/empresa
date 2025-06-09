#ifndef  DESENVOLVEDOR_H 
#define  DESENVOLVEDOR_H

#include <iostream>
#include <string>
#include "funcionario.h"

using namespace std;

// Classe Desenvolvedor:
class desenvolvedor : public funcionario {

//Atributo
private:     
 int quantidadeDeProjetos;

//Metodos
public:
 void setQuantidadeDeProjetos(int quantidadeDeProjetos);
 void calcularSalarioFinal() override;
 void exibirInformacoes() override;
 
    };
#endif 