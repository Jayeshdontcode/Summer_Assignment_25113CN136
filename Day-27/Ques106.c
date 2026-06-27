#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct 
{
    int id;
    char name[50];
    float salary;
} Employee;

Employee employees[MAX];
int count=0;

void addEmployee() 
{
    if(count>=MAX) 
    {
        printf("Employee list is full!\n");
        return;
    }
    printf("Enter ID: ");
    scanf("%d", &employees[count].id);
    printf("Enter Name: ");
    scanf(" %[^\n]", employees[count].name);
    printf("Enter Salary: ");
    scanf("%f", &employees[count].salary);
    count++;
    printf("Employee added successfully!\n");
}

void displayEmployees() 
{
    int i;
    if(count==0) 
    {
        printf("No employees to display.\n");
        return;
    }
    printf("\nEmployee List:\n");
    for (i=0;i<count;i++) 
    {
        printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }
}

void searchEmployee() {
    int id,i, found=0;
    printf("Enter Employee ID to search: ");
    scanf("%d", &id);
    for (i=0;i<count;i++) 
    {
        if (employees[i].id==id) 
        {
            printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
            found=1;
            break;
        }
    }
    if (!found) {
        printf("Employee not found.\n");
    }
}

int main() {
    int choice;
    while (1) 
    {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}