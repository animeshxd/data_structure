//Reverse a linked list using recursion

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};
typedef struct Node node;

node * create(int data);
void print(node * head);
void reverse(node ** head, node * next);

int main(){
    node * head = create(0);
    node * current = head;
    for (int i = 1; i < 11; i++){
        current->next = create(i);
        current = current->next;
    }
    print(head);
    reverse(&head, head);
    print(head);
    return 0;
}
node * create(int data){
    node * new_node = malloc(sizeof(node));
    new_node->next = NULL;
    new_node->data = data;
    return new_node;
}
void print(node * head){
    while(head != NULL){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
void reverse(node ** head, node * p){
    if (p->next == NULL){
        *head = p;
        return;
    }
    reverse(head, p->next);
    // node * last = p->next;
    // last->next = p;
    p->next->next = p;
    p->next = NULL;
}
