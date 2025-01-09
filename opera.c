// operator

#include<stdio.h>

int main(){
    // printf("%d\n", 4 == 3);
    // printf("%d\n", 4 != 3);
    // printf("%d\n", 4 > 3);
    // printf("%d\n", 4 <= 3);

    //Logicl Operators
    printf("%d\n", 4>5 || 3<5 || 5!=6); // OR GATE
    printf("%d\n", 4>5 && 3<5); // AND GATE
    printf("%d\n", !(4>5 && 3<5)); // NOT GATE

    //Assignment Operators
    int a = 5;
    int b = 10;
    printf("%d\n", a+=b); // a = a + b
    printf("%d\n", a-=b); // a = a - b
    printf("%d\n", a*=b); // a = a * b
    printf("%d\n", a/=b); // a = a / b
    return 0;
}