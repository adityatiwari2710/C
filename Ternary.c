// Ternary
//Condition? doSomething if TRUE: doSomething if FALSE;

#include<stdio.h>
int main() {
int age;
printf("enter age : ");
scanf ("%d", &age) ;
age >= 18 ? printf("adult \n") : printf("not adult \n");
return 0;
}
// if there is single line statement then we can use ternanry operators rather than if-else operator