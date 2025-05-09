#include <stdbool.h>

typedef struct doublyNode DoublyNode;
typedef struct doublyList DoublyList;

DoublyNode* Node_Create(int val);
DoublyList* List_Create();
void List_Destroy(DoublyList* list);
bool List_IsEmpty(DoublyList* list);
void List_AddFirst(DoublyList* list);