// Single Link List delete first node
#include <stdio.h>
#include <stdlib.h>
#define new malloc(sizeof(node))


typedef struct node {
    int data;
    struct node * link;
}node;

node * append(node *, int);
void print(node *);
node * create(int);
node * delete_first(node *);


int main()
{
    node * head = NULL;
    head = create(0);
    node * current = head;
    for (int i = 1; i < 11; i++){
        current = append(current, i);
    }
    print(head);
    while(head != NULL){
        head = delete_first(head);
        print(head);
    }
    return 0;
}

node * append(node * current, int data){
    node * new_node = create(data);
    current->link = new_node;
    return new_node;
}
void print(node * head){
    node * ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

}
node * create(int data){
    node * new_node = new;
    new_node->data = data;
    new_node->link = NULL;
    return new_node;
}

node * delete_first(node * head){

    if (head == NULL) {
        printf("\nList is empty!");
        return head;
    }

    node * temp = head;
    head = head->link;

    free(temp);
    temp = NULL;
    return head;
}