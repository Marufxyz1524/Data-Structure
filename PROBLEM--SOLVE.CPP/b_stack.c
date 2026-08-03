#include <stdio.h>

int stack[100];
int top = -1;

void push(int value)
{
    stack[++top] = value;
}

void pop()
{
    top--;
}

int Top()
{
    return stack[top];
}

int empty()
{
    return top == -1;
}

int size()
{
    return top + 1;
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main()
{
    push(10);
    push(20);
    pop();
    push(30);
    push(40);

    display();

    return 0;
}