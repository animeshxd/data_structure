//Single Linked List (Inserting a Node at the Beginning)
#include <stdio.h>
#include <stdlib.h>
#define new malloc(sizeof(node))

typedef struct node{
    int data;
    struct node * link;
}node;

node * add_at_first(node *, int);
int main()
{
    node * head = new;
    head->data = 5;
    head->link = NULL;
    head = add_at_first(head, 4);
    head = add_at_first(head, 3);
    head = add_at_first(head, 2);
    head = add_at_first(head, 1);
    head = add_at_first(head, 0);

    node * ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    
    return 0;
}
node * add_at_first(node * head, int data){
    node * new_node = new;
    new_node->data = data;
    new_node->link = NULL;


    new_node->link = head;
    return new_node;
}
