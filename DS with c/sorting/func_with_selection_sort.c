#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

void selection_sort(int[],int);
void main(){
    int i,arr[size];
    
     
    for(i=0;i<size;i++){
        printf("enter any 5 num:");
        scanf("%d",&arr[i]);
    }
       selection_sort(arr,size);
       
}
void selection_sort(int a[],int s){
    int i,j,temp,min;
     
     for(i=0;i<(s-1);i++){
        min=i;
    for(j=i+1;j<s;j++){
        if(a[j]<a[min])
        min=j;
    }
     
     if(a[i]!=a[min]){
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
     }
    }
    printf("all sorted array:");
     for(i=0;i<s;i++)
        printf("%d\t",a[i]);
     
     }
     
 
