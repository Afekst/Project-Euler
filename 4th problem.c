/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.*/

#include <stdio.h>

long FlippedNum(long num);
int CheckMulti(long n);

int main(){
    long num = 0;
    for(num = 988001; num > 0; num--)
    {
        if(num == FlippedNum(num))
        {
            if(CheckMulti(num))
            {
                printf("%lu", num);
                return 0;
            }
        }
    }
    return 0;
}

long FlippedNum(long num)
{
    long reversed = 0;
    while(num != 0)
    {
        reversed = reversed * 10;
        reversed = reversed + num % 10;
        num = num / 10;
    }
    return reversed;
}

int CheckMulti(long n)
{
    long i = 0, j = 0;
    for(i = 999; i > 0; i--)
    {
        for(j = 999; j > 0; j--)
        {
            if(n == i * j)
                return 1;
        }
    }
    return 0;
}
