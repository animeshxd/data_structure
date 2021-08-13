// Inserting Element at certain Position in array

#include <stdio.h>

void insert(int [], int [], int, int, int);
int main()
{
    int array[10];
    int arrayb[11];

    for (int i = 0; i < 10; i++){
        array[i] = i;
    }

    insert(array, arrayb, 66, 10, 5);

    for(int i=0; i< 11; i++){
	    printf("%d ", arrayb[i]);
    }

    return 0;
}

void insert(int array[], int arrayb[], int data, int size, int pos){
	for (int i=0; i < pos; i++){
		arrayb[i] = array[i]; 
	}
	arrayb[pos] = data;

	for(int i=pos, j=pos+1; i < size + 1; i++, j++){
		arrayb[j] = array[i];
	}

}

