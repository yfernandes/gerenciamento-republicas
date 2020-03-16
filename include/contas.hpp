#pragma once

#include <iostream>

using namespace std;

struct Contas;

// Constructor

Contas* createContas(
    int mes,
    int aluguel,
    int agua,
    int luz,
    int internet,
    int produtosLimpeza,
    int cestaBasica);

// Getters

int getMes(Contas* conta);
int getAluguel(Contas* conta);
int getAgua(Contas* conta);
int getLuz(Contas* conta);
int getInternet(Contas* conta);
int getProdutosLimpeza(Contas* conta);
int getCestaBasica(Contas* conta);

// Setters

void setMes(Contas* conta, int newMes);
void setAluguel(Contas* conta, int newAluguel);
void setAgua(Contas* conta, int newAgua);
void setLuz(Contas* conta, int newLuz);
void setInternet(Contas* conta, int newInternet);
void setProdutosLimpeza(Contas* conta, int newProdutosLimpeza);
void setCestaBasica(Contas* conta, int newCestaBasica);