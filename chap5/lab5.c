#include <stdio.h>
#include <string.h>

struct Employee
{
    char last_name[16];
    char first_name[16];
    char title[16];
    int salary;
};

int main() {
    struct Employee employees[10];
    int i = 0;
    
    for (;;)
    {
        printf("Enter the last name: ");
        if (!scanf("%15[^\n]", employees[i].last_name))
            break;
        printf("Enter the first name: ");
        scanf("%s", employees[i].first_name);
        printf("Enter the title: ");
        scanf("%s", employees[i].title);
        printf("Enter the salary: ");
        scanf("%d", &employees[i].salary);
        getchar();
        i++;
    }

    putchar('\n');

    for(int j = 0; j < i; j++) {
        printf("Employee #%d\n First Name: %s\n Last Name: %s\n Title: %s\n Salary: %d\n",
         j, employees[j].first_name, employees[j].last_name, employees[j].title, employees[j].salary);
    }
}