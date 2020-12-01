#include <stdio.h>
#include <stdlib.h>

void main()

{
    int i;
    double sum = 10;
    for(i = 2; i <= 15;)
    {
        sum = sum + sum;

        printf("Total money for day %d is %.2f\n", i, sum);
        i++;
    }

}
