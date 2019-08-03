#include<stdio.h>
int square_root(int n,int a[n])
{
int l=0,h=(n/2-1);
int mid;
while(l<=h)
{
mid=(l+h)/2;
if((a[mid]*a[mid])<n)
l=mid+1;
else if((a[mid]*a[mid])>n)
h=mid-1;
else
return mid;
}
return h;
}
int main()
{
int n;
printf("Enter the number");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
    a[i]=i;
}
int x=square_root(n,a);
printf("%d",x);
}
