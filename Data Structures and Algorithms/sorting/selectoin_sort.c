#include<stdio.h>
#include<conio.h>
void ptintarray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void selection_sort(int A[] ,int n)
{
    int indexofmin,temp;
     for (int i = 0; i < n-1 ; i++)
     {
        indexofmin = i;
        for (int j = i+1 ; j < n; j++)
        {
            if( A[j] < A[indexofmin]){
                    indexofmin = j;
            }
        }
        temp = A[i];
        A[i]= A[indexofmin];
        A[indexofmin] = temp;
     }
     
}
void main()
{
    //printf("hello world");
    int A[] ={13,55,33,3,4,2,1};
    int n = 7;
    ptintarray(A ,n);
    selection_sort(A ,n);
    ptintarray(A,n);
}