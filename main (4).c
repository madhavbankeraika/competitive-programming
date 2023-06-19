#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
       }
       int pos=0;
       int neg=0;
       int zer=0;
       for(int i=0;i<n;i++)
       {
        if(arr[i]>0)
        {++pos;}
        else if(arr[i]<0)
        { ++neg; }
        else {
        
            ++zer;
        }
       }
       float positive=pos/n;
       float negetive=neg/n;
       float zero=zer/n;
       positive=(positive*100000)/100000;
negetive=(negetive*100000)/100000;
positive=(negetive*100000)/100000;       
       printf("%f\n",positive);
       printf("%f\n",negetive);
       printf("%f\n",zero);
       
       
}