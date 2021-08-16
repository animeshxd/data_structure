// Single Linked list (Delete Node at certain Position using pointer)
#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    int data;
    struct node * link;
}node;

node * create(int);
void append(node **, int);
void print(node *);
void delete(node **, int);

int main(){
    node * head = create(0);
    node * current = head;
    for(int i= 1; i< 10; i++){
	append(&current, i);
    }
    print(head);
    delete(&head, 9);
    print(head);
    return 0;
}

node * create(int data){

    node * new_node = malloc(sizeof(node));
    new_node->data = data;
    new_node->link = NULL;
    return new_node;
}

void  append(node ** current, int data){

    node * ptr = *current;
    node * new_node = create(data);
    ptr->link = new_node;
    *current = new_node;
}

void print(node * head){

    printf("\n");
    if (head == NULL){
	printf("\nNode is empty! ERROR\n");
    }else{
	node * ptr = head;
	while(ptr != NULL){
	    printf("%d ", ptr->data);
	    ptr = ptr->link;
	}
    }
    printf("\n");
}

void delete(node ** head, int pos){
    
    node * _head = *head;
    node * ptr = *head;
    node * save = NULL;
    
    if (_head == NULL){
	printf("\nNode is empty\n");
	return;
    }else if (pos == 0){

	node * save = _head->link;
	*head  = _head->link;
	free(save);
	save = NULL;
	return;

    }else{
	int i = 0;
	while(ptr != NULL){
	    if(i == pos -1){
		save = ptr->link;
		ptr->link = ptr->link->link;
		free(save);
		save = NULL;
	    }
	    ptr = ptr->link;
	    i++;


	}

    }

}
