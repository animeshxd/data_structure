//Print elements of a linked list in forward/reverse using recurtion
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
void RecursivePrint(node * head);
void RecursivePrintReverse(node * head);
int main(){
    node * head = create(0);
    node * current = head;
    for (int i = 1; i < 11; i++){
        current->next = create(i);
        current = current->next;
    }
    print(head);
    // RecursivePrint(head);
    printf("\n");
    RecursivePrintReverse(head);
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
void RecursivePrint(node * head){
    if (!head) return;
    printf("%d ", head->data);
    RecursivePrint(head->next);
}
void RecursivePrintReverse(node * head){
    if (!head) return;
    RecursivePrintReverse(head->next);
    printf("%d ", head->data);
}