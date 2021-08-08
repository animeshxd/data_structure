#include <stdio.h>
#include <stdlib.h>
#define new malloc(sizeof(node))

typedef struct node {
    int data;
    struct node * link;
}node;
int print(node *);

int main()
{
    node * head = new;
    head->data = 1;
    head->link = NULL;

    node * current = new;
    current->data = 2;
    current->link = NULL;

    head->link = current;

    current = new;
    current->data = 3;
    current->link = NULL;

    head->link->link = current;

    current = new;
    current->data = 4;
    current->link = NULL;

    head->link->link->link = current;

    print(head);

    return 0;
}

int print(node * head){
    if (head == NULL)
    return -1;

    node  * ptr = head;

    while (ptr != NULL){
        printf(" %d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}

