//Single Linked List Inserting a Node at a Certain Position (I don't like this)
#include <stdio.h>
#include <stdlib.h>
#define new malloc(sizeof(node))

typedef struct node
{
    int data;
    struct node *link;
} node;

node *append(node *head, int data);
void print(node *head);
void insert(node *, int, int);
int main()
{
    node *head = new;
    head->data = 1;
    head->link = NULL;

    node *current = head;
    for (int i = 2; i <= 10; i++)
    {
        current = append(current, i);
    }
    insert(head, 10, 66);
    print(head);

    return 0;
}
void insert(node *head, int pos, int data)
{
    node *new_node = new;
    new_node->data = data;
    new_node->link = NULL;

    node *ptr = head;
    pos--;
    while (pos != 1)
    {
        printf("\n %d ", ptr->data);
        ptr = ptr->link;
        pos--;
    }
    new_node->link = ptr->link;
    ptr->link = new_node;
}
node *append(node *current, int data)
{
    node *new_node = new;
    new_node->data = data;
    new_node->link = NULL;
    current->link = new_node;
    return new_node;
}
void print(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}
