#include <stdio.h>

struct name
{
    char first_name[20];
    char mid_name[20];
    char last_name[20];
};

struct date_of_b
{
    int day;
    int month;
    int year;
};

struct marks
{
    int eng;
    int maths;
    int computer;
};

struct details
{
    int student_num;
    int rollno;
    struct name name_of_stu;
    char gender;
    struct date_of_b dob;
    struct marks student_marks;
};

int main()
{
    struct details student1;
    student1.student_num = 01;
    student1.rollno = 25;
    strcpy(student1.name_of_stu.first_name ,"Sahil");
    strcpy(student1.name_of_stu.mid_name ,"Kumar");
    strcpy(student1.name_of_stu.last_name   ,"Saharn");
    student1.gender = 'M';
    student1.dob.day = 19;
    student1.dob.month = 10;
    student1.dob.year = 2003;
    student1.student_marks.eng = 50;
    student1.student_marks.maths = 55;
    student1.student_marks.computer = 70;

    printf("student number = %d\n",student1.student_num);
    printf("student's roll number = %d\n",student1.rollno);
    printf("student's full name = %s %s %s\n",student1.name_of_stu.first_name,student1.name_of_stu.mid_name,student1.name_of_stu.last_name);
    printf("gender of student = %c\n",student1.gender);
    printf("D.O.B of student = %d/%d/%d\n",student1.dob.day,student1.dob.month,student1.dob.year);
    printf("student marks\neng = %d\nmaths = %d\ncomputer = %d\n",student1.student_marks.eng,student1.student_marks.maths,student1.student_marks.computer);
    return 0;
}