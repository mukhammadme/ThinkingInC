#include <stdio.h>
#include "employee.h"
#include <string.h>

struct Employee
{
    char last_name[16];
    char first_name[16];
    char title[16];
    int salary;
};

#define MAX_SIZE 10
static struct Employee employees[];
static int n;

int addEmployee() {
    if (n == MAX_SIZE)
        return -1;
    printf("Enter last: "); fflush(stdout);
    gets(employees[n].last_name);
    if (strlen(employees[n].last_name) == 0)
        return -1;
    printf("Enter first: "); fflush(stdout);
    gets(employees[n].first_name);
    printf("Enter title: "); fflush(stdout);
    gets(employees[n].title);
    printf("Enter salary: "); fflush(stdout);
    scanf("%d", &employees[n].salary);
    getchar();  /* eat newline */

    return n++;
}

int printEmployee(int index) {
    if (index < 0 || index >= n)
        return -1;
    int isValid = 0;
    
    for (int i = 0; i < n; ++i)
        if (index == i)
            isValid = 1;
    
    if (isValid)
        printf("{%s,%s,%s,%d}\n",
               employees[index].last_name,
               employees[index].first_name,
               employees[index].title,
               employees[index].salary);
        return index;

    return -1;
}

int numEmployees() {
    return n;
}
