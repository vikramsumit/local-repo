// Make your own pow function.

#include<stdio.h>

int my_pow(int x, int y){
    int result = 1;

    if(y<0){
        x = 1/x;
        y = -y;
    }
    for(int i = 0; i<y; i++){
        result *= x; // result = result * x;
    }
    return result;
}
int main(){
    // int x = 23;
    // int y = 2;
    int x,y;
    
    printf("Enter your base(x): ");
    scanf("%d", &x);
    printf("Enter your power(y): ");
    scanf("%d", &y);

    printf("Power of %d and %d is:%d \n", x,y,my_pow(x, y));

    return 0;
}