// Write a program using recursion to calculate nth element of Fibonacci series.
#include<stdio.h>
// int fibo(int x){
//     if(x==1 || x ==2 ){
//         return x-1;
//     }
//         return fibo(x-2)+fibo(x-1);

//     }
    
// int main(){
//     int n;
//     scanf("%d",&n);
//     int fib= fibo(n);
//     printf("%d",fib);
//     return 0;
// }

// write a c program to print 1 to n using recursion
void range(int a){
    if(a == 0){
    return ;
    }
    range (a-1);
    printf("%d ",a);
    
}
int main(){
    int n ;
    scanf("%d",&n);
    range(n);
    return 0;
}