#include<stdio.h>
void print(int a){
    if(a==0)
    return ;
    print(a-1);
    printf("%d ",a);
}
int main (){
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}
