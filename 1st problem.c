/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.*/

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
