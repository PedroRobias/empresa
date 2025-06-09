#include <iostream>
#include <string>
#include <vector>
#include "Classes/funcionario.h"
#include "Classes/desenvolvedor.h"
#include "Classes/gerente.h"
#include "Classes/estagiario.h"

using namespace std;

int main() {
    funcionario* funcionarios[10];
    int count = 0;
    int quantos;

    cout << "Quantos funcionarios deseja cadastrar? (min 6, max 10):";
    cin >> quantos;
    cout << endl;
    
    //Verificar quantidade a ser cadastrada
    if (quantos < 6 || quantos > 10){
        while (quantos < 6 || quantos > 10){
        cout << "Quantidade invalida, tente de novo.\n";
        cout << "Quantos funcionarios deseja cadastrar? (min 6, max 10):";
        cin >> quantos;
        cout << endl;
        }
    }

    //Loop para cadastro
    while (count < quantos) {
    
        cout << "Escolha o tipo (1 = Desenvolvedor, 2 = Gerente, 3 = Estagiario): ";
        int tipo;
        cin >> tipo;

        //Cadastrar desenvolvedor
        if (tipo == 1) {
            desenvolvedor* d = new desenvolvedor();

            int id, projetos;
            string nome;
            float salario;

            cout << "ID: "; cin >> id;
            cout << "Nome: "; cin.ignore(); getline(cin, nome);
            cout << "Salario base: "; cin >> salario;
            cout << "Projetos: "; cin >> projetos;

            d->setId(id);
            d->setNome(nome);
            d->setSalarioBase(salario);
            d->setQuantidadeDeProjetos(projetos);
            d->calcularSalarioFinal();

            funcionarios[count] = d;
        }
        //Cadastrar gerente
        else if (tipo == 2) {
            gerente* g = new gerente();

            int id;
            string nome;
            float salario, bonus;

            cout << "ID: "; cin >> id;
            cout << "Nome: "; cin.ignore(); getline(cin, nome);
            cout << "Salario base: "; cin >> salario;
            cout << "Bonus: "; cin >> bonus;

            g->setId(id);
            g->setNome(nome);
            g->setSalarioBase(salario);
            g->setBonusMensal(bonus);
            g->calcularSalarioFinal();

            funcionarios[count] = g;
        }
        //Cadastrar estagiario
        else if (tipo == 3) {
            estagiario* e = new estagiario();

            int id, horas;
            string nome;
            float salario;

            cout << "ID: "; cin >> id;
            cout << "Nome: "; cin.ignore(); getline(cin, nome);
            cout << "Salario base: "; cin >> salario;
            cout << "Horas trabalhadas: "; 
            cin >> horas;
            //Verificar quantidade de horas trabalhadas
            if (horas < 0 || horas > 160){
            while (horas < 0 || horas > 160){
            cout << "Quantidade invalida, tente de novo.\n";
            cout << "Horas trabalhadas:"; 
            cin >> horas;
            cout << endl;
        }
    }

            e->setId(id);
            e->setNome(nome);
            e->setSalarioBase(salario);
            e->setHorasTrabalhadas(horas);
            e->calcularSalarioFinal();
            funcionarios[count] = e;
        }
        else {
            cout << "Tipo invalido, tente de novo.\n";
            continue;
        }

        count++;
        cout << endl;
    }

    //Mostrar funcionarios cadastrado
    cout << "\n---- Funcionarios cadastrados ----\n";
    for (int i = 0; i < count; i++) {
        funcionarios[i]->exibirInformacoes();
        printf("\n");
        delete funcionarios[i];  // liberar memória logo após mostrar
    }

     return 0;
}


