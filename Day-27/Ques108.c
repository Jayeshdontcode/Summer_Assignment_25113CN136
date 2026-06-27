#include<stdio.h>
#include<string.h>

struct Student 
{
    char name[50];
    int rollNo;
    float marks[5];
    float total;
    float percentage;
};

void calculateResults(struct Student *s) 
{
    int i;
    s->total=0;
    for(i=0;i<5;i++) 
    {
        s->total+=s->marks[i];
    }
    s->percentage=(s->total/500)*100;
}

void displayMarksheet(struct Student s) {
    int i;
    printf("\nMarksheet\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.rollNo);
    printf("Marks in 5 subjects:\n");
    for(i=0;i<5;i++) 
    {
        printf("Subject %d: %.2f\n", i + 1, s.marks[i]);
    }
    printf("Total Marks: %.2f\n", s.total);
    printf("Percentage: %.2f%%\n", s.percentage);
    if(s.percentage>=40) 
    {
        printf("Result: Pass\n");
    } else {
        printf("Result: Fail\n");
    }
}

int main() 
{
    int i;
    struct Student s;

    printf("Enter student's name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")]='\0'; //remove trailing newline

    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter marks for 5 subjects (out of 100):\n");
    for (i=0;i<5;i++) 
    {
        printf("Subject %d: ",i+1);
        scanf("%f", &s.marks[i]);
    }

    calculateResults(&s);
    displayMarksheet(s);

    return 0;
}