#include <stdio.h>

// Function for Index Searching
int indexSearch(int arr[], int index[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[index[i]] == key)
            return index[i];  // Returning the original index
    }
    return -1;  // Not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int index[] = {0, 1, 2, 3, 4};  // Index array
    int n = 5, key = 30;

    int result = indexSearch(arr, index, n, key);
    if (result != -1)
        printf("Index Search: Element %d found at index %d\n", key, result);
    else
        printf("Index Search: Element not found\n");

    return 0;
}