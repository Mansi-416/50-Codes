// Find Union and Intersection of two arrays
#include<stdio.h>
#include<conio.h>
#define MAX 50
void main(){
    int a[MAX],b[MAX];
    int n,m,i;
    int flag;
    printf("Enter the no. of elements iof array 1:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the no. of elements of array 2:");
    scanf("%d",&m);
    printf("Enter the elements:");
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    printf("Union:");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    for(int i=0;i<m;i++){
        flag=0;
        for(int j=0;j<n;j++){
            if(b[i]==a[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d",b[i]);
        }
    }
    printf("\nIntersection:");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                printf("%d",a[i]);
                break;
            }
        }
    }
}