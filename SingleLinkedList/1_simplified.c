#include <stdio.h>
#include <stdlib.h>
typedef struct node //self referential structure
{
    int data;
    struct node *link;
}node;

int main()
{
    node *head = malloc(sizeof(node));
    head->data = 69;
    head->link = NULL;
    printf("%d", head->data);
    printf("%d",head->link);

    node *current = malloc(sizeof(node));
    current->data = 699;
    current->link = NULL;
    head->link = current;

    node *current2 = malloc(sizeof(node));
    current2->data = 6999;
    current2->link = NULL;
    current->link = current2;

    
    return 0;
}
