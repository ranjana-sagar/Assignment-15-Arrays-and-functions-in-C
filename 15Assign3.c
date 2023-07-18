#include<stdio.h>
void sort(int b[],int size)
{
    int i,j,x,y=size-1;
    for(j=0;j<(size-1);j++,y--)
        for(i=0;i<y;i++)
            if(b[i]>b[i+1])
            {
                x=b[i+1];
                b[i+1]=b[i];
                b[i]=x;
            }
    for(i=0;i<=9;i++)
        printf("%d ",b[i]);
}
int main()
{
    int a[10],i;
    printf("Enter ten numbers:_");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    sort(a,10);    
    return 0;       
}