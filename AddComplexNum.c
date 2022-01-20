#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct complex
{
    int real, imag;
};

void main()
{
    struct complex n1, n2, n3;
    printf("Provide first complex equation[a+ib] detials:\n");
    printf("Enter real part, a=\n");
    scanf("%d", &n1.real);
    printf("Enter imaginary part, b=\n");
    scanf("%d", &n1.imag);
    printf("Provide second complex equation[a+ib] detials:\n");
    printf("Enter real part, a=\n");
    scanf("%d", &n2.real);
    printf("Enter imaginary part, b=\n");
    scanf("%d", &n2.imag);
    n3.real = n1.real + n2.real;
    n3.imag = n1.imag + n2.imag;
    printf("Your first Complex number is : %d + %di\n", n1.real, n1.imag);
    printf("Your second Complex number is : %d + %di\n", n2.real, n2.imag);
    printf("The sum these two complex numbers is: %d + %di\n", n3.real, n3.imag);
}
