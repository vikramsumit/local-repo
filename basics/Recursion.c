// Program to write recursion

#include<stdio.h>
void printhw(int count);

int main(){
    printhw(55);
    printf("Hello my frd");
    printhw(5);
    return 0;
}

void printhw(int count){
    if(count == 0){
        return;
    }
    printf("Hello world\n");
    printhw(count - 1);
}