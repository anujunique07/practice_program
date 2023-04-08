#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 5

void binary_search(int[],int,int);
void main(){
    int n,arr[size],i;
    
    for(i=0;i<5;i++){
         printf("enter the no:");
      scanf("%d",&arr[i]);
    }
    printf("enter the value of searching:");
    scanf("%d",&n);
     binary_search(arr,size,n);
}
void binary_search(int arr[],int s,int n){
     int pos=-1,ub,lb,mid;
     lb=0;
     ub=(size-1);
     mid=(ub+lb)/2;
     
     while(lb<=ub && pos==-1){
        if(arr[mid]==n)
        pos=mid;
        else if(arr[mid]<n)
        lb=mid+1;
        else if (arr[mid]>n)
        ub=mid-1;

        mid=(lb+ub)/2;
     }
      if(pos==-1)
        printf("invalid");
        
    else
        printf("%d found in %d position\n",n,(pos+1));
        
}

      
