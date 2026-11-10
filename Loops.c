/* 
Loop Control Instructions
To repeat some parts of the program
Types of loops
1 - for
2 - do while
3 - while
*/

/*
for loop
Syntax:
for(initialisation;condition;updation){
    //do something
}
*/
// print number from 0 to 10 using for loop
#include<stdio.h>
int main(){
    int i;
    for(i=0;i<=10;i++)
    printf("%d\n",i);
    return 0;
}

/*
 while loop
Syntax:
while(condition){
// anything
}
*/ 
// write a program using while loop to print frpm 0 to 10
int main(){
    int i = 0;
    while(i<=10){
    printf("%d\n",i);
    i++;
}
}

/*
do while loop
Syntax:
do{
//anything
} while(condition);
 
*/
