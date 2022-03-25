/* Name :- Ayush Raj
   Section :- CE 
   Class Roll no. :- 20
   University Roll no. :- 2017317 */

   // Program to implement Selection Sort and calculate total numbe of comparisons.
#include <stdio.h>
   int selectionSort(int arr[], int n)
{
    int i,temp=0,j,cmp=0,min_idx=0;
  
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        {
          if (arr[j] < arr[min_idx])
            min_idx = j;
            cmp++;
        // Swap the found minimum element with the first element
        temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
        }
    }
    return cmp;
}



int main()
{
    int n,i;
    printf("Enter no of elements in array");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int comparisons = selectionSort(arr,n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf(" \n The total number of comparisons are %d",comparisons);
    return 0;
}