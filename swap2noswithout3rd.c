#include<stdio.h>
int main()
{
    int a;                                      
    printf("Enter the First no.:");
    scanf("%d",&a);
    int b;                                      
    printf("Enter the Second no.:");
    scanf("%d",&b);
    a = a+b ;
    b = a-b ;
    a = a-b ;
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}