#pragma once

#include <cstring>
#include <iostream>

using namespace std;

// enum Status;

struct Members;

// Constructor

Members* createMember(string nome,
    unsigned long int RG,
    unsigned long int CPF,
    string nomeResponsavel,
    unsigned long int telefoneResponsavel);

// Getters

string getMemberName(Members* member);
int getMemberRg(Members* member);
int getMemberCpf(Members* member);
string getMemberNomeResponsavel(Members* member);
int getMemberTelResponsavel(Members* member);

// Setters

void setMemberName(Members* member, string newName);
void setMemberRg(Members* member, int newRG);
void setMemberCpf(Members* member, int newCPF);
void setMemberNomeResponsavel(Members* member, string newNomeResponsavel);
void setMemberTelResponsavel(Members* member, int newTelefoneResponsavel);

// Functions

void saveAllMembersToCsv(string fileName, Members** membros, int size);
Members** loadAllMembersFromCsv(string fileName);