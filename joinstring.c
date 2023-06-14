#include<stdio.h>
int main()
{


int n;
int m;
printf("enter the elements of array 1\n");
scanf("%d",&n);
printf("enter the number of elements in hthe second string\n");
scanf("%d",&m);
int a[n];
int b[m];
int c=m+n;
int d[c];
printf("enter elements of 1st array");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter elements of the second array");
for(int j=0;j<m;j++)
{
scanf("%d",&b[m]);
}
for(int i=0; i<c;i++)
{
    if(i%2==0)
    {
    d[i]=a[i/2];
    }
    else{
        d[i]=b[i-1];
    }

}	
printf("\nElements in array are: ");  
    for(int i=0; i<c; i++)  
    {  
        printf("%d  ", d[i]);  
    } 
    printf("\n");	
return 0;
}
