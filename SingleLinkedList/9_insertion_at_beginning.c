#include <stdio.h>
#include <stdlib.h>
#define new malloc(sizeof(node))
typedef struct node
{
    int data;
    struct node *link;
} node;

void insert_at_first(node **, int);
int main()
{
    node *head = new;
    head->data = 6;
    head->link = NULL;

    insert_at_first(&head, 1);
    insert_at_first(&head, 2);
    insert_at_first(&head, 3);
    insert_at_first(&head, 4);
    insert_at_first(&head, 5);

    node  * ptr = head;

    while (ptr != NULL)
    {
       printf(" %d ", ptr->data);
       ptr = ptr->link;
    }
    
    return 0;
}
void insert_at_first(node **head, int data)
{

    node *new_node = new;
    new_node->data = data;
    new_node->link = NULL;

    new_node->link = *head;
    *head = new_node;

}
