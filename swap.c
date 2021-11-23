#include <stdio.h>



void main()
{
    int a, b, z;
    printf("Enter your 1st number :\n");
    scanf("%d", &a);
    printf("Enter your 2nd number : \n");
    scanf("%d", &b);
    printf("Your have entered 1st num : %d and 2nd num : %d\n", a, b);
    // z = a;
    // a = b;
    // b = z;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping using 3rd variable\n");
    printf("Your 1st num : %d and 2nd num : %d\n", a, b);
}