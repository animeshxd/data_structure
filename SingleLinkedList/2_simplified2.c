#include <stdio.h>
#include <stdlib.h>

typedef struct node //self referential struct
{
    int data;
    struct node *link;
}node;

int main()
{   
    node *head = malloc(sizeof(node));
    head->data = 40;
    head->link = NULL;

    node *current = malloc(sizeof(node)); 
    current->data = 41;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(node));
    current->data = 42;
    head->link->link = current;

    current = malloc(sizeof(node)); 
    current->data = 43;
    current->link = NULL;
    head->link->link->link = current;


    
    return 0;
}