// Recursion
/* 

A function defined in C can call itself. This is called recursion. A function calling itself is also called 'recursive' function.
Example:
A very good example of recursion is factorial.
Factorial(n) = 1 x 2x3 ... x n
Factorial(n) = 1 x 2x3 ... (n-1) x n
Factorial(n) = Factorial (n-1) x n
Since we can write factorial of a number in terms of itself, we can program it using

*/

// write the factorial of a number using recursion 
#include<stdio.h>
int fact(int n){
    if(n==0||n==1)
        return 1;
    else{
    int factorial = fact(n-1)*n;
    return factorial;
    }
}
int main(){
        int num,p;
        scanf("%d",&num);
        p = fact(num);
        printf("%d",p);
        return 0;


    }