#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("raju.txt", "r");
    fclose(fptr);

    return 0;
}