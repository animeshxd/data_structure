//add element at certain position same as 12 but better (self)

#include <stdio.h>
#include <stdlib.h>

#define new malloc(sizeof(node))

typedef struct node
{
	int data;
	struct node *link;
} node;

node *append(node *current, int data);
void append_(node * head, int data);
int count(node *head);
node *add_to_first(node *Node, int data);
node *insert(node *head, int pos, int data);

int main()
{

	node *head = new;
	head->data = 1;
	head->link = NULL;

	node *current = head;
	for (int i = 2; i < 11; i++)
		current = append(current, i);
		
	printf("\nNew size of node %d \n", count(head));
	head = insert(head, 3, 66);
	printf("\nNew size of node %d \n", count(head));
	
	node *ptr = head;
	while (ptr != NULL)
	{
		printf(" %d ", ptr->data);
		ptr = ptr->link;
	}

	return 0;
}

node *append(node *current, int data)
{
	node *new_node = new;
	new_node->data = data;
	new_node->link = NULL;

	current->link = new_node;
	return new_node;
}
void append_(node * head, int data){
	
	node *new_node = new;
	new_node->data = data;
	new_node->link = NULL;

	node *ptr = head;
	while (ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = new_node;
}

int count(node *head)
{
	node *ptr = head;
	int count = 0;
	while (ptr != NULL)
	{
		++count;
		ptr = ptr->link;
	}
	return count;
}
node *add_to_first(node *Node, int data)
{
	node *new_node = new;
	new_node->data = data;

	new_node->link = Node;
	Node = new_node;
	return new_node;
}

node *insert(node *head, int pos, int data)
{
	int total = count(head);
	// printf(" %d \n", total);
	if (total > pos && pos != 0)
	{
		node *ptr = head;
		for (int i = 0; i < pos - 1; i++)
		{
			ptr = ptr->link;
		}
		ptr->link = add_to_first(ptr->link, data);
		//new_node->link = ptr->link;
		//ptr->link = new_node
		return head;
	}
	else if (pos == 0 && pos != total)
	{
		return add_to_first(head, data);
	}
	else
	{
		append_(head, data);
		return head;
	}
}
