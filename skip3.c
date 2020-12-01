#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
   for(i=1;i<=30;i++)
   {
        if((i%3)==0)
        {
            continue;
        }
        printf("%3d",i);
    }
    return 0;

}
