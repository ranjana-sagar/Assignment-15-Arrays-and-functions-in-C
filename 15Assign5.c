#include<stdio.h>
int duplicate(int b[],int size)
{
    int i;
    for(i=0;i<(size-1);i++)
        if(b[i]==b[i+1])
           return b[i];
}
int main()
{
    int a[10],i;
    printf("Enter 10 numbers:_");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    printf("Adjecent duplicate value is %d",duplicate(a,10));
    return 0;    
}