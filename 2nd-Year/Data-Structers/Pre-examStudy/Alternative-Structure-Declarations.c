#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char *name;
    double grade;
}student;


int main() {
    student s1, *s2;
    
    s2 = (student*)malloc(sizeof(student));
    
    s1.id = 0;
    s1.name = "Ali";
    s1.grade = 3.2;
    
    s2->id = 1;
    s2->name = "Ahmet";
    s2->grade = 3.4;
    
    printf("%d, %s, %f\n", s1.id, s1.name, s1.grade);
    printf("%d, %s, %f", s2->id, s2->name, s2->grade);
    return 0;
}
