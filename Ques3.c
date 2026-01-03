// Find the 'Kth' max and min element of an array
#include<stdio.h>
#include<conio.h>
#define MAX 100
void main(){
    int arr[MAX];
    int i,j,n,k,temp=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements in an array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of k:");
    scanf("%d",&k);
    if(k<=0 || k>n){
        printf("invalid value of k");
        return;
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int min=arr[k-1];
    int max=arr[n-k];
    printf("Minimum element at Kth position:%d\n",min);
    printf("Maximum element at Kth position:%d",max);
}