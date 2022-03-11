/******************************************************************************
Problem Statement :- Binary Search and calculation of number of comparsions
Ayush Raj
CE
2017317

*******************************************************************************/


#include <stdio.h>
int binarySearch(int *arr, int size, int key)
{
    int left=0, right=size-1, mid=0, cmp=1;
    while(left<=right){
        mid=left+(right-left)/2;
        if(arr[mid]==key){
            return cmp;
        }
        // move left
        else if(arr[mid]>key){
            right=mid;
        }
        //move right
        else {
            left=mid+1;
        }
        // increment the comparison
        cmp++;
    }
    return -1;
}

int main()
{
    int n,pos;
    printf("Enter the no of elements in array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter a sorted array ");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   int key;
   printf("Enter key to be searched ");
   scanf("%d",&key);
   if(binarySearch(arr,n,key)==-1)
   printf("The key not found");
   else
   printf("The key is found and we did %d comparsions.",binarySearch(arr,n,key));
    return 0;
}
