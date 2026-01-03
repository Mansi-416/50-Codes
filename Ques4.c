//Sort an array of 0s, 1s and 2s (Dutch National Flag Problem)
#include<stdio.h>
#include<conio.h>
#define MAX 50
void main(){
    int arr[MAX];
    int n,i,mid=0,low=0,high;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    high=n-1;
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while(mid<=high){
        if(arr[mid]==0){
            int t=arr[low];
            arr[low]=arr[mid];
            arr[mid]=t;
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            int t=arr[mid];
            arr[mid]=arr[high];
            arr[high]=t;
            high--;
        }
    }
    for(i=0;i<n;i++){
    printf("%d",arr[i]);
    }
}