#include<stdio.h>

void mergeSort(int *, int, int);
void merge(int *, int , int , int);


int main()
{
    int n;
    printf("Enter the number of testcases : ");
    scanf("%d", &n);
    while(n--){
    int size, key;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);
    //sort the array
    mergeSort(arr, 0, size-1);
    int p1=0, p2 = size-1;   //two pointer approach
    while(p1<p2){
        if(arr[p1]+arr[p2]==key){
            printf("%d %d\n", arr[p1], arr[p2]);
            break;
        }
        else if(arr[p1]+arr[p2]>key) p2--;
        else p1++;
    }
    if(p1>=p2)  printf("No such element exist. \n");

}
    return 0;
}

void merge(int *a,int lb,int mid,int up ){
   int n1 = mid - lb + 1, n2 = up - mid;
   int i = 0, j = 0, k = lb;
   int left[n1], right[n2];
   for(i=0; i<n1; i++) left[i]= a[i+lb];
   for(i=0; i<n2; i++) right[i]= a[i+mid+1];

   i = 0;
   j = 0;
   while(i<n1 && j<n2){
       if(left[i]<=right[j]) a[k++] = left[i++];
       else a[k++] = right[j++];
            

   }
   while(i<n1) a[k++] = left[i++];
   while(j<n2) a[k++] = right[j++];

}

void mergeSort(int *a,int lb,int up){
    int mid=(lb+up)/2;
    if(lb<up){
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,up);
        merge(a,lb,mid,up);
    }
}