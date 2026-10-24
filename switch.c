//switch
/*

switch(number) {
case C1: //do something
break;     (if break will be noot here than all the cases after this break statement will be printed)
case C2 : //do something break;
default: //do something
important points about switch:
1.Cases can be in any order
2.Nested switch (switch inside switch) are allowed

*/

#include<stdio.h>
int main() {
    int day;   // 1. mon, 2.tue,3.wed
    scanf("%d",&day);
    switch (day){
case 1 :
printf ("monday \n");
 break;
case 2 : printf("tuesday \n");
break;
case 3 : printf ("wednesday \n");
 break;
case 4 : printf("thursday \n");
 break;
case 5 : printf("friday \n");
break;
case 6 : printf ("saturday \n"); 
break;
case 7 : printf("sunday \n");
break;
default:
 printf ("not a valid day! \n");
    }
    return 0;
}

// use of switch operator using characters
/*
#include<stdio.h>
int main() {
    char day;   // a. mon, b.tue,c.wed
    scanf("%c",&day); (%c is used for single character like a,b,c ; for words we use %s)
    switch (day){
case a :
printf ("monday \n");
 break;
case b : printf("tuesday \n");
break;
case c : printf ("wednesday \n");
 break;
case d : printf("thursday \n");
 break;
case e : printf("friday \n");
break;
case f : printf ("saturday \n"); 
break;
case g : printf("sunday \n");
break;
default:
 printf ("not a valid day! \n");
    }
    return 0;
}
*/