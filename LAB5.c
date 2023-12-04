CEW LAB 5

Q1
#include <stdio.h>
int main(){
    FILE *fptr; // initializing file pointer
    fptr = fopen("cew_lab5.txt","w");   // creating a new file in Write mode
    fprintf(fptr,"This is CEW Lab 5 Task 1");    // Writting in the file
    fclose(fptr);    // closing the file
    
    fptr = fopen("cew_lab5.txt","a");   //opening file in append mode
    fprintf(fptr,"\nThe Task is based on FILING in C");//Add contents in file
    fclose(fptr);   // closing the file
    
    fptr = fopen("cew_lab5.txt","r");   //opening file in read mode
    char string[100];
    while(fgets(string,100,fptr)){      //printing contents of the file
        printf("%s",string);    
    }
    fclose(fptr);   // closing the file
    return 0;
}

Q2:
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("cew_lab5.txt","r");   //opening file in read mode
    int count = 0;
    char c;    
    while ((c = getc(fptr))!=EOF){
        if (c == ' ' || c == '\n')
            count++;}
    count++;
    printf("%d",count);    
    fclose(fptr);   // closing the file
    printf("\nCount = %d", count);
    return 0;
}

Q3:
#include <stdio.h>
#include <stdlib.h>

typedef struct{     //Struct Student Definition
    char name[50];
    char rollno[10];
}student;

void add_student(student* class, int* num, FILE* fptr){
    (*num)++;
    class = realloc(class, sizeof(student) * (*num));
    printf("Enter Student Name: ");
    scanf("%s",class[*num - 1].name);
    printf("Enter Roll Number: ");
    scanf("%s",class[*num - 1].rollno);
    fptr = fopen("Student_database.txt","a");
    fprintf(fptr,"%s,%s\n",class[*num - 1].name,class[*num - 1].rollno);
    fclose(fptr);
}

void view_students(FILE* fptr){
    printf("\nRecords Of All Students of STUDENTS DATABASE\n");
    printf("s#     Name, Roll_Number\n");
    fptr = fopen("Student_database.txt","r");
    char content[100];
    int i = 1;
    while(fgets(content,100,fptr)){      //printing contents of the file
        printf("%d      %s",i,content);
        i++;    
    }
    fclose(fptr);
}

void delete_student(student* class, int* num, FILE* fptr){
    view_students(fptr);
    int index, line_no=1;
    printf("Enter serial number of the student to be deleted/modified: ");
    scanf("%d",&index);
    //Reading content from Student Database File and writing in temporary file except the record to be deleted
    FILE* tempfile;
    tempfile = fopen("temp.txt","w");
    fptr = fopen("Student_database.txt","r");
    char content[100];
    while(fgets(content,100,fptr)){      
        if (line_no != index)
            fputs(content,tempfile);
        line_no++;    
    }
    fclose(fptr);
    fclose(tempfile);
    //Reading content from temporary file and writing in Student Database File
    tempfile = fopen("temp.txt","r");
    fptr = fopen("Student_database.txt","w");
    while(fgets(content,100,tempfile))      
        fputs(content,fptr);    
    fclose(fptr);
    fclose(tempfile);
    (*num)--;
} 

void modify_student(student* class, int* num, FILE* fptr){
    printf("\nModifying Student Data\n");
    delete_student(class, num, fptr);
    add_student(class, num, fptr);
    printf("Student Data has been modified successfully!");
}

int main(){
    student *class = NULL;
    int num_students = 0, *ptrnum = &num_students;
    FILE *fptr;
    int choice = 1;
    while(choice){
    printf("\nSTUDENT DATABASE\n\nMENU\n1.ADD STUDENT\n2.MODIFY STUDENT\n3.DELETE STUDENT\n4.VIEW STUDENTS\n5.EXIT\n\nEnter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            add_student(class, ptrnum, fptr);
            break;

        case 2:
            modify_student(class, ptrnum, fptr);
            break;
        
        case 3:
            delete_student(class, ptrnum, fptr);
            break;
        
        case 4:
            view_students(fptr);
            break;
        
        case 5:
            break;
            
        default:
            printf("Enter valid choice! ");
            break;
    } 
    if(choice == 5)
        break;
    }
    return 0;
}


