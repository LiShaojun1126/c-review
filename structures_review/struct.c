#include<stdio.h>

#define num_student 3

typedef struct employee{
    char name[50];
    int id;
} employee;

typedef struct student{
    char name[50];
    int mark_math;
    int mark_coding;
    int mark_writing;
    double avg_marks;
} student;

int main(void){
    employee abc = {"Alex", 100};
    printf("This employee's name is %s, their id is %d\n", abc.name, abc.id);

    
    student student_list[num_student];
    
    for(int i = 0; i < num_student; i ++){
        printf("Please input the %dth student and their marks:\n", i + 1);
        scanf("%s%d%d%d", student_list[i].name, &student_list[i].mark_math, &student_list[i].mark_coding, &student_list[i].mark_writing); //can't use comma and can't use & for chat array


        student_list[i].avg_marks = (student_list[i].mark_math + student_list[i].mark_coding + student_list[i].mark_writing) / 3.00;
    }

    for(int i = 0; i < num_student; i ++){
        printf("%s's average marks is: %lf\n", student_list[i].name, student_list[i].avg_marks);
    }


    return 0;
}