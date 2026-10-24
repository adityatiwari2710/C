// else if statemnets (basically we call this else if ladder we can use multiple else if between if and else)
/*

if(Condition 1) {
//do something if TRUE
}
else if (Condition 2){
//do something if 1st is FALSE & 2nd is TRUE
}

*/
#include<stdio.h>
    int main() {
    int age;
    scanf("%d",&age);
    if(age >18){
        printf("Eligible to vote\n");
        printf("Eligible to drive\n");
        printf("Adult");
    }
    else{
    printf("Not Eligible");
    }
    printf("\nThank you");// this printf will print the value always because it is independent to if-else condition
    return 0;