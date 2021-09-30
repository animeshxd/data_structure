#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *create(int data);
void print(node *head);
void reverse(node **);
int main()
{
    node *head = create(0);
    node *current = head;
    current->next = create(1);
    current->next->next = create(2);
    current->next->next->next = create(3);
    print(head);
    reverse(&head);
    print(head);
    return 0;
}

void reverse(node **head)
{
    node *current, *next, *prev;
    next = NULL;
    prev = NULL;
    current = *head;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}
node *create(int data)
{
    node *new_node = malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
void print(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
