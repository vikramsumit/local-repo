//Program to print nth term of fibonacci sequence

# include<stdio.h>
int fib(int n);
int main(){
     printf("%d", fib(8));
}

int fib(int n){
    if (n == 0 || n == 1)
    {
        if (n == 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return 1;
        }
        
        
    }
    
    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    // printf("fibonacci of %d is: %d\n",n, fibN);
   
    return fibN;
}