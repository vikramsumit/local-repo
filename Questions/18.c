// Write a program in c to print the elements of an array in reverse order

#include<stdio.h>

void reverse_array(int arr[], int n){
    for (int i = n; i > 1; i--)
    {
        printf("%d :%d\n", i, arr[i]);
    }
    
}

int main(){
    int arr[] = {4,54,24,67,354,657,32,67,2,657,12};

    // int n = sizeof(arr) / sizeof(arr[0]);

    reverse_array(arr,10);

    return 0;
}