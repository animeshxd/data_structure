// adding element at end where we have free positions

#include <stdio.h>
#include <stdlib.h>
int append(int [], int, int);

int main()
{   
    const int size = 10;
    int array[size];
    int n, freepos;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    if(size <= n) return -1;

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    freepos = n;
    freepos = append(array, freepos, 1);
    freepos = append(array, freepos, 2);
    freepos = append(array, freepos, 3);
    
    // printf("%d", array[n]);
    for (int i = 0; i < freepos; i++) printf(" %d", array[i]);

    return 0;
}
int append(int array[], int freepos, int data){
    array[freepos] = data;
    freepos++;
    return freepos;
}