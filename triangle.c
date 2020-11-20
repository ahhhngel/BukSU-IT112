#include <stdio.h>
#include <stdlib.h>

 int main ()
{
    float g, e, l, flag = 0;

    printf("Enter values for g,e and l\n");
    scanf("%f%f%f", &g, &e, &l);
    if( g>e )
    {
        flag = ((e+l) > g);
    }
    else if( e>l )
    {
        flag = ((g+l) >e);
    }
    else
    {
       flag = ((g+e) >l);
    }
    if(flag)
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}
