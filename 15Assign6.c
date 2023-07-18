#include<stdio.h>
void reverse(int b[],int size)
{
    int x,y,z=size-1,i;
    for(i=0;i<(size/2);i++,z--)
    {
        x=b[i];
        y=b[z];
        b[i]=y;
        b[z]=x;
    }
    for(i=0;i<size;i++)
        printf("%d ",b[i]);
}
int main()
{
    int a[10],i;
    printf("Enter 5 numbers:_");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    reverse(a,10);
    return 0;    
}