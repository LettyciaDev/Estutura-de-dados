#include <stdio.h>
#include "vetor.h"
#include <stdlib.h>

struct vetor{
    int capacity;
    int size;
    float* data;
};

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
    return *(v->data + index);
}

