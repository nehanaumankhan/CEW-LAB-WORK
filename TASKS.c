//Task 1: Write a program in C that checks whether the entered number is even or odd.Take number as input from user.
#include <stdio.h>
int main(){
 int a;
 printf("ENTER ANY NUMBER:\t");
 scanf("%d",&a);
 (a%2==0)?printf("even number"):printf("odd number");
 return 0;
}

//Task2:Write a program in C that does the following :
// 1. Input 1st number as input from the user.
// 2. Input 2nd number as input from the user.
// 3.If both are greater than 5,add them.
// 4.If one of them is greater than 5,multiply them.
// 5.If both are less than 5,add 1 to them.
// 6.else print "hello world".
#include <stdio.h>
int main(){
 int a,b;
 printf("Enter your first number here:\t");
 scanf("%d",&a);
 printf("Enter your second number here:\t");
 scanf("%d",&b);
 if(a>5 && b>5){
 printf("%d",a+b);
 }else if(a>5 || b>5){
 printf("%d",a*b);
 }else if(a<5 && b<5){
 printf("%d , %d",a+1,b+1);
 }else{
 printf("hello world");
 }
 return 0;
}
//Task 3: Write a program in C that does the following:
// 1.Take a number as input from the user.
// 2.If the number is positive,print its table upto 10,using function.
#include <stdio.h>
void print_table(int a){
 int x=a,i;
 if(x>=0){
 for(i=1;i<=10;i++){
 printf("%d x %d = %d\n",x,i,x*i);
 }
 }else{
 printf("can not print table of neg numbers.");
 }
}
int main(){
 int a;
 int i;
 printf("Enter a number:\t");
 if(scanf("%d",&a)!=1){
 printf("enter intergers only.");
 }else{
 print_table(a);
 }
 return 0;
}
