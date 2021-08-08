#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char const *argv[])
{
    int array[] = {10,50,17,8,9,6,5,7,5,8,7,-99,9,8,7,11,32,66};
    int min;
    int size = sizeof(array)/sizeof(int);

    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);

    }
    for (int i = 0; i < size; i++)
    {
        min = i;
        for (int j = i; j < size; j++)
        {
            if (array[j]<array[min])
            {
                min = j;
            }
            
        }
        swap(&array[i],&array[min]);

    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
     printf("%d ",array[i]);   
    }
    
    
    return 0;
}
