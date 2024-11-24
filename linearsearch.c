#include <stdio.h>

int linearSearch(int arr[], int size, int target, int index) {
    if (index >= size) {
        return -1;
    }
    if (arr[index] == target) {
        return index;
    }
    return linearSearch(arr, size, target, index + 1);
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter target: ");
    scanf("%d", &target);
    int result = linearSearch(arr, size, target, 0);
    if (result == -1) {
        printf("Element not found.\n");
    } else {
        printf("Element found at index %d.\n", result);
    }
    return 0;
}
