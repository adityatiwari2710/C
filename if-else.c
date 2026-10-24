// if-else statements 
/*

Syntax:
if(Condition) {
//do something if TRUE
else {
//do something if FALSE
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
} 

// nested if ( it checks each and every condition , it does not stop on any step)
/*

if(condition 1){
    statement}
    if(condition 2){
    statement}
    if(condition 3){
    statement}
   and so on....
*/