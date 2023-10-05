#include<stdio.h>
int fact(int n)
{
    int product = 1 ;
    for(int i = 1 ; i<=n ; i++)
    {
        product = product*i;
    }
    return product;
}
int main()
{
    int n ;
    printf("Enter the number:");
    scanf("%d",&n);

    int factorial = fact(n);

    printf("The Factorial of %d is %d",n,factorial);
    return 0;
}
