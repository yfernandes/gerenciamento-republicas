#pragma once

#include <cstring>
#include <iostream>

using namespace std;

struct Tarefas;

// Constructors

Tarefas* createTarefa(__cxx11::string comodo, int dificuldade);

// Getters

string getComodo(Tarefas* tarefa);
int getDificuldade(Tarefas* tarefa);

// Setters

void setComodo(Tarefas* tarefa, string newComodo);
void setDificuldade(Tarefas* tarefa, int newDificuldade);

// Deconstructors

// Functions

// void saveAllMembersToCsv(string filename, Members** membros, int size);
