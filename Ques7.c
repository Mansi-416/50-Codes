//Cyclically rotate an array by one
#include<stdio.h>
#include<conio.h>
#define MAX 50
void main(){
    int arr[MAX];
    int n,i;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp=arr[n-1];
    for(i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    printf("After cyclic rotation:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}