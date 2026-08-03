#include <stdio.h>

int queue[100];
int front = 0, rear = -1;

void push(int value)
{
    rear++;
    queue[rear] = value;
}

void pop()
{
    front++;
}

int Front()
{
    return queue[front];
}

int empty()
{
    return front > rear;
}

int size()
{
    return rear - front + 1;
}

int main()
{
    push(10);
    push(20);

    // JEKHANE DELETE KORTE BOLBE SEKHANE ai function used korte hbe
    pop();
    push(30);
    push(40);
    pop();

    while (!empty())
    {
        printf("%d ", Front());
        pop();
    }

    return 0;
}