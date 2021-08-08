// adding element at end where array is full

#include <stdio.h>
#include <stdlib.h>

int append(int array[], int freepos, int size, int data){
    if (freepos != size){
        array[freepos] = data;
        freepos++;
        return freepos;
    }else return -1;
}

int appendB(int array[], int arrayB[],int size, int data){
    int freepos = size;
    for (int i = 0; i < size; i++){
        arrayB[i] = array[i];
        // printf(" %d = %d \n",arrayB[i], array[i] );
    }
    
    arrayB[freepos] = data;
    freepos++;
    return freepos;
}

int main()
{
    const int size = 10;
    int array[size];
    int n, freepos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // if (size <= n) return -1;
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &array[i]);
    freepos = n;
    freepos = append(array, freepos, size, 1);
    if (freepos == -1){

        int arrayB[size + 2];
        freepos = appendB(array, arrayB, size, 5);
        for (int i = 0; i < freepos; i++){
            printf("%d ", arrayB[i]);
        }

    }
    


    return 0;
}