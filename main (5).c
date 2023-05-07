#include<stdio.h>

int main()
{
    int B;
    printf("enter number of bananas: ");
    scanf("%d",&B);
    int k;
    printf("cost of one banana: ");
    scanf("%d",&k);
    int cost=0;
    int n;
    printf("money the soldier has: ");
    scanf("%d",&n);
    for(int i=1;i<=B;i++)
    {
        cost=cost+i*k;
    }
    printf("cost: %d\n",cost);
    printf("money borrowed from friend: %d",cost-n);
    return 0;
}