#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node {
    unsigned int value;
    Node* next;
} Node;

typedef struct LinkedList {
    Node* head;
} LinkedList;

void initList(LinkedList* list);
void insertFirst(LinkedList* list, unsigned int value);
int removeFirst(LinkedList* list);
bool isEmpty(LinkedList* list);
void freeList(LinkedList* list);

#endif