#include<stdio.h>
#include<conio.h>


void printarray(int A[],int n )
{
    for(int i =0; i< n; i++){
        printf("%d ",A[i]);
    }
   printf("\n");
}
void bubble_sort(int A[],int n)// this a normal sorting on bubble sort
{
    for(int i = 0; i < n-1; i++)// it s contain the passing the total number of array
    {
         for(int j=0; j < n-1-i; j++)// it s check the main condition the of the loop
         {
            if(A[j] > A[j+1]){  //check the condition of the 1 to 2 big or not if yes so swap them in  to sorting.
                int temp = A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
         }
    }
    
}
void main()
{
    int A[] = {100,89,554,232,655,33,22,888,999,55};
    int n = 10;
    printarray( A , n);
    // bubble_sort_addictive(A,n);
    bubble_sort(A ,n);
    printarray(A,n);
   
}


void bubble_sort_addictive(int A[],int n)// it's work if array is sorted so it return 1st passing time it's save n-1 time passing in the normal sorting.
{
    int issorted =0;
    for(int i = 0; i < n-1; i++)
    {
        printf("number of passing %d\n ",i+1);
        issorted = 1;
         for(int j=0; j < n-1-i; j++)
         {
            if(A[j] > A[j+1]){
                int temp = A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                issorted = 0;
            }
         }
         if(issorted){
            return;
         }
    }
    
}
