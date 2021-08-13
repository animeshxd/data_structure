#include <stdio.h>
#include <stdlib.h>
#define new malloc(sizeof(node))

typedef struct node{
	int data;
	struct node * link;
}node;

node * create(int);
node * append(node *, int);
node * next(node *, int);

void print(node *);

int main(){
	node * head = create(0);
	node * current = head;
	for(int i=1; i< 11; i++){
		current = append(current, i);
	}
	print(head);
	node * NEXT  = head;
	NEXT = next(NEXT, 1);
	
	NEXT = next(NEXT, 1);
	NEXT = next(NEXT, 1);
	NEXT = next(NEXT, 1);
	NEXT = next(NEXT, 1);
	NEXT = next(NEXT, 1);
	NEXT = next(NEXT, 1);
	NEXT = next(NEXT, 1);
	NEXT = next(NEXT, 1);
	NEXT = next(NEXT, 1);
	NEXT = next(NEXT, 1);
	NEXT = next(NEXT, 1);
	NEXT = next(NEXT, 1);
	NEXT = next(NEXT, 1);
	NEXT = next(NEXT, 1);
	NEXT = next(NEXT, 1);
}
node * create(int data){
	node * new_node = new;
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
	node * ptr = head;
	while(ptr != NULL){
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
	printf("\n");
}
node * next(node * Node, int debug){
	if(Node == NULL){
		printf("\nNode is empty! NULL\n");
		return NULL;
	}else{
		if (Node->link != NULL &&  debug == 1)
			printf("\nData is: %d \n", Node->link->data);
		return Node->link;
	}
} 

