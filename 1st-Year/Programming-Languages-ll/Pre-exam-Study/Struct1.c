// Write a program to store and print the roll no., name , age and marks of a student using structures

#include <stdio.h>

void main() 
{
    struct student
    {
       int no;
       char name[20];
       int age;
       int grade;
    };

    struct student s1 = {1, "Ali", 17, 75};

    printf("[%d]: %s(%d) = %d", s1.no, s1.name, s1.age, s1.grade);
}