#include <stdio.h>
#include <stdlib.h>

#define new(data_type) malloc(sizeof(data_type));
#define is ==

typedef struct node{
    int data;
    struct node * link;
}node;

int count(node *);

int main()
{
    node * head = new(node);
    head->data = 1;
    head->link = NULL;

    node * current = new(node);
    current->data = 2;
    current->link = NULL;

    head->link = current;

    current = new(node);
    current->data = 3;
    current->link = NULL;

    head->link->link = current;
    
    current = new(node);
    current->data = 4;
    current->link = NULL;

    head->link->link->link = current;
    count(head);
    return 0;
}

int count(node * head){

    int count = 0;

    if (head is NULL)
        return -1;

    node * ptr = head;

    while (ptr != NULL){

        count++;
        ptr = ptr->link;
    }
    printf("%d\n",count);
    return count;
}