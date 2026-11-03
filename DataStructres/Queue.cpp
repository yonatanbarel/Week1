#include "QUEUE.H"

void initQueue(Queue* q, unsigned int size) {
    q->elements = new unsigned int[size];
    q->size = size;
    q->head = 0;
    q->tail = 0;
    q->count = 0;
}

void cleanQueue(Queue* q) {
    delete[] q->elements;
}

void enqueue(Queue* q, unsigned int newValue) {
    if (isFull(q)) 
    {
        return;
    }
    q->elements[q->tail] = newValue;
    q->tail++;
    q->count++;
}

int dequeue(Queue* q)
{
    int val;
    if (isEmpty(q))
    {
        return -1;
    }
    val = q->elements[q->head];
    q->head++;
    q->count--;
    return val;
}

bool isEmpty(Queue* s)
{
    if (s->count == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isFull(Queue* s)
{
	if (s->count == s->size)
	{
		return true;
	}
	else
	{
		return false;
	}
}