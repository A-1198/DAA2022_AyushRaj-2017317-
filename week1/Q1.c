/******************************************************************************

Problem Statement :- Linear Search and calculation of number of comparsions
Ayush Raj
CE
2017317


*******************************************************************************/
#include <stdio.h>

int main()
{
   int n;
   printf("Enter no. of elements : ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   int key,flag=0,count=1;
   printf("Enter no. to be found ");
   scanf("%d",&key);
   for(int i=0;i<n;i++)
   {
       if(key==arr[i])
       {
       flag=1;
       break;
       }
       else
       {
       count++;
       }
   }
   if(flag==1)
   printf("The element is present and we have to do %d comparsion.",count);
   else
   printf("The element is not present.");
    return 0;
}
