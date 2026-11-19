// Arrays
// Collection of similar data types stored at contiguous memory locations

// Syntax
// int marks[3];  (here three denotes the size of the marks that is number of values stored)
// char name[10];
// float price[2];

// Input & Output
// scanf(%d", &marks[O]);
// printf(%d, marks[O]);

#include<stdio.h>
int main(){
    int n;
    int marks[n];
    scanf("%d",&n);
    for(int i =0; i<n;i++){
        scanf("%d",&marks[i]);
    }
