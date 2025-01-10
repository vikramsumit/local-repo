// Ask the user to enter their forstname and print it to thenm

#include<stdio.h>
#include<string
.h>
int countlength(char arr[]);

int main(){
    // char firstname[55];
    // printf("Enter your firstname here: ");
    // scanf("%s", firstname);
    // printf("your firstname is: %s\n", firstname);

    // char lastname[55];
    // printf("Enter your lastname here: ");
    // scanf("%s", lastname);
    // printf("your lastname is: %s\n", lastname);

    // // printf("Your fullname is: %s\n", firstname + ' ' + lastname);

    // char fullname[110]; 
    // snprintf(fullname, sizeof(fullname), "%s %s", firstname, lastname); 
    // printf("Your fullname is: %s\n", fullname);

    // char *canchange = "Hello World";
    // puts(canchange);
    // canchange = "Hello";    
    // puts(canchange);

    // char cannotchange = "hello workd";
    // puts(cannotchange);
    // cannotchange = "hello";

    // char name[100];
    // fgets(name, 100, stdin);
    // printf("Length is: %d\n", countlength(name)); 

    cahr name[] = "sumit";
    int length = strlen(name);
    printf("length is: %d", length);

    return 0;
}

int countlength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] !='\0'; i++){
        printf("%c", arr[i]);
        count ++;
    }
    return count-1;
}