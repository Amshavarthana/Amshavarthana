#include <stdio.h>
void main()
{
    int n=5,sum=0;
    for (int i=1;i<=5;i+=2)
    {
        sum+=i;
    }
    printf("sum of odd numbers upto %d is %d \n", n, sum);
}
