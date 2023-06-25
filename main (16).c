#include<stdio.h>
int main(){
    int n;
    int k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp;
    int req;
    for(int i=0;i<n;i++)
    {
        if(arr[0]<arr[i+1])
        { arr[0]=arr[i];
        }
       
  }
  req=arr[0]-k;
  if(req<=0)
  {
    printf("0");
  }
  else{
    printf("%d",req);
  }
  return 0;
}
