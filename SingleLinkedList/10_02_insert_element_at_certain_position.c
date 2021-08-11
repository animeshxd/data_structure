#include <stdio.h>
#include <stdlib.h>
#define  new(data_type) malloc(sizeof(data_type))
#define __NEWLINE__ printf("\n")

typedef struct node{
	int data;
	struct node * link;
}node;
node * append(node *, int);
void Print();
void insert(int,int);


node * head = NULL;
int main(){
	node * current = head;
	for (int i=0; i<10; i++) {
	current = append(current, i);

	}
	Print();
	insert(10, 66);
	insert(10, 67);
	Print();


	return 0;
}
node * append(node * current, int data){

	node * new_node = new(node);
	new_node->data = data;
	new_node->link = NULL;

	if (current == NULL){
		head = new_node;
		return head;
	}

	current->link = new_node;
	return new_node;

}
void Print(){
	node * ptr = head;
	__NEWLINE__;
	while (ptr != 0){
		printf(" %d", ptr->data);
		ptr = ptr->link;
	}
	__NEWLINE__;
}

void insert(int pos, int data){
	node * new_node = new(node);
	new_node->data = data;
	new_node->link = NULL;
	if(pos == 0){
		new_node->link = head;
		head = new_node;
		return;
	}
	
	node * ptr = head;
	int i = 0;
	while(ptr != NULL){
		if (i == pos - 1){
			new_node->link = ptr->link;
			// new node link = next node addr
			ptr->link = new_node;
			//pre node link = new node addr
			break;
		}
		i++;
		ptr = ptr->link; 
	}


}
