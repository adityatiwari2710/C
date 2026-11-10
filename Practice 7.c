//Write 2 functions - one to print "Hello" & second to print "bye".
#include<stdio.h>
void phello(){
    printf("Hello\n");
}
void pbye(){
    printf("Bye\n");
}
int main(){
    phello();
    pbye();
    pbye();
    phello();
    return 0;
}

//Write a function that prints Namaste if user is Indian & Bonjour if the user is French.
void greetin(){
    printf("Namaste\n");
}
void greetfr(){
    printf("Bonjour\n");
}
int main(){
    char ch ;
    printf("If person is indian then input I or If the person is french input F:");         
    scanf("%c",&ch);
    if(ch=='I')
    greetin();
    else if(ch=='F')
    greetfr();
    else
    printf("Other Nationality");

    return 0;
}