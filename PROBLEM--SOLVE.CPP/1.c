#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL, *newNode, *temp;
    int n, i, value;

    // 1. Create a singly linked list
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("Enter data: ");
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }

    // Display original list
    printf("\nOriginal List: ");
    temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    // 2. Insert a node at the beginning
    newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("\n\nEnter value to insert at beginning: ");
    scanf("%d", &value);

    newNode->data = value;
    newNode->next = head;
    head = newNode;

    // Display after insertion
    printf("After insertion: ");
    temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    // 3. Delete a node from beginning
    if (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    printf("\nAfter deleting from beginning: ");
    temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    // 4. Delete a node from end
    if (head != NULL)
    {
        if (head->next == NULL)
        {
            free(head);
            head = NULL;
        }
        else
        {
            temp = head;

            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }

            free(temp->next);
            temp->next = NULL;
        }
    }

    printf("\nAfter deleting from end: ");
    temp = head;

    // 5. Display all elements
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}