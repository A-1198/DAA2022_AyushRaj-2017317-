#include <stdio.h>
  

void selectionSort(int arr[], int n)
{
    int comp = 0;
    int swaps= 0;
    
    for(int i=0;i< n;i++)
    {
       int min = arr[i];
       int index=i;
       int flag = 0;
       comp = comp + i;
       for(int j=i+1;j<n;j++)
       {
           if(min>arr[j])
           {
               min = arr[j];
               index = j;
               flag = 1;
               
           }
       }
       if(flag==1)
       {
           int temp = arr[i];
           arr[i] = arr[index];
           arr[index]= temp;
           swaps++;
       }
      
    }
    printf("Comparisons :- %d \n",comp);
    printf("Swaps :- %d \n",swaps);
}


int main()
{
    int t;
    printf("Test cases :-");
    scanf("%d",&t);
    while(t>0)
    {
    int n,i;
    printf("Enter no of elements in array");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,n);
    t--;
    }
    return 0;
}
