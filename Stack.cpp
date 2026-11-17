#include "Stack.h"

void push(Stack* s, unsigned int element)
{
    insertFirst(&(s->list), element);
}

int pop(Stack* s)
{
    return removeFirst(&(s->list));
}

void initStack(Stack* s)
{
    initList(&(s->list));
}

void cleanStack(Stack* s)
{
    freeList(&(s->list));
}

bool isEmpty(Stack* s)
{
    return isEmpty(&(s->list));
}

bool isFull(Stack* s)
{
    return false;
}