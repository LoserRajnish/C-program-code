#include<stdio.h>
//Recursion method:
void fib_series(int n){
    static int n1=0,n2=1, n3;
    if (n>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d ",n3);
        fib_series(n-1);
    }
}


int main()
{
    int num;
    int N1=0,N2=1,N3;
    printf("ENter a number to get it's fibonacci value:\n");
    scanf("%d", &num);
    printf("Fibonacci Series: ");    
    printf("%d %d ",0,1);
    //Recursive method:
    //fib_series(num-2);
    //Itrative Method:
    for (int i = 2; i < num; i++)
    {
        N3=N1+N2;
        N1=N2;
        N2=N3;
        printf("%d ",N3);
    }
    
    return 0;
}