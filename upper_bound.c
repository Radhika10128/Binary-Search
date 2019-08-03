#include<stdio.h>
int upper_bound(int arr[],int n,int elem)
{
int l=0,h=n-1;
while(l<h)
{
int mid=l+(h-l)/2;
if(arr[mid]<=elem)
l=mid+1;
else if(arr[mid]>elem)
h=mid;
}
return h;
}
int main()
{
int n;
printf("Enter the number of elements");
scanf("%d",&n);
int a[n];
printf("Enter the elements of array");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
int elem;
scanf("%d",&elem);
int x=upper_bound(a,n,elem);
printf("Upper bound is %d",x);
}
