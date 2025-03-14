#include <stdio.h>

typedef struct stack Stack;

Stack* createStack(Stack* stc);

void destroyStack(Stack* stc);

bool is_empty(Stack* stc);

bool is_full(Stack* stc);

void push(Stack* stc, int value);

void pop(Stack* stc, int value);

void peek(Stack* stc, int value);