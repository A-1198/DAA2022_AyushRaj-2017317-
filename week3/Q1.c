#include<stdio.h>
void insertionSort(int arr[], int n){
    int i, j, temp,cmp=0,shift=0;
    for(i=1; i<n; i++){
        temp=arr[i];
        j=i-1;
                cmp++;
       while(j>=0 && arr[j]>temp){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
                j--;
        shift++;
            }
        }
            arr[j+1]=temp;
    }
    printf("Comparsions :- %d \n",cmp);
    printf("Shifts :- %d \n",shift);
}


int main()
{
    int t;
    printf("Test cases :- ");
    scanf("%d",&t);
    while(t>0)
    {
    int n,i,comparisons;
    printf("Enter no of elements in array");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     insertionSort(arr,n);
     t--;
    }
     return 0;
}
