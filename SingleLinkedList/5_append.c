#include <stdio.h>
#include <stdlib.h>
#define new malloc(sizeof(node))

typedef struct node {
    int data;
    struct node * link;
}node;

int append(node *, int);
int print(node *);

int main()
{
    node * head = new;
    head->data = 1;
    head->link = NULL;

    append(head, 2);
    append(head, 3);
    append(head, 4);
    append(head, 5);
    append(head, 6);
    append(head, 7);
    print(head);

    return 0;
}

int append(node * head, int data){

    node * temp = new;

    temp->data = data;
    temp->link = NULL;

    while(head->link != NULL){
        head = head->link;
    }
    head->link = temp;
    return 0;
}

int print(node * head){

    node * ptr = head;
    if (head == NULL)
        return -1;
    while (ptr != NULL)
    {
        printf(" %d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}