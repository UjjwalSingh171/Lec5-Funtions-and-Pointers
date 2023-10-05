#include<stdio.h>
int fact(int x)                                     //4. factorial of nos.
{  
    int product=1;
    for(int m = x ; m>0 ; m--)
    {
        product = product*m ;
    }
    return product;
}
int combination(int k,int l)                    //3. combination of nos.
{
    int kcl = (fact (k)   /     (fact(l)*fact(k-l)));
    return kcl;
}
int main()
{
    int n;                                      //1.input for no. of lines to print
    printf("Enter the no. of lines:");
    scanf("%d",&n);


    for(int k = 0 ; k<=n ; k++)                 //2. print empty triangle 1
    { 
         
        for(int j = n-k+1 ; j>1 ; j--)
        {
            printf(" ");
        }
         
     
        for(int l = 0 ; l<=k ; l++)              //5. print pascal triangle 2
        {   
            int kcl ;
            kcl = combination(k,l);
            printf("%d",kcl);
            printf(" ");
        }
        printf("\n");
    }
     return 0;
}