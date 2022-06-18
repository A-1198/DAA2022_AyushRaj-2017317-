#include<stdio.h>

#define INT_MAX 2,147,483,647
// helper function to partition the array around a pivot element
int partition(int *, int, int); 
int quickSelect(int *, int, int, int);
void swap(int *, int *);



int main()
{
    
    printf("Kth Smallest Element \n");
    int n;
    printf("Enter the number of testcases : ");
    scanf("%d", &n);
   
   while(n--) {
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements : ");
    for(int i = 0; i<size; i++) scanf("%d", &arr[i]);;
    int k;
    scanf("%d", &k);
    int ans = quickSelect(arr, 0, size-1, k);
    if(ans<INT_MAX) printf("%d\n", ans);
    else printf("Not present\n");
}
    return 0;
}

int partition(int *arr, int low, int high){
    
     int pivot = arr[high], i = low;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[high]);
    return i;
    
}

int quickSelect(int *arr, int low, int high, int k){
    
    while(k>0 && k<= high- low +1){
        int p = partition(arr, low, high);
        
        if (p- low == k - 1)
            return arr[p];
 
        if (p - low > k - 1)
            return quickSelect(arr, low, p - 1, k);
 
        return quickSelect(arr, p + 1, high,
                            k - p+ low - 1);
    }
    return INT_MAX;
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}