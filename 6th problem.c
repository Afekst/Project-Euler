/*The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/

#include <stdio.h>
#define MAX_NUM 100

int abs(int num);

int main()
{
    int i = 0;
    int sumOfSqu = 0, squOfSum = 0, difference = 0;
    for(i = 1; i <= MAX_NUM; i++)
    {
        squOfSum = squOfSum + i;
        sumOfSqu = sumOfSqu + i * i;
    }
    squOfSum = squOfSum * squOfSum;
    difference = abs(squOfSum - sumOfSqu);
    printf("%d", difference);


    return 0;
}

int abs(int num)
{
    if(num < 0)
        return (-1) * num;
    return num;
}
