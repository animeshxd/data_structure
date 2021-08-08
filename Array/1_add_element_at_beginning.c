#include <stdio.h>
#include <stdlib.h>

void addtofirst(int *, int, int);
int main()
{   const int MAX = 50;
    int array[MAX];
    int n;
    int *ptr;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    if (n > MAX)
        return 0;

    printf("Enter the Elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    // ptr = array;
    // *(ptr+1) = 55;

    printf("Elements are = ");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
    for (int i = 0; i < MAX-n; i++)
        addtofirst(array, n+i, rand());

    printf("\nElements are = ");
    for (int i = 0; i < MAX; i++)
        printf("%d ", array[i]);
    return 0;
}

void addtofirst(int *arr, int n, int data)
{   printf("%d ", data);
    for (int i = n-1; i >= 0; i--) *(arr+i+1) = *(arr+i);
    *arr = data;
}