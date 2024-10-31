#include<conio.h>
#include<stdio.h>

void printarray(int A[] ,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);

    }
    printf("\n");
}

void inserion_sort(int A[], int n )
{
    int key,j;
    for (int i = 0; i <= n-1 ; i++)
    {
         key = A[i];
         j = i-1;
          while( j>=0 && A[j]> key ){
            A[j+1]=A[j];
            j--;
          }
          A[j+1]=key;
    }
    
}
void main()
{
    printf("hello world\n");
    int A[] ={12,55,3,44,7,66,22,11,1,0,76,88,566,66,66};
    int n = 15;
    printarray(A , n);
    inserion_sort(A ,n);
    printarray(A ,n);
}

