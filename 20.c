// Write a function to count odd no in an array

#include<stdio.h>
int countodd(int num[], int n);

int main(){
    int num[] = {843,3,45,3254,234,44,32,454,23,43,34,6,345,98,345 } ;
    printf("%d",countodd(num , 15));
    return 0;
    
}

int countodd(int num[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(num[i] % 2 != 0){
            count++;
        }
    }
    return count;
}