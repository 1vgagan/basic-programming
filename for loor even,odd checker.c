// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter no: ");
    scanf("%d",&n);

   for(int i=1;i<=n;i++)
   {
       int number = i%2;
       if(number==0)
       {
          int age =10;
          printf("i is %d number is even\n",i);
        }
        
       else
        {
         printf("i is %d number is odd\n",i);
        }
         printf("value of number is %d\n",number);
        //printf("one pass completed \n");
   }
       
    return 0;
}
