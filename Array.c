// Array

#include <stdio.h>
int main(){
    int marks[4];
    
    printf("Enter marks of phy:");
    scanf("%d", &marks[0]);

    printf("Enter marks of chem:");
    scanf("%d", &marks[1]);

    printf("Enter marks of maths:");
    scanf("%d", &marks[2]);

    printf("phy = %d, chem = %d, maths = %d", marks[0], marks[1], marks[2] );

    return 0;
}