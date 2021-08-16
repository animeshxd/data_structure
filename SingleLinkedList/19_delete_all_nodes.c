Deleting the Entire Single Linked List
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node * link;
}node;

node * create(int);
void clear(node **);
void append(node **, int);
void print(node *);
int main(){

    node * head = create(0);
    node * current = head;

    for (int i = 1; i < 10; i++){
        append(&current, i);
    }
    print(head);
    clear(&head);
    print(head);

    return 0;
}
node * create(int data){
    node * new_node = malloc(sizeof(node));
    new_node->data = data;
    new_node->link = NULL;
    return new_node;
}
void append(node ** current, int data){
    node * ptr = *current;
    node * new_node = create(data);
     
    ptr->link = new_node;
    *current = new_node;
}
void print(node * head){
    if(head == NULL){
        printf("\nList is empty\n");
        return;
    }
    printf("\n");
    node * ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}
void clear(node ** head){

    node * ptr = *head;
    node * temp = *head;
    if (ptr == NULL){
        *head = NULL;
        return;
    }else if (ptr->link == NULL){
        free(ptr);
        ptr = NULL;
        *head = NULL;
        return;
    }else{
        while (ptr != NULL)
        {
            ptr = ptr->link;
            free(temp);
            temp = ptr;
        }
        *head = ptr;
    }
}