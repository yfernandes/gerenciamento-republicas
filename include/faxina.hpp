#pragma once
#include <tarefas.hpp>

typedef struct Faxina faxina;

//  Constructor
Faxina* createFaxina(Tarefas** Tarefa, int numTarefas);

//  Getters
Faxina getNumTarefas(Faxina* faxina);

//  Functions
void createFaxinaSpreadsheet(Faxina* faxina);