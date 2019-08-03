#include<stdio.h>
int lower_bound(int arr[],int n,int elem)
{
int l=0,h=n-1;
while(l<h)
{
int mid=l+(h-l)/2;
if(arr[mid]>=elem)
h=mid;
else if(arr[mid]>elem)
l=mid+1;
}
return l;
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
int x=lower_bound(a,n,elem);
printf("Lower bound is %d",x);
}
