// Case study [Parking Management System]
#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    float n;
    printf("Vehicle Type:");
    scanf(" %99[^\n]", ch);
    printf("Time(in hours:)");
    scanf("%f",&n);
    if( strcmp(ch, "Two wheeler")==0 && n<=5){
        printf("Parking charge=%.2frupees\n",20.00*n);
        printf("Extra cost = 0 rupees\n");
        printf("Total cost =%.2frupees",20.00*n);
    }
    else if(strcmp(ch,"Two wheeler")==0 && n>5){
        printf("Parking charge=%.2frupees\n",n*20);
        printf("Extra cost =%.2frupees\n",(20.00*n)*(20.00/100.00));
        printf("Total cost =%.2frupees",(n*20.00)+(20.00*n)*(20.00/100.00));
    }
    else if(strcmp(ch,"Three wheeler")==0 && n<=5){
        printf("Parking charge=%.2frupees\n",40*n);
        printf("Extra cost = 0 rupees\n");
        printf("Total cost =%.2frupees",40*n);
    }
    else if (strcmp(ch,"Three wheeler")==0 && n>5){
        printf("Parking charge=%.2frupees\n",n*40);
        printf("Extra cost =%.2frupees\n",(40*n)*(20.00/100.00));
        printf("Total cost =%.2frupees",(n*40)+(40*n)*(20.00/100.00));
     }
     else{
     printf("Error in writing the Vehicle Type");
     }
     return 0;
}