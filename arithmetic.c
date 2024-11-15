#include <stdio.h>
#include <math.h>
void main()
{
    int choice;
    int num1,num2,result;
    printf("enter the numbers :");
    scanf("%d %d", &num1,&num2);
    printf("enter your option :");
    scanf("%d",&choice);
    switch(choice)
    {
  case 1:
    result=num1+num2;
    printf("addition=%d \n",result);
    break;
  case 2:
    result=num1-num2;
    printf("subtraction=%d \n",result);
    break;
   case 3:
    result=num1*num2;
    printf("multiplication=%d\n",result);
    break;
   case 4:
    if(num2!=0)
    {
        result=num1/num2;
        printf("division=%d\n",result);
    }
    else
    {
        printf("division by zero is not allowed\n");
    }
    break;
   case 5:
    if(num2!=0)
    {
        result=num1%num2;
        printf("modulus=%d \n",result);
    }
    else
    {
        printf("modulus by zero is not allowed");
    }
    break;
   case 6:
    result=(num1 +num2)/2;
    printf("average=%d \n",result);
    break;
case 7:
    result=pow(num1,num2);
    printf("power=%d \n",result);
    break;
    defult:
    printf("invalid choice:\n");
    break;
   }
}

