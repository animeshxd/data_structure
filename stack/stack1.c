#include <stdio.h>
#include <stdlib.h>
#define max 10
int top = -1;
int arr[max];

void push(int);
void pop();
void print();
void Top();

int main()
{
    char choice;
    int j;
    while (1)
    {
      
    printf("\n1.Insert element to stack  \n");
    printf("2.Delete element from stack  \n");
    printf("3.Display all elements of stack  \n");
    printf("4.Quit  \n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    switch(choice){

        case 1:
            printf("\nEnter the No: ");
            scanf("%d",&j);
            push(j);
            break;

        case 2:
            pop();         
            break;

        case 3:
            print();
            break;

        case 4:
            exit(1);
            break;

        default:
            continue;
    }

    }


    return 0;
}
void print()
{
    if (top == -1)
    {
        printf("Error: Stack is Empty\n");
        return;
    }
    printf("\n Elements Are: ");
    for (int i = 0; i <= top; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}
void push(int a)
{

    if (top == max - 1)
    {
        printf("Error: Failed! Stack Overflow\n");
        return;
    }
    top++;
    arr[top] = a;
}

void pop()
{
    if (top == -1)
    {
        printf("Error: Failed! Stack is Empty\n");
        return;
    }

    top--;
    printf("Popped Element at %d , value : %d", top, arr[top]);
}

void Top()
{
    if (top == -1)
    {
        printf("Error! Stack is Empty\n");
        return;
    }
    printf("Value: %d at Position %d\n", arr[top], top);
}
