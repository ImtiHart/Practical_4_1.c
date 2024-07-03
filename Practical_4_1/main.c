#include <stdio.h>
#include <stdlib.h>

/*Write a program to store the entries of five students who sit for MATH, PHYSICS, and
CHEMISTRY exams. Using a 2D array, find the MAX, MIN, and MEAN performance of students
who took the exams. Finally, print the student’s name whose mean score is less than 60%.*/

/*Initialize varibles witin a structure*/
struct info {
    int student;
    int math;
    int physics;
    int chemistry;
};

int main(){
    struct info marks[5]; /*Array of 5*/

        for (int x=0; x<5; x++) /*For loop finds info of 5 students*/
        {
            printf("What is your student number: ");
            scanf("%d", &marks[x].student);
            printf("What is your Mamthematics mark: ");
            scanf("%d", &marks[x].math);
            printf("What is your Physics mark: ");
            scanf("%d", &marks[x].physics);
            printf("What is your Chemistry mark: ");
            scanf("%d", &marks[x].chemistry);
        }

    int Max_math = marks[0].math; /*Find the highest and lowest math mark*/
    int Min_math = marks[0].math;

    for (int x = 0; x < 5; x++) {
        if (marks[x].math > Max_math) {
            Max_math = marks[x].math;
        }
        if (marks[x].math < Min_math) {
            Min_math = marks[x].math;
        }
    }

    printf("\nMaximum math mark: %d\n", Max_math);
    printf("Minimum math mark: %d\n", Min_math);

      int total_math = 0;
    for (int x = 0; x < 5; x++) /*Find the total sum of all math marks*/
    {
        total_math+=marks[x].math;
    }
    int mean = total_math/5; /*Find the mean of all math marks*/


    int Max_physics = marks[0].physics;
    int Min_physics = marks[0].physics;

    for (int x = 0; x < 5; x++) { /*Find the highest and lowest physics mark*/
        if (marks[x].physics > Max_physics) {
            Max_physics = marks[x].physics;
        }
        if (marks[x].physics < Min_physics) {
            Min_physics = marks[x].physics;
        }
    }

    printf("\nMaximum physics mark: %d\n", Max_physics);
    printf("Minimum physics mark: %d\n", Min_physics);

      int total_physics = 0;
    for (int x = 0; x < 5; x++) /*Find the total sum of all physics marks*/
    {
        total_physics+=marks[x].physics;
    }
    int mean2 = total_physics/5; /*Find the mean of all physics marks*/


    int Max_chemistry = marks[0].chemistry;
    int Min_chemistry = marks[0].chemistry;

    for (int x = 0; x < 5; x++) { /*Find the highest and lowest chemistry mark*/
        if (marks[x].chemistry > Max_chemistry) {
            Max_chemistry = marks[x].chemistry;
        }
        if (marks[x].chemistry < Min_chemistry) {
            Min_chemistry = marks[x].chemistry;
        }
    }

    printf("\nMaximum chemistry mark: %d\n", Max_chemistry);
    printf("Minimum chemistry mark: %d\n", Min_chemistry);

      int total_chemistry = 0;
    for (int x = 0; x < 5; x++) /*Find the total sum of all chemistry marks*/
    {
        total_chemistry+=marks[x].chemistry;
    }
    int mean3 = total_chemistry/5; /*Find the mean of all chemistry marks*/
    printf("\nThe mean for mathematics is: %d\n The mean for physics is: %d\nThe mean for chemistry is: %d\n", mean, mean2, mean3);

    int means5 = marks[4].math+marks[4].physics+marks[4].chemistry;
    int means4 = marks[3].math+marks[3].physics+marks[3].chemistry;
    int means3 = marks[2].math+marks[2].physics+marks[2].chemistry; /*Find the mean of the individual studnt marks*/
    int means2 = marks[1].math+marks[1].physics+marks[1].chemistry;
    int means1 = marks[0].math+marks[0].physics+marks[0].chemistry;
    int student_mean1= (means1)/3;
    int student_mean2= (means2)/3;
    int student_mean3= (means3)/3;
    int student_mean4= (means4)/3;
    int student_mean5= (means5)/3;
    if (student_mean1<60) /*Display when mean of student is less than 60*/
    {
        printf("Student %d has a mean of %d",marks[0].student, student_mean1);
    }
    if (student_mean2<60)
    {
        printf("Student %d has a mean of %d",marks[1].student, student_mean2);
    }
    if (student_mean3<60)
    {
        printf("Student %d has a mean of %d",marks[2].student, student_mean3);
    }
     if (student_mean4<60)
    {
        printf("Student %d has a mean of %d",marks[3].student, student_mean4);
    }
    if (student_mean5<60)
    {
        printf("Student %d has a mean of %d",marks[4].student, student_mean5);
    }


}

