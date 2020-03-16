#include <faxina.hpp>
#include <tarefas.hpp>

struct Faxina {
    Tarefas** tarefa;
    unsigned int numTarefas;
    string diasDaSemana; // Separado por virgulas
};

//  Constructor
Faxina* createFaxina(Tarefas** Tarefa, int numTarefas, string dias)
{
    Faxina* faxininha = new Faxina;
    faxininha->tarefa = Tarefa;
    faxininha->numTarefas = numTarefas;
    faxininha->diasDaSemana = dias;
    return faxininha;
};

//  Getters
Faxina getNumTarefas(Faxina* faxina);

//  Functions
void createFaxinaSpreadsheet(Faxina* faxina, string comeco){

};
