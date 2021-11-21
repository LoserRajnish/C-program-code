#include <stdio.h>
//Using recursion
int fib_rec(int n)
{
    if (n == 1 || n == 2){
        return n - 1;
    }
    else{
        return fib_rec(n - 1) + fib_rec(n - 2);
    }
}
int fib_itrative(int n){
    int a=0,b=1;
    for (int i = 0; i < n-1; i++)
    {
        b=b+a;
        a=b-a;
    }
    return a;
}
int main()
{
    int num;
    printf("ENter a number to get it's fibonacci value:\n");
    scanf("%d", &num);
    printf("The fibonacci value of %d by recursion is : %d\n", num, fib_rec(num));
    printf("The fibonacci value of %d by itrative method is : %d\n", num, fib_itrative(num));
    return 0;
}