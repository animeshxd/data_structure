// First in First Out
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node * next;

}Node;

void pop();
void push(int);
void top();
int isEmpty();
void display();

Node * create_node(int data);
Node * head = NULL;

int main(){

    push(1);
    push(2);
    push(3);
    display();
    top();
    pop();
    pop();
    pop();
    pop();

    return 0;
}

void push(int data){
    Node * new_node = create_node(data);
    
    if(head == NULL){
        head = new_node;

    }else{
        new_node->next = head;
        head = new_node;
    }
    printf("\nSuccessfully Inserted %d\n", data);
}

int isEmpty(){
    if (!head) return 1;
    else return 0;
}

void pop(){
    if (isEmpty()){
        printf("\nError: Stack is Empty!\n");
        return;

    }
    else{
        Node * next;
        int data = head->data;
        next = head->next;
        free(head);
        head = next;
        printf("\nSuccessfully Removed %d\n", data);
    }
}
void top(){
    if(head) printf("\nTop Element is %d\n", head->data);
    else printf("\nTop Element is NULL\n");
}

void display(){
    Node * temp = head;
    printf("\nThe elements are: ");
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    
}
Node * create_node(int data){
    Node * new_node = malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
}