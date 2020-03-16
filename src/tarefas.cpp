#include <cstring>
#include <iostream>

using namespace std;

struct Tarefas {
public:
    string comodo;
    int dificuldade;
};

// Constructors

Tarefas* createTarefa(__cxx11::string comodo, int dificuldade)
{
    Tarefas* tarefinha = new Tarefas;
    tarefinha->comodo = comodo;
    tarefinha->dificuldade = dificuldade;
    return tarefinha;
};

// Getters

string getComodo(Tarefas* tarefa)
{
    return tarefa->comodo;
};
int getDificuldade(Tarefas* tarefa)
{
    return tarefa->dificuldade;
};

// Setters

void setComodo(Tarefas* tarefa, string newComodo)
{
    tarefa->comodo = newComodo;
};
void setDificuldade(Tarefas* tarefa, int newDificuldade)
{
    tarefa->dificuldade = newDificuldade;
};

// Deconstructors