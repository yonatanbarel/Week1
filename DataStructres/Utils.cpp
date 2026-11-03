#include "Utils.h"
#include "Stack.h"
#include <iostream>

void reverse(int* nums, unsigned int size)
{
    Stack myStack;
    initStack(&myStack);

    for (unsigned int count = 0; count < size; ++count)
    {
        push(&myStack, nums[count]);
    }

    for (unsigned int count = 0; count < size; ++count)
    {
        nums[count] = pop(&myStack);
    }

    cleanStack(&myStack);
}

int* reverse10()
{
    int* array10 = new int[10];

    for (int i = 0; i < 10; ++i)
    {
        std::cin >> array10[i];
    }

    reverse(array10, 10);

    return array10;
}