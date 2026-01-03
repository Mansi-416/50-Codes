//Move all negative numbers to beginning and positive to end
#include<stdio.h>
#include<conio.h>
#define MAX 50
void main(){
    //[ -1, 3, -5, 6, -2, 4 ]
    int arr[MAX];
    int n,i;
    int low=0,high;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    high=n-1;
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while (low < high) {
        if (arr[low] < 0)
            low++;
        else if (arr[high] > 0)
            high--;
        else {
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
        }
    }

    // Print result
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
