#include<stdio.h>
int main()
{
    int pointer=1;
    int t;
    int n;
    
    int k;
    int count;
    
    printf("enter the number of test cases");
    scanf("%d",&t);
    if(pointer<=t)
    {
       
        scanf("%d %d",&n,&k);
        int arr[n];
      
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=0)
            {
                count=count+1;
            }
        }
        if(count<=k){
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
        pointer=pointer+1;
        
    }
    return 0;
}