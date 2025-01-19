// Accessing an Array

#include <stdio.h>

void printNumbers(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d : %d\n", i, arr[i]);
    }
}

void _printNumbers(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d : %d\n", i, arr[i]);
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    
    printNumbers(arr, 6);
    printNumbers(arr, 4);

    return 0;
}