#include <iostream>

#include <contas.hpp>
#include <membros.hpp>
#include <republica.hpp>
#include <tarefas.hpp>

using namespace std;

int main()
{

    // Members** moradores = new Members*[8];
    // // Init Members // array ---  Nome ---   RG ------ CPF ------ Resp. -- Tel. Resp.
    // moradores[0] = createMember("Alberto", 203870712, 98572718044, "Igor", 11989999999);
    // moradores[1] = createMember("Brenda", 227919129, 53819028080, "Joao", 11989999999);
    // moradores[2] = createMember("Carlos", 138718167, 11070574007, "Lucas", 11989999999);
    // moradores[3] = createMember("Daniela", 475765011, 58672574010, "Mirna", 11989999999);
    // moradores[4] = createMember("Evandro", 300502102, 41041597002, "Natalia", 11989999999);
    // moradores[5] = createMember("Fernanda", 163125429, 51234963000, "Otavio", 11989999999);
    // moradores[6] = createMember("Gabriel", 169043605, 83849109011, "Patricia", 11989999999);
    // moradores[7] = createMember("Helena", 414819871, 58575830040, "Raquel", 11989999999);

    // Contas** ano2019 = new Contas*[2];
    // ano2019[0] = createContas(1, 1500, 15.71, 250, 150, 80, 120);
    // ano2019[1] = createContas(1, 1500, 15.71, 400, 150, 80, 120);

    Tarefas** tarefa = new Tarefas*[6];
    tarefa[0] = createTarefa("Cozinha", 6);
    tarefa[1] = createTarefa("Sala De Estar", 3);
    tarefa[2] = createTarefa("Sala de Jantar", 2);
    tarefa[3] = createTarefa("Banheiro 1", 5);
    tarefa[4] = createTarefa("Banheiro 2", 4);
    tarefa[5] = createTarefa("Area Externa", 1);

    // Republicas* minhaRepublica = createRepublica(moradores, ano2019, tarefa);

    // saveAllMembersToCsv("./data/membrosOutput.csv", moradores, 8);
    loadAllMembersFromCsv("./data/membros.csv");

    return 0;
};
