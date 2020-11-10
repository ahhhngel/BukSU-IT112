#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d", &num);
    if(num>=0)
    printf("positive");
    else
    printf("negative");
    return 0;
}
