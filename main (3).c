#include <stdio.h>

int main(void) {
printf("enter the weight of the watermelon\n");
  int w=0;
  scanf("%d",&w);
  for(int i=0;i<=w;i++)
    {
      
          if((i%2==0)&&((w-i)%2==0))
          {
            printf("yes");
           break; 
          }
      else{
        printf("no");
        break;
        
      }
        
    }
  return 0;
  
}