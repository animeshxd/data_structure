// Introduction to doubly linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	struct Node * prev;
	struct Node * next;
	int data;
}Node;

Node * create(Node * current, int data);
void print(Node * head);
void revprint(Node * head);

int main(){
	Node * head = create(NULL, 0);
	Node * current = head;

	for(int i = 1; i< 10; i++)
		current = create(current, i);
			
	print(head);
	revprint(head);
	return 0;
}
Node * create(Node * current, int data){

	Node * new_node = malloc(sizeof(Node));
	new_node->data = data;
	new_node->prev = current;
	new_node->next = NULL;
	if (current != NULL)
		current->next = new_node;
	return new_node;
}

void print(Node * head){
	while(head){
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

void revprint(Node * head){

	while(head->next) head = head->next;
	while(head){
		printf("%d ", head->data);
		head = head->prev;
	}
	printf("\n");
}
