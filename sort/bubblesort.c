#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int array[] = {10, 50, 17, 8, 9, 6, 5, 7, 5, 8, 7, -99, 9, 8, 7, 11, 32, 66};

    printf("sIZE OF array %d\n", sizeof(array) / sizeof(int));
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
        printf("%d ", array[i]);

    printf("\n");

    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
        for (int j = 0; j < sizeof(array) / sizeof(int) - i - 1; j++) // array total - i - 1 required
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j],&array[j+1]);
            }
        }
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

// array total - i - 1 required
/* 
arraytotal - i - 1 required for dublicate input

without arraytotal - i - 1 
- output: 
    10 50 17 8 9 6 5 7 5 8 7 -99 9 8 7 11 32 66 
    -99 5 5 6 7 7 7 8 8 8 9 9 10 11 17 32 50 50

with arraytotal - i - 1 
- output: 
    10 50 17 8 9 6 5 7 5 8 7 -99 9 8 7 11 32 66 
    -99 5 5 6 7 7 7 8 8 8 9 9 10 11 17 32 50 66


*/