//Reverse an array in place
#include<stdio.h>
#include<conio.h>
#define MAX 100
void main(){
    int arr[MAX];
    int t=0,n,i;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=t;
   }
   printf("Reversed array:");
   for(i=0;i<n;i++){
   printf(" %d",arr[i]);
   }
}
