//Q1:
#include <stdio.h>
int main()
{
    int a=1, b=2, *ptra=&a, *ptrb=&b, *ptrc=&a;
    printf("a = %d\nb = %d",*ptra,*ptrb);
    ptra = ptrb, ptrb = ptrc;
    printf("\nAfter swapping\na = %d\nb = %d",*ptra,*ptrb);
    return 0;   
}
//Q2:
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s",&str);
    char *ptr = &str[strlen(str)-1];
    printf("The reversed string: ");
    for(int i=strlen(str)-1; i>=0; i--)
    {
        printf("%c", *ptr);
        ptr--;
    }
    return 0;   
}
//Q3:
#include <stdio.h>
int main()
{
    int array[5] = {12,22,33,44,55}, item=44;
    int *ptra = &array, *ptri=&item;
    printf("Array\n");
    for(int i=0; i<=4; i++)
    {
        if(*ptra==*ptri)
            printf("Item searched at index %d\n", i);
        ptra++;
    }
    return 0;   
}
//Q4:
#include <stdio.h>
int main()
{
    int row,col;
    printf("Matrix Adder\n");
    printf("Rows = ");
    scanf("%d",&row);
    printf("Columns = ");
    scanf("%d",&col);
    int A[row][col],B[row][col],C[row][col], *ptrA=&A, *ptrB=&B;
    
    // Taking input of matrix A
    printf("Matrix A\n");
    for (int i=0; i<=row-1; i++)
    {
        for (int j=0; j<=col-1; j++)
        {
            printf("Row %d element %d = ",i+1,j+1);
            scanf("%d",ptrA);
            ptrA++;
        }
    }
    
    // Taking input of matrix B
    printf("Matrix B\n");
    for (int i=0; i<=row-1; i++)
    {
        for (int j=0; j<=col-1; j++)
        {
            printf("Row %d element %d = ",i+1,j+1);
            scanf("%d",ptrB);
            ptrB++;
        }
    }
    
    ptrA=&A, ptrB=&B;
    printf("Sum of Matrix A and B\n");
    // Adding A and B
    for (int i=0;i<=row-1;i++)
    {
        for (int j=0; j<=col-1; j++)
        {
            printf("%d ",*ptrA + *ptrB);
            ptrA++; ptrB++;
        }
    printf("\n");
    }
 return 0;
}
