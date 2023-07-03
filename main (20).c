#include<stdio.h>
int main()
{
  int n;
  scanf("%d\n",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    {
      scanf("%d\n",&arr[i]);
      
        
    }
  int sumb=0;
  int sumg=0;
  for(int i=0;i<n;i++)
    {
      if(i%2==0)
      {
        sumb=sumb+arr[i];
      }
      if(i%2==1)
      {
        sumg=sumg+arr[i];
      }
    }
  
  int cho;
  scanf("%c", &cho);
  if(cho=='b')
  {
    printf("%d", sumb);
    
  }
  if(cho=='g')
  {
    printf("%d", sumg);
    
  }
  return 0;
  
  
}