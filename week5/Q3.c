#include<stdio.h>

int main()
{
    int m, n;
    scanf("%d", &m);
    int arr1[m];
    for(int i=0; i<m; i++) scanf("%d", &arr1[i]);
    scanf("%d", &n);
    int arr2[n];
    for(int i=0; i<n; i++) scanf("%d", &arr2[i]);
    int p1 = 0, p2 = 0;
    while(p1<m && p2<n){
       if(arr1[p1]>arr2[p2]) p2++;
       else if(arr1[p1]<arr2[p2]) p1++;
       else {
           printf("%d ",arr1[p1]);
           p1++;
           p2++;
       }
    }
          
    
    return 0;
}