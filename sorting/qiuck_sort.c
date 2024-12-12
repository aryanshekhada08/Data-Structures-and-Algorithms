#include <stdio.h>
#include <conio.h>

void printarray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void qiuck_sort(int A[], int low, int high)
{
    int partionindex;
    if (low < high)
    {
        partionindex = partition(A, low, high);
        qiuck_sort(A, low, partionindex - 1);
        qiuck_sort(A, partionindex + 1, high);
    }
}
int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}
void main()
{
    int A[] = {12, 33, 44, 76, 55, 33, 00};
    int n = 7;
    printarray(A, n);
    qiuck_sort(A, 0, n - 1);
    printarray(A, n);
}