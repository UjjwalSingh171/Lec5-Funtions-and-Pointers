#include<stdio.h>
void swap(int*x,int*y)
{
    int temp;
    temp = *x ;
    *x = *y ;
    *y = temp ;
    return;
}
int main()
{
    int a;                                      
    printf("Enter the First no.:");
    scanf("%d",&a);
    int b;                                      
    printf("Enter the Second no.:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}