// Salting for password
// Slicing of words
// Count the occurence of vowels in string

#include <stdio.h>
#include <string.h>

void Salting(char password[]);
void slice(char str[], int n, int m);
int countvowels(char str[]);

int main(){
    // char password[100];
    // scanf("%s", password);
    // Salting(password); 

    // char str[] = "HelloWorld";
    // slice(str,2,8);
    
    char str[] = "Rajubhaiisafantasticpersonlksdjfoiskejoifr";
    printf("Requires no of vowels are: %d", countvowels(str));
}

int countvowels(char str[]){
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++ ){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u');
        count ++;
    }
    return count;
}

void slice(char str[], int n, int m){
    char newStr[100];
    int j = 0;
    for(int i = n; i<=m; i++, j++){
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}

void Salting(char password[]){
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass,password); //newpass = "test"
    strcat(newPass, salt); // newpass = "test" + "123"
    puts(newPass);
}