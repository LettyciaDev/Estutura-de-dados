#include <stdio.h>
#include <stdlib.h>
#include "list.h"


struct doublyNode{
    int val;
    DoublyNode* node;
    DoublyNode* prev;
    DoublyNode* next;
};

struct doublyList{
    DoublyNode* begin;
    DoublyNode* end;
    int size;
}

DoublyNode* Node_Create(int val){
    DoublyNode* node = (DoublyNode*) malloc(sizeof(DoublyNode));
    node->prev = NULL;
    node->next = NULL;
    node->val = val;

    return node;
}

DoublyList* List_Create(){
    DoublyList* list = (DoublyList*) malloc(sizeof(DoublyList));
    list->begin = NULL;
    list->end = NULL;
    list->size = 0;

    return list;
}

void List_Destroy(DoublyList* list){
    DoublyList* l = list;

    DoublyNode* current = list->begin;
    While(current != NULL){
        DoublyNode* next = current->next;
        free(current)
        current = next;
    }

    free(l);
}

bool List_IsEmpty(DoublyList* list){
   return  list->size = 0;
}

void List_AddFirst(DoublyList* list, int val){

    if(List_IsEmpty(list)){
        DoublyNode* node = Node_Create(val);
        list->begin = node;
        list->end = node;
        list->size++;
    } else {
        DoublyNode* node = Node_Create(val);
        node->next = list->begin;
        list->begin->prev = node;
        list->begin = node;
        list->size++;
    }
}