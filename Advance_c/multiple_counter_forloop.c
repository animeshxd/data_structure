#include <stdio.h>
#define __NEWP__ printf("\n*******************\n")
int main(){
	int a = 1, b = 9;

	printf("Value of 'a' is %d\n", a);
	printf("Value of 'b' is %d\n", b);
	
	__NEWP__;	
	for(int i = 0, j = 1; j < 10; i++, j++){
		printf("___________________\n");
		printf("Value of 'i' = %d\n", i);
		printf("Value of 'j' = %d\n", j);
		printf("___________________\n");
	}
	__NEWP__;	
	for(int i = 0, j = 1; i < 11; i++, j++){
		printf("___________________\n");
		printf("Value of 'i' = %d\n", i);
		printf("Value of 'j' = %d\n", j);
		printf("___________________\n");
	}
}
