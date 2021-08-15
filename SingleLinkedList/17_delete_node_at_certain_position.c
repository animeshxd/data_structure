// Single Linked List (Deleting the Node at a Particular Position)
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node * link;
}node;

node * create(int data);
node * append(node *, int);
node * delete(node * head, int pos);
void print(node *);

int main()
{
    node * head = create(0);
    node * current = head;

    for (int i = 1; i < 10; i++) {
	current = append(current, i);
    }
    print(head);

    head = delete(head, 0);
    print(head);

    for (int i= 1; i<10; i++) {
	head = delete(head, 1);
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
    current->link = create(data);
    return current->link;
}
void print(node * head){
    node * ptr = head;
    printf("\n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    
}
node * delete(node * head, int pos){
    if (head == NULL){
        printf("\nnode is empty\n");
        return NULL;
    }else if (head->link == NULL){
        printf("\nThis it the Last Node\n");
        free(head);
	head = NULL;
        return head;
    }else{

	if(pos == 0){
	    free(head);
	    head = head->link;
	    return head;
	}

        node * ptr = head;
	int i = 0;
        while(ptr != NULL){
	    if (i == pos -1){
		free(ptr->link);
		ptr->link = ptr->link->link;
		return head;
	    }
	    ptr = ptr->link;
	    i++;
		
	}
	return head;
    }
}
