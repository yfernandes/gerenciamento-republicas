#include <cstring>
#include <iostream>

#include <contas.hpp>
#include <membros.hpp>
#include <republica.hpp>
#include <tarefas.hpp>

using namespace std;

struct Republicas {
    Members* moradores;
    Contas* contas;
};

// Constructor

Republicas* createRepublica(Members** moradores, Contas** mes, Tarefas** tarefas);

// Getters

// Setters

// Deconstructor
