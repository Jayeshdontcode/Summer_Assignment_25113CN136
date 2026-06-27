#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100

typedef struct 
{
    int id;
    char name[50];
    float salary;
} Employee;

void addEmployee(Employee employees[], int *count) {
    if (*count>=MAX_EMPLOYEES) 
    {
        printf("Employee limit reached.\n");
        return;
    }
    printf("Enter Employee ID: ");
    scanf("%d", &employees[*count].id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", employees[*count].name);
    printf("Enter Employee Salary: ");
    scanf("%f", &employees[*count].salary);
    (*count)++;
    printf("Employee added successfully.\n");
}

void displayEmployees(Employee employees[], int count) {
    int i;
    if(count==0) 
    {
        printf("No employees to display.\n");
        return;
    }
    printf("\nEmployee Details:\n");
    printf("ID\tName\t\tSalary\n");
    for (i=0;i<count;i++) 
    {
        printf("%d\t%s\t\t%.2f\n", employees[i].id, employees[i].name, employees[i].salary);
    }
}

void searchEmployee(Employee employees[], int count) {
    int id,i;
    printf("Enter Employee ID to search: ");
    scanf("%d", &id);
    for (i=0;i<count;i++) 
    {
        if (employees[i].id==id) 
        {
            printf("Employee Found: ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
            return;
        }
    }
    printf("Employee with ID %d not found.\n", id);
}

void updateSalary(Employee employees[], int count) {
    int id,i;
    float newSalary;
    printf("Enter Employee ID to update salary: ");
    scanf("%d", &id);
    for (i=0;i<count;i++) 
    {
        if(employees[i].id==id) 
        {
            printf("Enter new salary for %s: ", employees[i].name);
            scanf("%f", &newSalary);
            employees[i].salary = newSalary;
            printf("Salary updated successfully.\n");
            return;
        }
    }
    printf("Employee with ID %d not found.\n", id);
}

int main() 
{
    Employee employees[MAX_EMPLOYEES];
    int count=0, choice;

    while (1) {
        printf("\nSalary Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(employees, &count);
                break;
            case 2:
                displayEmployees(employees, count);
                break;
            case 3:
                searchEmployee(employees, count);
                break;
            case 4:
                updateSalary(employees, count);
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}