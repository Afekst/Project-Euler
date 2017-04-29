#include <stdio.h>
#define NUM 1000


int main()
{
    int i = 0;
    int sum = 0;

    printf("project euler 1st problem \n");

    for(i = 1; i < NUM; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
            sum = sum + i;
        else if(i % 3 == 0)
            sum = sum + i;
        else if(i % 5 == 0)
            sum = sum + i;

    }

    printf("%d\n", sum);
    return 0;
}
