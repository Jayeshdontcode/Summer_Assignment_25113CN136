#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

typedef struct 
{
    int id;
    char name[NAME_LENGTH];
    float marks;
} Student;

Student students[MAX_STUDENTS];
int studentCount=0;

void addStudent() {
    if(studentCount>=MAX_STUDENTS) 
    {
        printf("Student limit reached!\n");
        return;
    }
    Student s;
    printf("Enter ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    scanf(" %49[^\n]", &s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);
    students[studentCount++]=s;
    printf("Student added successfully!\n");
}

void displayStudents() 
{
    int i;
    if(studentCount==0) 
    {
        printf("No students to display.\n");
        return;
    }
    printf("\nStudent Records:\n");
    for (i=0;i<studentCount;i++) 
    {
        printf("ID: %d, Name: %s, Marks: %.2f\n", students[i].id, students[i].name, students[i].marks);
    }
}

void searchStudent() {
    int id,i;
    printf("Enter ID to search: ");
    scanf("%d", &id);
    for(i=0;i<studentCount;i++) 
    {
        if (students[i].id==id) 
        {
            printf("Student Found: ID: %d, Name: %s, Marks: %.2f\n", students[i].id, students[i].name, students[i].marks);
            return;
        }
    }
    printf("Student not found.\n");
}

void deleteStudent() 
{
    int id,i;
    printf("Enter ID to delete: ");
    scanf("%d", &id);
    for (i=0;i<studentCount;i++) 
    {
        if (students[i].id==id) {
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            printf("Student deleted successfully!\n");
            return;
        }
    }
    printf("Student not found.\n");
}

int main() {
    int choice;
    do {
        printf("\nStudent Record Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}