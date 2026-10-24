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
    if(age > 0 && age < 12){
       printf("child");
    }
    else if(age>=12 && age <20){
        printf("Teenager");
    }
    else if(age>=20 && age<60){
    printf("Adult");
    }
    else {
        printf("Senior citizen");
    }
    return 0;
}
 