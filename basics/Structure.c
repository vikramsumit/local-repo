//Structure

#include<stdio.h>
#include<string.h>

//User defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    // struct student r1;
    // r1.roll = 420;
    // r1.cgpa = 8.5;
    // // r1.name = "Rajubhai";
    // strcpy(r1.name, "Rajubhai");

    // printf("student name = %s\n", r1.name);
    // printf("student cgpa = %.2f\n", r1.cgpa);
    // printf("student roll no = %d\n", r1.roll);

    struct student ece[100];
    ece[0].roll = 420;
    ece[0].cgpa = 99.5;
    strcpy(ece[0].name, "Kajubhai");

    printf("name is %s\n",ece[0].name);

    struct student s1 = {234, 2.525, "Babubhai"};
    printf("your name is: %f\n", s1.float);

    struct student *ptr = &s1;
    printf("student roll is: %d\n", (*ptr).roll);

    return 0;

    
}