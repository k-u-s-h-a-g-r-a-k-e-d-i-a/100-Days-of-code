/*65*/
#include <stdio.h>
int binary_search(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int target;
    scanf("%d", &target);
    
    int result = binary_search(arr, n, target);
    
    if (result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("-1\n");
    }
    
    return 0;
}
