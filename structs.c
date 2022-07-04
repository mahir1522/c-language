#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};




int main(){

    struct Student student1;
    student1.age = 20;
    student1.gpa = 4.2;
    strcpy(student1.name, "Roy");    
    strcpy(student1.major, "Hacking");    

    printf("%s", student1.name);
    return 0;
}