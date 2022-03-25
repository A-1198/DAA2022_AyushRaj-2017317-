/* Name :- Ayush Raj
   Section :- CE 
   Class Roll no. :- 20
   University Roll no. :- 2017317 */

   // Program to implement Insertion Sort and calculate total numbe of comparisons.

#include<stdio.h>

int insertionSort(int arr[], int n){
    int i, j, temp,cmp=0;
    for(i=1; i<n; i++){
        temp=arr[i];
        j=i-1;
       while(j>=0 && arr[j]>temp){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
                j--;
                cmp++;
            }
        }
            arr[j+1]=temp;
    }
    return cmp;
}


int main()
{
    int n,i,comparisons;
    printf("Enter no of elements in array");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    comparisons = insertionSort(arr,n);
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf(" \n The total number of comparisons are %d",comparisons);
}