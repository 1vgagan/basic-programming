// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int age,sdt;
   
   printf("Enter the age: \n");
   scanf("%d",&age);
   
   switch(age) {

   case 0 :
   case 1 :
   case 2 :
   case 3 :
   case 4 :
   case 5 :
       printf("Value of age is from 0-5, child hai \n");
       //int x;
       //age = age +2;
       //calculateAge(age);
      break; 
	
   case 20  :
       printf("Value of age is 20 \n");
       break; 

   default : 
        printf("Value of age is different: %d", age);
    }
  
   return 0;
}
