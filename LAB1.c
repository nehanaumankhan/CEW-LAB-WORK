/*1) Write a C program that accepts an employee's ID, total worked hours in a month and
the amount received per hour. Print the ID and salary (with two decimal places) of the
employee for a particular month.*/

#include <stdio.h>
int main() {
    int emp_id,salary_per_hour=999;
    float hours_worked;
    printf("Enter Employee ID:\t");
    scanf("%d",&emp_id);
    printf("\nEnter total hours worked in this month:\t");
    scanf("%f",&hours_worked);
    printf("The total salary of the Employee(ID = %d): Rs.%.2f/= ",emp_id, salary_per_hour * hours_worked);
    return 0;
}
/*2) Write a C program that takes the height and width of a rectangle as an input from user
and compute the perimeter and area of a rectangle.*/

#include <stdio.h>
int main() {
    float height, width;
    printf("Enter Height of the Rectangle:\t");
    scanf("%f",&height);
    printf("\nEnter Width of the Rectangle:\t");
    scanf("%f",&width);
    printf("The Perimeter of the Rectangle: %.2f units",height*2+width*2);
    printf("\nThe Area of the Rectangle: %.2f square units",height*width);
    return 0;
}
/*3. Write a C program to accept the height of a person in centimeters and categorize the
person according to his height. (Height < 150cm – Dwarf, Height=150cm – Average,
Height>=165cm – Tall).*/

#include <stdio.h>
int main() {
    float height;
    printf("Enter Height of the Person in centimeters:\t");
    scanf("%f",&height);
    if(height<150)
        printf("The Person is DWARF");
    else if(height==150)
        printf("The Person is AVERAGE");
    else if(height>=165)
        printf("The Person is TALL");
    else
        printf("The Person is between DWARF and TALL but not AVERAGE");
    return 0;
}
/*4. Write a program in C to convert a decimal number to a binary number using functions.*/

#include<stdio.h>
int decimal_to_binary(num)
{
  int dec = num,bin=0,rem=0,place=1;
  while(dec)
    {
        rem=dec%2;
        dec=dec/2;
        bin=bin + (rem*place);
        place=place*10;
    }
    return bin;
}
int main()
{
    printf("DECIMAL TO BINARY CONVERTER\n\n");
    int num;
    printf("ENTER A DECIMAL NUMBER: ");
    scanf("%d",&num);
    printf("BINARY EQUIVALENT: %d",decimal_to_binary(num));
    return 0;
}
/*5. Write a function to calculate the nth Fibonacci number and call it recursively to print
the Fibonacci series.*/

#include<stdio.h>
int fab(a,b,num)
{
    int x=a,y=b,z,n=num;
    if (n==0)
        return 0;
    else
    {
        z=x+y;
        printf("%d ",z);
        return fab(y,z,n-1);
    }    
}
int main()
{
    int a=0,b=1,num;
    printf("FIBONACCI SERIES PRINTER\nEnter nth term of fibonacci series:\t ");
    scanf("%d",&num);
    printf("1 ");
    fab(a,b,num);       
}


