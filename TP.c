#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter no.: \n");
    scanf("%d", &a);

    if(a & 1 == 1)
        printf("Odd number\n");

    else
        printf("Even number");

    return 0;
}
