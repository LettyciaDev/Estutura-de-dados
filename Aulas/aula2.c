// Alocação dinâmica com Struct
#include <stdio.h>
#include <stdlib.h>

typedef Struct arraylist{
    int capacity;
    int* values;
    int size;
    int factor;
} ArrayList;


int* Array_Create(int capacity);
void Array_Destroy(ArrayList * array);
void Array_Insert(ArrayList * array, int newValue);
int Array_Get(ArrayList * array, int index);
void Array_Print(ArrayList * array);
void Array_Resize();


int main(){
    int capacity = 2;
    ArrayList* array = Array_Create(capacity);
    Array_Print(array);
    for (int i = 0; i < 3; i++){
        Array_Insert(array, i * 10);
        Array_Print(array);
    }

    Array_Destroy(array);
    return 0;
}

ArrayList* Array_Create(int capacity){
    ArrayList * array = (ArrayList *) malloc(sizeof(ArrayList));
    array->capacity = capacity;
    array->size = 0;
    array->factor = 2;
    array->values = (int*) malloc(sizeof(int) * array->capacity);
    return array;
}

void Array_Destroy(ArrayList* array){
    free(array->values);
    free(array);
}
void Array_Insert(ArrayList * array, int newValue){
    if(array->size == array->capacity){
        Array_Resize(array);
    }
    *(array->values + array->size) = newValue;
    array->size++;
}
void Array_Get(ArrayList * array, int index){
     int value = *(array->values + index);
     return value;
}

void Array_Print(ArrayList* array){
    for (int i = 0; i < array->capacity; i++){
        if( i < array->size){
            printf("%d", *(array->values + i)); // exibe o conteudo da memoria 
        } else{
            printf("x");
        }

        if (i < array->capacity - 1){
            printf(" ");
        }
    }
    printf("\n");
}

void Array_Resize(ArrayList * array){
    int newCapacity = array->capacity * array->factor; // Multiplica a capacidade pelo fator
    int* newValues = (int*) malloc(sizeof(int) * capacity); // Novo array maior

    // Copia os valores antigos para o novo array
    for (int i = 0; i < array->size; i++) {
        *(newValues + i) = *(array->values + i);
    }

    free(array->values); // Libera o antigo array
    array->capacity = newCapacity;
    array->values = newValues; // Atualiza o ponteiro para o novo array
}
