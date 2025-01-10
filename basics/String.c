//String
// write a program to print all character of first name and lastname

#include<stdio.h>
void printstring(char arr[]);
int main(){
    // char name[] ={'r','a','j','u','b','h','a','i','\0' };
    // char name[] ={rajubhai};
    // char movie[] = {hera pheri};

    char name[55];
    scanf("%s", name);
    printf("Your name is: %s\n", name);

    char firstname[] = "rajubhai";
    char lastname[] = "babubhai";

    printstring(firstname);
    printstring(lastname);
    return 0;

}

void printstring(char arr[]){
    for (int i = 0; arr [i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}