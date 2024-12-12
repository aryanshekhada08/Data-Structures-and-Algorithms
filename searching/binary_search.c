#include<conio.h>
#include<stdio.h>//under stand this a binaeryscaech how works

int binaryscarch(int arr[], int size ,int element)
{
    int low,mid,high;
    low=0;
    high=size-1;
    
      while(low<=high)
      {
         mid=(low+high)/2;  
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid] < element){
            low=mid + 1;
        }
        else{
            high = mid - 1;
        }
      }
      return -1;
}
int main()
{
    int arr[] = {12,33,66,88,98,101,110};
    int size=sizeof(arr)/sizeof(int);
    int element = 12;
    int scarchindex = binaryscarch(arr,size,element);
    printf("the index found on %d number value is %d",scarchindex,element);
    return 0;
}