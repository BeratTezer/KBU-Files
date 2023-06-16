#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student {
    int no;
    char firstName[30];
    char lastName[30];
    int age;
    struct student *nextStudent;
} *students;

void createStudent();
struct student *addStudent(struct student *lastStudent);
void dispStudents();

int main() {
    struct student *lastRegistration = NULL;
    
    int ans;
    while (1) {
        printf("\nPress '1' to create a student registration (if already you wrote, it will write over it.)\nPress '2' to add a student registration\nPress '3' to see all registrations\nPress '4' to quit\n> ");
        scanf("%d", &ans);
        switch (ans) {
            case 1:
                createStudent();
                lastRegistration = students;
                break;
            case 2:
                lastRegistration = addStudent(lastRegistration);
                break;
            case 3:
                dispStudents();
                break;
            case 4:
                return 0;
            default:
                printf("\nUndefined input. Try again.\n");
        }
    }
}

void createStudent() {
    students = (struct student *)malloc(sizeof(struct student));

    if(students == NULL) printf("\nMemory can't be allocated\n");
    else {
        printf("\n| Student No: ");
        scanf("%d", &students->no);
        printf("| Student Name: ");
        scanf("%s", students->firstName);
        printf("| Student Lastname: ");
        scanf("%s", students->lastName);
        printf("| Student Age: ");
        scanf("%d", &students->age);

        students->nextStudent = NULL;
	printf("\nNew student registration has been created.\n");
    }
}

struct student *addStudent(struct student *lastStudent) {
    struct student *newStudent;

    newStudent = (struct student *)malloc(sizeof(struct student));

    printf("\n| Student No: ");
    scanf("%d", &newStudent->no);
    printf("| Student Name: ");
    scanf("%s", newStudent->firstName);
    printf("| Student Lastname: ");
    scanf("%s", newStudent->lastName);
    printf("| Student Age: ");
    scanf("%d", &newStudent->age);

    newStudent->nextStudent = NULL;
    lastStudent->nextStudent = newStudent;
    return newStudent;
}

void dispStudents() {
    struct student *temp;
    int i = 1;
    temp = students;

    if(temp == NULL) printf("\nThere are no students to list.\n");
    else {
        while (temp != NULL) {
            printf("\n[%d|No     ]: %d", i, temp->no);
            printf("\n[%d|Name   ]: %s", i, temp->firstName);
            printf("\n[%d|Surname]: %s", i, temp->lastName);
            printf("\n[%d|No     ]: %d\n", i, temp->age);
            temp = temp->nextStudent;
            i++;
        }
    }
}
