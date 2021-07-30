#include <stdio.h>
#include <stdlib.h>

int main()
{
//
//int student_1;
//printf("Student 1: \n");
//printf("enter marks :  \n");
//scanf("%d",&student_1);
//
//int student_2;
//printf("Student 1: \n");
//printf("enter marks :  \n");
//scanf("%d",&student_2);
//
//int student_3;
//printf("Student 1: \n");
//printf("enter marks :  \n");
//scanf("%d",&student_3);
//
//
//for(int i=0;i<10;i++)
//{
//int std;
//scanf("%d",&std);
//sum=sum+std;
//}
//
//sum=student_1+student_2+student_3;
//

    int student_marks[20];
//
//    printf("student 1: \n");
//    printf("Enter marks: \n");
//    scanf("%d",&student_marks[0]);
//
//    printf("student 2: \n");
//    printf("Enter marks: \n");
//    scanf("%d",&student_marks[1]);
//
//    printf("student 3: \n");
//    printf("Enter marks: \n");
//    scanf("%d",&student_marks[2]);

///taking input of 20 students marks
    int sum=0;

    int length=3;
    for(int i=0; i<length; i++)
    {

        printf("student %d: \n",i+1);
        printf("Enter marks: \n");
        scanf("%d",&student_marks[i]);
    }

    ///summing up the students marks

    for(int i=0; i<length; i++)
    {

        sum=sum+student_marks[i];

    }

    //printf("total_marks: %d",sum);


///printing student marks:
printf("Student marks before curving : ");
    for(int i=0; i<length; i++)
    {
        printf("Student %d: %d \n",i+1,student_marks[i]);


    }

printf("Student marks after curving : ");


    for(int i=0; i<length; i++)
    {

    student_marks[i]=curve(student_marks[i]);

        printf("Student %d: %d \n",i+1,student_marks[i]);


    }



    return 0;
}


int curve(int marks)
{

//double c=10+sqrt(marks); 10 * root(marks)

    double sum=marks+5;
    if(marks==100)
        sum=marks;

        return sum;



}

/**
student 1:
enter marks : 93

student 2:
enter marks : 78

student 3:
enter marks : 80


total marks: ?
avrg: ?


curved value : ?


**/


