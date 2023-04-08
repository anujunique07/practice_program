#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 5

void insertion_sort(int[],int);
void main(){
    int i,arr[size];

    for(i=0;i<size;i++){
        printf("enter the unsorted num:");
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,size);
}
void insertion_sort(int a[],int s){
    int i,j,temp;
     
    for(i=1;i<s;i++){
        temp=a[i];
        for(j=i-1;j>=0 && temp<a[j];j--){
            a[j+1]=a[j];
        }
        a[j+1]=temp;
             }
        printf("all sorted num:");
        for(i=0;i<s;i++){
       printf("%d\t",a[i]);
       
}
}