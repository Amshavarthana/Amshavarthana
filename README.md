


#include <stdio.h>

int isAbundant(int num)
 {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) 
{
        if (num % i == 0)
 {
            sum += i;
        }
    }
    return sum > num;
}

int main()
 {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isAbundant(num))
 {
        printf("True\n");  
    } else
 {
        printf("False\n"); 
    }

    return 0;
}