
// Q57 (Arrays (1D))
// Find the sum of array elements.

#include <stdio.h>
int main() {
	int n,sum = 0 ;
	printf("Enter size of array: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter %d elements: ", n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	printf("Sum of elements: ");
	for(int i = 0; i < n; i++) {
		sum += arr[i];

    }
    printf("%d ", sum);
	printf("\n");
	return 0;
}
