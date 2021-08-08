#include <stdio.h>
#include <stdlib.h>
#define new malloc(sizeof(node))

typedef struct node{
    int data;
    struct node * link;
}node;
node * append(node *, int);
int main()
{
    node * head = new;
    head->data = 1;
    head->link = NULL;
    node * current = head;
    current = append(current, 2);
    current = append(current, 3);

    printf("%d", head->link->data);
    printf(" %d ", head->link->link->data);
    return 0;
}
node * append(node * current, int data){
    node * temp = new;
    temp->data = data;
    temp->link = NULL;
    current->link = temp;
    return temp;
}
