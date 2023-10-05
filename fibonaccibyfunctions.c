#include<stdio.h>                                       // Fibonacci Series   
#include<math.h>                                        // 1,1,2,3,5,8,13,21,34,55,89,......
void fibonacci(int n)
{
    int n1 = 0 ;
    int n2 = 1 ;
    printf("%d  ",n1);
    printf("%d  ",n2);
    for(int i = 1; i<=n ; i++)
    {
        int nx = n1 + n2 ;
        printf("%d  ",nx);
        n1 = n2 ;
        n2 = nx ;
    }
}
int main()
{
    int n ;
    printf("Enter the no. of terms to print:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Please enter a +ve value");
        return 1;
    }
    else 
    {
        fibonacci(n);
    }
    return 0;
}