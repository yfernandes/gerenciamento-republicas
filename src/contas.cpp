#include <iostream>

using namespace std;

struct Contas {
    int mes;
    int aluguel;
    int agua;
    int luz;
    int internet;
    int produtosLimpeza;
    int cestaBasica;
};

// Constructor
Contas* createContas(
    int mes,
    int aluguel,
    int agua,
    int luz,
    int internet,
    int produtosLimpeza,
    int cestaBasica)
{
    Contas* contaDoMes = new Contas;

    contaDoMes->mes = mes;
    contaDoMes->aluguel = aluguel;
    contaDoMes->agua = agua;
    contaDoMes->luz = luz;
    contaDoMes->internet = internet;
    contaDoMes->produtosLimpeza = produtosLimpeza;
    contaDoMes->cestaBasica = cestaBasica;

    return contaDoMes;
};

// Getters

int getAluguel(Contas* conta)
{
    return conta->aluguel;
};
int getAgua(Contas* conta)
{
    return conta->agua;
};
int getLuz(Contas* conta)
{
    return conta->luz;
};
int getInternet(Contas* conta)
{
    return conta->internet;
};
int getProdutosLimpeza(Contas* conta)
{
    return conta->produtosLimpeza;
};
int getCestaBasica(Contas* conta)
{
    return conta->cestaBasica;
};

// Setters

void setAluguel(Contas* conta, int newAluguel)
{
    conta->aluguel = newAluguel;
};
void setAgua(Contas* conta, int newAgua)
{
    conta->agua = newAgua;
};
void setLuz(Contas* conta, int newLuz)
{
    conta->agua = newLuz;
};
void setInternet(Contas* conta, int newInternet)
{
    conta->agua = newInternet;
};
void setProdutosLimpeza(Contas* conta, int newProdutosLimpeza)
{
    conta->agua = newProdutosLimpeza;
};
void setCestaBasica(Contas* conta, int newCestaBasica)
{
    conta->agua = newCestaBasica;
};