// 1. Write a program to print the average of 3 numbers.
#include<stdio.h>
 int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d\n", (a+b+c)/3);
    
// 2.Write a program to check if given character is digit or not.
    char d;
    scanf("%d",&d);
    if(d >=0 && d<=9){
        printf("its a digit",d);
    }
    else{
        printf("its not a digit",d);
    }
    return 0;
}

  