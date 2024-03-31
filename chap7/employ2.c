#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employ2.h"

struct Employee* createEmployee(char* last, char* first, char* title, int salary) {
    struct Employee* empl = malloc(sizeof(struct Employee));

    if (empl == NULL)
        return NULL;
    
    strcpy(empl->last, last);
    strcpy(empl->first, first);
    strcpy(empl->title, title);
    empl->salary = salary;
    return empl;
}
char* getLast(struct Employee* empl) {
    return empl->last;
}
char* getFirst(struct Employee* empl) {
    return empl->first;
}
char* getTitle(struct Employee* empl) {
    return empl->title;
}
int getSalary(struct Employee* empl) {
    return empl->salary;
}
void setLast(struct Employee* empl, char* last) {
    strcpy(empl->last, last);
}
void setFirst(struct Employee* empl, char* first) {
    strcpy(empl->first, first);
}
void setTitle(struct Employee* empl, char* title) {
    strcpy(empl->title, title);
}
void setSalary(struct Employee* empl, int salary) {
    empl->salary = salary;
}
void printEmployee(struct Employee* empl) {
    printf("Last Name: %s\nFirst Name: %s\nTitle: %s\nSalary: %d\n", 
        empl->last, empl->first, empl->title, empl->salary);
}
