#include<conio.h>
#include<stdio.h>

int linearscherch(int arr[], int size ,int element)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[]={12,444,55,33,22,55,66,77,99,00};
    int size= sizeof(arr)/sizeof(int);
    int element = 00;
    int scarchindex = linearscherch(arr,size,element);
    printf("the element fount %d on thid index and value is %d \n",scarchindex,element);
    return 0;
}