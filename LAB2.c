////Q1 Write a C program to display the first n odd natural numbers and their sum using for, while and do-while loop.

//For loop:
#include <stdio.h>
int main() {
    int num, i;
    printf("Enter any Number:\t");
    scanf("%d",&num);
    for(i=1; i <= 2*num; i=i+2)
        printf("%d ",i);
    return 0;
}
//While loop:
#include <stdio.h>
int main() {
    int num, i=1;
    printf("Enter any Number:\t");
    scanf("%d",&num);
    while(i <= 2*num){
        printf("%d ",i);
        i=i+2;
    }
    return 0;
}
//Do-While loop:
#include <stdio.h>
int main() {
    int num, i=1;
    printf("Enter any Number:\t");
    scanf("%d",&num);
    do{
        printf("%d ",i);
        i=i+2;
    }while(i <= 2*num);
    return 0;
}
//Q2 Write a C program to make the following pattern as a pyramid with an asterisk.
//   *
//  * *
// * * *
//* * * *
#include <stdio.h>
int main() {
    int rows, i, j, space;
    printf("Enter number of rows:\n");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
  return 0;
}
//Q3 Write a C program to compare two strings without using string library functions.
#include <stdio.h>
int main(){
  char s1[] = "default", s2[] = "default";
  printf("Enter the first string: ");
  scanf("%s", &s1);
  printf("Enter the second string: ");
  scanf("%s", &s2);
  int i;
  for(i = 0; s1[i]==s2[i] && s1[i]!='\0'; i++);
  printf("%d", s1[i] - s2[i]);
  return 0;
}
//Q4 Write a C program to read a sentence and replace lowercase characters with uppercase and vice versa.
#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    int i=0;
    char str[200],res[200];
    printf("Enter the string: ");
    scanf("%[^\n]s", &str);
    printf("%s\n",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(isupper(str[i]))
            res[i]=tolower(str[i]);
        else if(islower(str[i]))
            res[i]=toupper(str[i]);
        else
            res[i] = str[i];
    }

    printf("%s length is %d",res,strlen(res));
    return 0;    
}
// Q5 Write a C program to print all unique elements in an array.

#include <stdio.h>
int main(){
    int len, count;
    printf("Enter the length of an array: ");
    scanf("%d", &len);
    int arr[len];
    for(int i = 0; i<len; i++){
        printf("Enter element#%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The unique elements in your array are:\n");
    for(int i = 0; i<len; i++){
        count = 0;
        for(int j = 0; j<len; j++)
            if(arr[i]==arr[j])
                count++;
        if(count==1)
            printf("%d ", arr[i]);
    }
    return 0;    
}
//Q6 Write a C program to add two distances in inch-feet system using structures.

struct Distance
{
    int ft;
    int inch;
};

#include <stdio.h>
int main(){
    struct Distance d1, d2;
    printf("Enter the ft and inch of the first distance: ");
    scanf("%d %d", &d1.ft, &d1.inch);

    printf("Enter the ft and inch of the second distance: ");
    scanf("%d %d", &d2.ft, &d2.inch);

    printf("The total distance is: %d'%d\n", d1.ft+d2.ft, d1.inch+d2.inch);

    return 0;
}
