#include <stdio.h>
#include <math.h>
#include "treino1.h"
/*
Arquivo ".C": declaração do tipo de 
dados e implementação das suas funções*/

struct ponto{
    float x;
    float y;
};

// Aloca e retorna um ponto com coordenadas "x" e "y"
Ponto* pto_cria(float x, float y){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if(p != NULL){
        p->x = x;
        p->y = y;
    }

    return p;
}

// Libera a memoria alocada para o ponto
void pto_libera(Ponto* p){
    free(p);
}

// Recupera, por referência, o valor de um ponto
void pto_acessa(Ponto* p, float* x, float* y){
    *x = p->x;
    *y = p->y;
}

// Atribui a um ponto as coordenadas "x" e "y"
void pto_atribui(Ponto* p, float x, float y){
    p->x = x;
    p->y = y;
}

// calcula a distância entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2){
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy);
}