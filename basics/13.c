// Program to print sum by using recursion

#include<stdio.h>

int sum(int x,int y);
void printtable(int n);

int main(){
    int x,y;

    printf("Enter your first number: ");
    scanf("%d",&x);
    printf("Enter your second number: ");
    scanf("%d",&y);
    
    int s = sum(x,y);
    printf("Required sum is %d \n:", s);

    printtable(5); //argument/actual parameter
    printtable(255);
    printtable(55);
    return 0;

}

int sum(int x,int y)
{
    return (x+y);
}

void printtable(int n){ //formal parameter or parameter 
    for (int  i = 1; i <= 10; i++)
    {
        printf("%d\n",i*n);
    }
}