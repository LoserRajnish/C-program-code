#include <stdio.h>

void pelindrome(int n)
{
    int r, sum=0, temp;
    printf("Enter a number to check whether it's a pelindrome number or not;\n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }

    if (temp == sum)
    {
        printf("This is a pelindrome number.");
    }
    else
    {
        printf("This is not a pelindrome number.");
    }
}

int main()
{
    int num;
    pelindrome(num);
    return 0;
}