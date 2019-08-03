#include<stdio.h>
int main()
{
    int x=14;
int count=0,i=0;
// reach x = 0.
    while (x!=0)
    {
        // This operation reduces length
        // of every sequence of 1s by one.
        x = (x & (x << 1));

        count++;
    }
printf("%d",count);
}
