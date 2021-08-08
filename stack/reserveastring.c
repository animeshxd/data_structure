#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

int top = -1;
int array[MAX];

void push(char c){
    if (top == MAX)
    {
       printf("Error! stack is full");
       return;
    }
    else{
        top++;
        array[top] = c;
    }

}

char TOP(){
    return array[top];
}

void pop(){
    if (top == -1){
        printf("Error! Empty Stack");
        return ;
    }
    else top--;
}

void reverse(char * str, int n)
{
    printf("%s\n",str);
    for (int i = 0; i < n; i++)
    {
       push(str[i]);
    //    printf("%c", TOP());
    }
    for (int i = 0; i < n; i++)
    {
        str[i] = TOP();
        pop();
    //    printf("%c",str[i]);
    }  

}

int main()
{
    char string[] ="Hello";
    reverse(string, strlen(string));
    printf("%s ",string);
    return 0;
}
