#include<stdio.h>
int main()
{
    int num, i =0, pr=0 , rem=0 , sum=0 ;
    printf("Enter a number:\n");
    scanf("%d",&num);
    rem = num;
    do
    {
        sum = num % 10;
        i = i + (sum * sum * sum);
         
        num = num / 10;
    } while (sum != 0);
    // printf("%d\n",i);
    if (i == rem)
        printf("Armstrong number");
    else
        printf("Non armstrong number");
    
    
    return 0;
}
