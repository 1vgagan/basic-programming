// Online C compiler to run C program online
#include <stdio.h> //We include all the function present in file stdio.h into our program
int salarycalculator(int,int,int,char*); //Function declaration
int main() { //Main function defination started   
    //{} Curley bracket = For function defination open and close
    //[] = Square bracket = For Array declaration
    //() = Paraenthesis = function arguments
    // ; Semicolum = Line close, line deliminator
    // , comma = value/variable seperator
    char designation [] = "Manager";
    //One Character array "designation" is being created and initialized with value "Manager"
    printf("Designation is: %s \n", designation);
    
    int ta=1000,da=1000,basic=1000;
    //Here varibale is ta, its value initialised with 1000 and its data type is int(integer)
    int salary;
    //Function calling and passing 4 arguments
    // 3 int valies and one string/character array value
    salary = salarycalculator(ta,da,basic,designation);
} //Main function defination ended   

//Function defination, Here all the passed values gets store in local variable of function argument
int salarycalculator(int ta,int da,int basicsalary,char *designation)
{ //salarycalculator function defination started   
    int salary;
    salary=ta+da+basicsalary;   
    printf("salary is %d %s \n",salary, designation);
    
   return salary; // Function return, whose return type is int
} //salarycalculator function defination ended 
