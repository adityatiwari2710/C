// write a c program using functions taking input of 2 numbers and returning there sum
#include<stdio.h>
// int sum(int x,int y);
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     int s = sum(a,b);
//     printf("%d",s);
//     return 0;
// }
// int sum(int x, int y){
//     return x+y;
// }

// write a c program using functions taking n as input and print its table
void print_table(int n){
    for(int i= 1; i<=10;i++){
        printf("%d\n",n*i);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    print_table(n);
    return 0;
     
}