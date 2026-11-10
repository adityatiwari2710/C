//Functions
// It is a block of code that performs particular task
// take arguement --> Do work --> Return result
// functions can be used multiple times
// increase code reusability

#include<stdio.h>
// function declaration/prototype
void printhello(){
    printf("Hello\n");//function definition
    printf("My name is Aditya\n");
}
int main(){
    printhello();//function calling
    printhello();
    return 0;
}
//Properties of Functions
// Execution always starts from main
// A function gets called directly or indirectly from main
// There can be multiple functions in a program  