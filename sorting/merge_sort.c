#include <stdio.h>

void merge(int a[], int mid, int low, int high) {
    int i = low;
    int j = mid + 1;
    int k = low;
    int b[100]; // Temporary array

    // Merge the two halves
    while (i <= mid && j <= high) {
        if (a[i] < a[j]) {
            b[k++] = a[i++];
        } else {
            b[k++] = a[j++];
        }
    }

    // Copy any leftover elements from the first half
    while (i <= mid) {
        b[k++] = a[i++];
    }

    // Copy any leftover elements from the second half
    while (j <= high) {
        b[k++] = a[j++];
    }

    // Copy the sorted elements back to the original array
    for (i = low; i <= high; i++) {
        a[i] = b[i];
    }
}

void merge_sort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        merge_sort(a, low, mid); // Sort the left half
        merge_sort(a, mid + 1, high); // Sort the right half
        merge(a, mid, low, high); // Merge the sorted halves
    }
}

void print_array(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void main() {
    int a[] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = sizeof(a) / sizeof(a[0]); // Dynamically calculate array size

    printf("Original array: ");
    print_array(n, a);

    merge_sort(a, 0, n - 1);

    printf("Sorted array: ");
    print_array(n, a);
}