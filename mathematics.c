// Online C compiler to run C program online
#include <stdio.h>
int add(int,int);
int subtraction(int,int);
int divide(int,int);
int interestcalculator(int,int,int);
int main() {
    int a= 100 ,b= 10, sum,sub,div;
    sum=add(a,b);
    printf("\nsum is %d",sum);
    sub=subtraction(a,b);
    printf("\nsub is %d",sub);
    div=divide(a,b);
    printf("\ndiv is %d",div,"\n");
   
    int p ,r ,t , interest;
    printf("\nEnter Principal: ");
    scanf("%d",&p);
    printf("Enter rate of interest: ");
     scanf("%d",&r);
     printf("Enter time period: ");
      scanf("%d",&t);
   interest=interestcalculator(p,r,t);
   printf("\ninterest for four year is %d",interest);
}
    
    int add (int a, int b)
    {
    return (a+b);
}
int subtraction(int a, int b)
{
    return(a-b);
}
int divide(int a,int b)
{
    return(a/b);
}
int interestcalculator(int p,int r ,int t)
{
    return(p*r*t/100);
}
