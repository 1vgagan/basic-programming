// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int age,sdt;
   
   printf("Enter the age: \n");
   scanf("%d",&age);
   
   //age=
   
   while(age >=20 && age<=40 ) {
       printf("\n Age is : %d", age);
       age = age*2;
   }
   
   return 0;
}
