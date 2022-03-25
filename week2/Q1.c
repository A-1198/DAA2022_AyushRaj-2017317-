#include<stdio.h>

int bubbleSort(int arr[], int n){
    int flag=0, i,j,cmp=0,temp;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                cmp++;
                flag=1;
            }
            if(flag==0)
                break;

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
    int comparisons = bubbleSort(arr,n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf(" \n The total number of comparisons are %d",comparisons);
    return 0;
}