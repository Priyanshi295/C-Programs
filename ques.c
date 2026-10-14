#include<stdio.h>
void findmax(int arr[],int n, int *max)
{
for(int i=0;i<n;i++)
{
if (arr[i]>*max)
{
*max=arr[i];
}
}
}
int main()
{
int n; int max=0;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
findmax(arr,n,&max);
printf("max element is %d",max);
return 0;
}
