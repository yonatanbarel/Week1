#include "LinkedList.h"

void initList(LinkedList* list)
{
    list->head = 0;
}

void insertFirst(LinkedList* list, unsigned int value)
{
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = list->head;
    list->head = newNode;
}

int removeFirst(LinkedList* list)
{
    if (list->head == 0)
    {
        return -1;
    }
    Node* temp = list->head;
    int val = temp->value;
    list->head = list->head->next;
    delete temp;
    return val;
}

bool isEmpty(LinkedList* list)
{
    return list->head == 0;
}

void freeList(LinkedList* list)
{
    while (!isEmpty(list))
    {
        removeFirst(list);
    }
}