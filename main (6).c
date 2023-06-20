#include<stdio.h>
int main()
{
    int arr[5];
   int  maxsum=0;
   int minsum=0;
  int max=arr[0];
   int min=arr[0];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
      
      if(arr[i]>arr[i+1])
        {
            max=arr[i];
        }
        
         }
         for(int i=0;i<5;i++)
    { 
        if(arr[i]<arr[i+1])
        {
            min=arr[i];
        }
        
}
  int sum=0;
  for(int i=0;i<5;i++)
    {
      sum=sum+arr[i];
    }
maxsum=sum-max;
  minsum=sum-min;
  printf("%d %d",minsum,maxsum);
  
return 0;

}

