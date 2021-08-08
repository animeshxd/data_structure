//Single Linked List (Inserting a Node at the Beginning) simplified
#include <stdio.h>
#include <stdlib.h>
#define new malloc(sizeof(node))

typedef struct node
{
    int data;
    struct node * link;

}node;

int main()
{
    node * head = new;
    head->data = 1;
    head->link = NULL;

    node * new_node = new;
    new_node->data = 0;
    new_node->link = NULL;

    new_node->link = head;
    head = new_node;

    new_node = new;
    new_node->data = -1;
    new_node->link = NULL;

    new_node->link = head;
    head = new_node;
    
    node * ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }


    return 0;
}