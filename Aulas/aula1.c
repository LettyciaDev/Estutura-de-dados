#include <stdio.h>
#include <stdlib.h>

// estudar heap e stack

int* Array_Create(int capacity);
void Array_Destroy(int* values);
void Array_Insert(int* values,int newValue);
int Array_Get(int* values, int index);
void Array_Print(int* values);

int capacity;
int* values;
int size;
int factor;

int main(){
    capacity = 2;
    size = 0;
    factor = 2;
    values = Array_Create(capacity);
    for (int i = 0; i < 3; i++){
        Array_Insert(values, i * 10);
        Array_Print(values);
    }

    Array_Destroy(values);
    return 0;
}

int* Array_Create(int capacity){
    int* values = (int*) malloc(sizeof(int) * capacity);
    return values;
}

void Array_Destroy(int* values){
    free(values);
}
void Array_Insert(int* values, int newValue){
    if(size == capacity){
        Array_Resize();
    }
    *(value + size) = newValue;
    size++;
}
void Array_Get(int* values, int index){
     int value = *(values + index);
     return value;
}

void Array_Print(int* values){
    for (int i = 0; i < capacity; i++){
        if( i < size){
            printf("%d", *(values + i)); // exibe o conteudo da memoria 
        } else{
            printf("x");
        }

        if (i < capacity - 1){
            printf(" ");
        }
    }
    printf("\n");
}