#include <stdio.h>
#include "vetor.h"
#include <stdlib.h>
#include <stdbool.h>

// **************** interface privada **************** //
struct vetor{
    int capacity;
    int size;
    float* data;
};

/* função "privada" ==> não está disponível para os usuarios/programas,
os outros arquivos que usam o vertor.h*/

bool isFull(Vetor* v){
    return v->size == v->capacity;
}

// **************** implementação da interface pública **************** //
Vetor* create(int capacity){
    Vetor* v = (Vetor*) malloc(sizeof(Vetor));
    v->size = 0;
    v->capacity = 0;
    v->data = (float*) malloc(sizeof(float) * capacity);

    return v;
}

void destroy(Vetor* v){
    free(v->data);
    free(v);
}

int sizeVetor(Vetor* v){
    return v->size;
}

int capacityVetor(Vetor* v){
    return v->capacity;
}

float atVetor(Vetor* v, int index){
    if(index < 0 || index > v->size){
        fprintf(stderr, "Error in 'at'\n");
        fprintf(stderr, "index [%d] is out bounds: [0,%d]", index, v->size);
        exit(EXIT_FAILURE);
    }

    return *(v->data + index);
}

float getVetor(Vetor* v, int index){
    return *(v->data + index);
}

void appendVetor(Vetor* v, float val){
    if(isFull(v)){
        // fprintf(stderr) serve para imprimir erro
        fprintf(stderr,"Error in 'append'\n");
        printf("Vector is full\n");
        // exit - função para sair
        exit(EXIT_FAILURE); 
    }

    *(v->data + v->size) = val;
    v->size++;
}

void remove(Vetor* v, int index){
    if(index < 0 || index >= v->size){
        fprintf(stderr, "Error in 'at'\n");
        fprintf(stderr, "index [%d] is out bounds: [0,%d]", index, v->size);
        exit(EXIT_FAILURE);
    }

    for(int i = index; i < v->size - 1; i++){
        *(v->data + i) = *(v->data + i + 1);     
    }

    v->size--;
}
void setVetor(Vetor* v, int index, float val){
    if(index < 0 || index > v->size){
        fprintf(stderr, "Error in 'at'\n");
        fprintf(stderr, "index [%d] is out bounds: [0,%d]", index, v->size);
        exit(EXIT_FAILURE);
    }

    *(v->data + index) = val;
}

void printVetor(Vetor* v){
    for(int i = 0; i < v->size; i++){
        printf("%f",*(v->data + i));
    }
}

