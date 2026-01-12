//Kadane's Algorithm - Maximum Subarray Sum
#include <stdio.h>

int main() {
    int a[50], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int currSum = a[0];
    int maxSum = a[0];
    for (i = 1; i < n; i++) {
        if (currSum + a[i] > a[i])
            currSum = currSum + a[i];
        else
            currSum = a[i];

        if (currSum > maxSum)
            maxSum = currSum;
    }
    printf("Maximum Subarray Sum = %d", maxSum);

    return 0;
}
