#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0,i,number;
    printf("Enter a number: ");
    scanf("%d",&number);

    for(i=2;i<=number;i++)
    {
        sum=sum+(i*i);
    }
    printf("the total sum is : %d", sum);

    return 0;
}
