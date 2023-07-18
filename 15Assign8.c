#include<stdio.h>
void unique(int b[],int size)
{
    int i,j;
    for(j=0;j<size-1;j++)
    {
        for(i=j+1;i<=size-1;i++)
            if(b[j]==b[i])
              break;
        if(i==size)
          printf("%d ",b[j]);      
    }
    printf("%d",b[size-1]);
}
int main()
{
    int a[10],i;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    unique(a,10);    
    return 0;
}