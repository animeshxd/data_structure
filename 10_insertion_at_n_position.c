//add element at certain position simplified most

#include <stdio.h>
#include <stdlib.h>
#define new malloc(sizeof(node))
typedef struct node{
	int data;
	struct node * link;
}node;
int main(){
	node * head = new;
	head->data = 1;
	head->link = NULL;

	node * end_element = new;
	end_element->data = 2;
	end_element->link = NULL;

	head->link = end_element;


	node * first_element = new;
	first_element->data = -1;
	first_element->link = NULL;

	first_element->link = head;
	head = first_element;

	node * ptr = head;
	while(ptr != NULL){
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}

	return 0;
}
