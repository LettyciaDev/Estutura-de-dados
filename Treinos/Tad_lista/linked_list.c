#include "linked_list.h"

typedef struct _snode{
    int val;
    struct _snode *next;
} SNode;

typedef struct _likend_list{
    SNode *begin;
}LinkedList;