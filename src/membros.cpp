#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

enum Status {
    calouro,
    normal,
    fixo,
    primeiroMes,
    ultimoMes
};

struct Members {
    string nome;
    unsigned long int RG;
    unsigned long int CPF;
    string nomeResponsavel;
    unsigned long int telefoneResponsavel;
};

// Constructor

Members* createMember(string nome,
    unsigned long int RG,
    unsigned long int CPF,
    string nomeResponsavel,
    unsigned long int telefoneResponsavel)
{
    Members* morador = new Members;

    morador->nome = nome;
    morador->RG = RG;
    morador->CPF = CPF;
    morador->nomeResponsavel = nomeResponsavel;
    morador->telefoneResponsavel = telefoneResponsavel;

    return morador;
};

// Getters

string getMemberName(Members* member)
{
    return member->nome;
};

int getMemberRg(Members* member)
{
    return member->RG;
};

int getMemberCpf(Members* member)
{
    return member->CPF;
};

string getMemberNomeResponsavel(Members* member)
{
    return member->nomeResponsavel;
};

int getMemberTelResponsavel(Members* member)
{
    return member->telefoneResponsavel;
};

// Setters

void setMemberName(Members* member, string newName)
{
    member->nome = newName;
};

void setMemberRg(Members* member, int newRG)
{
    member->RG = newRG;
};

void setMemberCpf(Members* member, int newCPF)
{
    member->CPF = newCPF;
};

void setMemberNomeResponsavel(Members* member, string newNomeResponsavel)
{
    member->nomeResponsavel = newNomeResponsavel;
};

void setMemberTelResponsavel(Members* member, int newTelefoneResponsavel)
{
    member->telefoneResponsavel = newTelefoneResponsavel;
}

// Functions

void saveAllMembersToCsv(string fileName, Members** membros, int size)
{
    ofstream fileStream;
    fileStream.open(fileName, ifstream::out);

    fileStream << "Nome, ";
    fileStream << "RG, ";
    fileStream << "CPF, ";
    fileStream << "Nome Responsavel, ";
    fileStream << "Telefone Responsavel" << endl;

    for (int i = 0; i < size; i++) {
        fileStream << membros[i]->nome << ", ";
        fileStream << membros[i]->RG << ", ";
        fileStream << membros[i]->CPF << ", ";
        fileStream << membros[i]->nomeResponsavel << ", ";
        fileStream << membros[i]->telefoneResponsavel << endl;
    }

    fileStream.close();
};

Members** loadAllMembersFromCsv(string fileName)
{

    ifstream fileStream;
    fileStream.open(fileName, ifstream::in);

    string unused;
    int numLines = 0;

    while (getline(fileStream, unused)) {
        numLines++;
    };

    fileStream.clear();
    fileStream.seekg(0, ios_base::beg);
    getline(fileStream, unused);

    Members** membros = new Members*[numLines - 1];

    for (int i = 0; i < numLines - 1; i++) {
        membros[i] = new Members;
        char aux = ' ';
        string nome = "", nomeResponsavel = "";
        unsigned long int RG = 0, CPF = 0, telResp = 0;

        fileStream.get(aux);

        while (aux != ',') {
            nome += aux;
            fileStream.get(aux);
        };

        fileStream.get(aux);
        fileStream.get(aux);

        while (aux != ',') {
            RG *= 10;
            RG += ((int)aux - 48);
            fileStream.get(aux);
        };

        fileStream.get(aux);
        fileStream.get(aux);

        while (aux != ',') {
            CPF *= 10;
            CPF += ((int)aux - 48);
            fileStream.get(aux);
        };

        fileStream.get(aux);

        while (aux != ',') {
            nomeResponsavel += aux;
            fileStream.get(aux);
        }

        fileStream.get(aux);
        fileStream.get(aux);

        while (aux != '\n') {
            telResp *= 10;
            telResp += ((int)aux - 48);
            fileStream.get(aux);
        }

        membros[i] = createMember(nome, RG, CPF, nomeResponsavel, telResp);

        std::cout
            << membros[i]->nome << ", "
            << membros[i]->RG << ", "
            << membros[i]->CPF << ", "
            << membros[i]->nomeResponsavel << ", "
            << membros[i]->telefoneResponsavel << endl;
    };

    fileStream.close();
    return membros;
};
