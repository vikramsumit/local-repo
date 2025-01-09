# include<stdio.h>

int main (){
    int num[5] = {10,12,32,23,23};

    int i;

    printf("required elesjkdflji:");
    for (i = 0; i < 5; i++){
        printf("%d\n ", num[i]);
    }

    // program to sum
    int sum = 0;

    printf("Your required sum is: ");
    for (i = 0; i < 5; i++){
        sum = sum + num[i];
        }
        printf("%d\n", sum);

    return 0;
}