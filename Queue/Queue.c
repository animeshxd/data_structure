#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#define MAX 20

int array[MAX];


int front = -1; // First Element 
int rare = -1; // Last Element 

void INSERT(int);
void DELETE();
void DISPLAY();

int main()
{
    char choice;
    int j;
    while (1)
    {
      
    printf("\n1.Insert element to queue  \n");
    printf("2.Delete element from queue  \n");
    printf("3.Display all elements of queue  \n");
    printf("4.Quit \n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    if !(isdigit(choice)){
        break;
    }

    switch(choice){

        case 1:
            // printf("\nEnter the No: ");
            // scanf("%d",&j);
            INSERT(rand());
            break;
            
        case 2:
            DELETE();         
            break;

        case 3:
            DISPLAY();
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

void INSERT(int ele){
    if (rare == MAX -1){
        printf("Queue is Full!");
        return;
    }
    if (front == -1)
    front++;

    rare++;
    array[rare] = ele;

}

void DELETE(){
    //we can't have front >= or == rare 

    // AS if front >= or == rare then we can not delete element 
    // where front position and rare position is same.

    if (rare == -1 || front > rare) 
    {
        printf("Queue is Empty!");
        return;
    }

    printf(" Element %d Deleted at %d ",array[front],front);
    front++;
}

void DISPLAY(){
    if (front == -1){
        printf("Queue is Empty!");
        return;
    }
    printf("Elements are : ");
    for(int i = front; i<= rare;i++)
        printf(" %d ", array[i]);
    printf("\n");
}


