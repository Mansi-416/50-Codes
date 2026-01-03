//. Find the maximum and minimum element in an array
#include<stdio.h>
#include<conio.h>
#define MAX 50
void main(){
    int arr[MAX];
    int n,i;
    int max=arr[0];int min=arr[0];
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
    if(arr[i]<min){
        min=arr[i];
    }
}
    printf("Maximum element:%d",max);
    printf("Minimum element:%d",min);
}