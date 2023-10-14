#include <stdio.h>
#include <stdlib.h>

int main() {
    typedef struct {
        double id;
        char *name;
        float grade;
    } student;
    
    student s1, s2;
    student* s3;
    
    s1.id = 12312312312;
    s1.name = "Cabby";
    s1.grade = 2.89;
    
    s2.id = 34534534545;
    s2.name = "Burry";
    s2.grade = 3.02;
    
    s3 = (student*)malloc(sizeof(student));
    
    s3->id = 56756756756;
    s3->name = "Larry";
    s3->grade = 2.65;
    
    printf("Name: %s\nID: %.0f\nGrade: %.2lf\n\n", s1.name, s1.id, s1.grade);
    
    printf("Name: %s\nID: %.0f\nGrade: %.2lf\n\n", s2.name, s2.id, s2.grade);
    
    printf("Name: %s\nID: %.0f\nGrade: %.2lf\n\n", s3->name, s3->id, s3->grade); // Because it's defined as pointer.
    
    return 0;
}