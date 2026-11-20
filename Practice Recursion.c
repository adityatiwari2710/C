// Write a program using recursion to calculate nth element of Fibonacci series.
#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2)
    return n-1;
    return fibo(n-1 )+ fibo(n-2);

}
int main(){
    int y;
    scanf("%d",&y);
    int x = fibo(y);
    printf("%d",x);
    return 0;

}