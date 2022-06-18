#include <stdio.h>  
int comp,swaps;
int partition (int a[], int start, int end)  
{  
    int pivot = a[end];  
    int i = (start - 1);  
  
    for (int j = start; j <= end - 1; j++)  
    {  
        comp++;  
        if (a[j] < pivot)  
        {  
            i++;  
            int t = a[i];  
            a[i] = a[j];  
            a[j] = t; 
            swaps++; 
        }  
    }  
    int t = a[i+1];  
    a[i+1] = a[end];  
    a[end] = t;  
    swaps++;
    return (i + 1);  
}  


void quick(int a[], int start, int end)  
{  
    if (start < end)  
    {  
        int p = partition(a, start, end);  
        quick(a, start, p - 1);  
        quick(a, p + 1, end);  
    }  
}  
 
int main()  
{  
  int t;
  printf("Enter test cases :-");
  scanf("%d",&t);
  while(t>0)
  {
    int n;
    printf("Enter no. of elements :-");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    quick(a, 0, n - 1);
    printf("Comparsions :- %d \n",comp);
    printf("Swaps :- %d \n",swaps);   
    swaps=0;
    comp=0;
    t--;

  } 
    return 0;  
}  