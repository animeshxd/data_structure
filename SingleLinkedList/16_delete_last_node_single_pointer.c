// Single Link List: Deleting Last Node using Single Pointer

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node * link;
}node;


node * create(int);
node * append(node *, int);
node * delete(node *);
void print(node *);

int main(){
	node * head = create(0);
	node * current = head;
	for(int i= 1; i< 10; i++){
		current = append(current, i);
	}
	print(head);

	for(int i= 0; i < 12; i++){
		head = delete(head);
		print(head);
	}

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
		printf("\nList is empty! NULL\n");
		return;
	}

	node * ptr = head;
	printf("\n");
	while(ptr != NULL){
		printf("%d ", ptr->data);
		ptr = ptr->link;
			
	}
	printf("\n");
}
node * delete(node * head){
	if(head == NULL) {
		printf("\nNode is empty");
		return NULL;

	}
	else if (head->link == NULL){
		printf("\nThis is last Node\n");
		free(head);
		return NULL;
	}else{

	node * last = head;
	while(last->link->link != NULL){

		last = last->link;

	}
	free(last->link);
	last->link = NULL;
	return head;

}
}

