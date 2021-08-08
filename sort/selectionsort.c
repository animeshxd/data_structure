
/* 

repeat (numOfElements - 1) times

  set the first unsorted element as the minimum

  for each of the unsorted elements

    if element < currentMinimum

      set element as new minimum

  swap minimum with first unsorted position

*/

#include <stdio.h>
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
    printf("sIZE OF array %d\n",size);
    for (int i = 0; i < size; i++) printf("%d ",array[i]);
    printf("\n");

    for (int i = 0; i < size; i++)
    {
        min = i;  // minimum element of unsorted array
        for (int location = i; location < size; location++) //for each element in unsorted list (j = i required )
        {
            if (array[location]<array[min]){ //if element[location] < min element
                min = location;              // set min = element[location]
            }

        }
        swap(&array[i],&array[min]); // swap min with first unsorted array
        
    }
    
     printf("sIZE OF array %d\n",size);
    for (int i = 0; i < size; i++) printf("%d ",array[i]);
    return 0;
}
/* sIZE OF array 18
int location = i required as no need to sort sorted element
without location = i (let location = 0): why sorting the sorted array? No need to do that
    -original : 10 50 17 8 9 6 5 7 5 8 7 -99 9 8 7 11 32 66
    -sorted :   50 17 8 9 6 5 7 5 8 7 10 9 8 7 11 32 66 -99

without location = i:
    -original : 10 50 17 8 9 6 5 7 5 8 7 -99 9 8 7 11 32 66
    -sorted :   -99 5 5 6 7 7 7 8 8 8 9 9 10 11 17 32 50 66


*/