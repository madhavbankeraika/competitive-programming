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
        if(arr[i]>=arr[i+1])
        { arr[0]=arr[i];
      
        }
  else
  {
    arr[0]=arr[i+1];
  }}
  
    printf("%d",arr[0]);
    return 0;
}
