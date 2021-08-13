// Single Link List: Deleting Last Node
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node * link;
}node;

node * create(int);
node * append(node *, int);

node * delete_last(node *);
void print(node *);

int main(){

	node * head = create(0);
	node * current = head;
	for(int i = 1; i < 11; i++)
		current = append(current, i);
	print(head);
	for(int i = 0; i< 12; i++){
		head = delete_last(head);
		print(head);
	}

	/* print(head); */
	return 0;
}


node * create(int data){
	
	node * new_node = malloc(sizeof(node));
	new_node->data = data;
	new_node->link = NULL;
	return new_node;
}


node * append(node * current, int data){

	node * new_node = create(data);
	current->link = new_node;
	return new_node;

}


void print(node * head){
	if(head == NULL){
		printf("\nList is Empty\n");
		return;
	}
	node * ptr = head;
	printf("\n");
	while(ptr!=NULL){
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
	printf("\n");
}

node * delete_last(node * head){
	node * next = head;
	node * second_last = NULL;

	
	if(next == NULL){

		printf("\nList is empty! NULL\n");
		return NULL;

	}else if (next->link == NULL){
		printf("\nThis is Last Node\n");
		free(head);
		return NULL;

	}else{
		while (next->link != NULL) {
			second_last = next;
			next = next->link;
		}
		free(next);
		next = NULL;
		second_last->link = NULL;
		return head;
	}

} 
