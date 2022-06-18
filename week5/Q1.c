#include <stdio.h>

int temp[256];

int main()
{
    int t;
    printf("Enter test cases :");
    scanf("%d",&t);
    while(t>0)
    {
    for(int i=0;i<256; i++) temp[i]=0;
    int n;
    printf("Enter number of element :");
    scanf("%d\n",&n);
    
    char arr[n];
    char c;
    for(int i=0;i<n;i++)
    {
        scanf("%s", &arr[i]);
        temp[arr[i]]++;
    }
    
    int max = 0;
    for(int i =0;i<256;i++)
    {
      if(temp[i]>max)
      {
          max = temp[i];
      }
    }
    int k;
    for(k =0;k<256;k++)
    {
      if(temp[k]==max)
      {
          break;
      }
    }
    if(max!=1)
    {
    char c = k;
    printf("%c - %d \n",c,max);
    }
    else
    {
        printf("NO duplicate present \n");
    }
    t--;
    }
    return 0;
}