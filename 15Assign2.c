#include<stdio.h>
int smallestN(int b[],int size)
{
    int i,min=b[0];
    for(i=1;i<size;i++)
        if(min>b[i])
           min=b[i];
    return min;       
}
int main()
{
    int a[10],i;
    printf("Enter ten numbers:_");
    for(i=0;i<=9;i++)
       scanf("%d",&a[i]);
    printf("Smallest number in the Array is %d",smallestN(a,10));
    return 0;   
}