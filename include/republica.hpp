#pragma once

#include <cstring>
#include <iostream>

#include <contas.hpp>
#include <membros.hpp>
#include <tarefas.hpp>

using namespace std;

struct Republicas;

// Constructor

Republicas* createRepublica(Members** moradores, Contas** mes, Tarefas** tarefas);

// Getters
Members* getMember();
Members** getAllMembers();

Contas* getConta();
Contas* getAllContas();

// Setters

// Deconstructor
