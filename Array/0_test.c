#include <Stdio.h>
void test(int[]);
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 10; i++)
        printf(" %d ", array[i]);
    printf("\n");
    printf("%d \n", sizeof(array)/sizeof(array[0]));

    test(array);
    return 0;
}
void test(int array[])
{
    printf("%d \n", sizeof(array)/sizeof(array[0]));
    for (int i = 0; i < 10; i++)
        printf(" %d ", array[i]);
}