//Single Linked List Print Element at certain Position
#include <stdio.h>
#include <stdlib.h>

#define new malloc(sizeof(node))

typedef struct node
{
    int data;
    struct node *link;
} node;

node *append(node *, int);
int print(node *);
int search(int);

node *head = NULL;
int main()
{

    node *current = head;
    for (int i = 0; i < 11; i++)
        current = append(current, i);
    print(head);
    search(1);
    return 0;
}

node *append(node *current, int data)
{
    node *new_node = new;
    new_node->data = data;
    new_node->link = NULL;
    if (current != NULL)
    {
        current->link = new_node;
        return new_node;
    }
    else
    {
        // if head is NULL
        head = new_node;
        return head;
    }
}

int print(node *Head)
{
    if (Head == NULL)
        return -1;
    node *ptr = Head;
    while (ptr != NULL)
    {
        printf(" %d", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}

int search(int pos)
{
    node *ptr = head;
    // for (int i = 0; i <= pos - 1; i++)
    // {
    //     ptr = ptr->link;
    // }
    // printf("\nElement at Index %d = %d", pos, ptr->data);

    int i = 0;
    while(ptr != NULL){
        if (pos == i){
            printf("\nElement at Index %d = %d", pos, ptr->data);
            break;
        }
        i++;
        ptr = ptr->link;
    }
    
}
