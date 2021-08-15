// Single Linked List (Deleting the Node at a Particular Position)
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node * link;
}node;

node * create(int data);
node * append(node *, int);
node * delete(node * head, int pos, int data);
void print(node *);

int main()
{
    
    return 0;
}

node * create(int data){
    node * new_node = malloc(sizeof(node));
    new_node->data = data;
    new_node->link = NULL;

    return new_node;
}
node * append(node * current, int data){
    current->link = create(data);
    return current->link;
}
void print(node * head){
    node * ptr = head;
    printf("");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    
}
node * delete(node * head, int pos, int data){
    if (head == NULL){
        printf("node is empty");
        return NULL;
    }else if (head->link == NULL){
        printf("This it the Last Node");
        free(head);
        return head;
    }else{

        node * ptr = head;
        while(ptr != NULL){
            
            
        }
    }
}