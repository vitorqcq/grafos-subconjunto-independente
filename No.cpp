#include "No.h"
#include <stdio.h>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

No::No(int i)
{
    id=i;
    grau=0;
    visitado=false;
}

No::~No()
{

}

int No::getGrau()
{
    return grau;
}

void No::setGrau(int val)
{
    grau = val;
}

int No::getPeso()
{
    return peso;
}

void No::setPeso(int val)
{
    peso = val;
}

int No::getVisitado()
{
    return visitado;
}

void No::setVisitado(bool val)
{
    visitado = val;
}

vector<No*> No::getAdjacentes() {
    return this->nosAdjacentes;
}

bool No::verificaAdjacencia(No *no)
{
    vector<No*> adjacentes = this->getAdjacentes();
    int contador = count(adjacentes.begin(), adjacentes.end(), no);
    return (contador == 1);
}

void No::adicionaNoAdjacente(No *no , bool direcionado)
{
    if(!this->verificaAdjacencia(no)){
        if(direcionado)
        {
        nosAdjacentes.push_back(no);
        }
        else{
        nosAdjacentes.push_back(no);
        no->nosAdjacentes.push_back(this);
        }
        cout << "No adjacente adicionado!" << endl;
    }
    else {
        cout << "Este no ja eh adjacente!" << endl;
        return;
    }

}
