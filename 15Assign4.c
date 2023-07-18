#include<stdio.h>
void rotate(int b[],int size,int n,int d)
{
    int i,j,x;
    for(j=1;j<=n;j++)
        if(d==0)
        {
        x=b[0];
        for(i=0;i<=(size-1);i++)
            if(i==(size-1))
                b[i]=x;
            else
                b[i]=b[i+1]; 
        }
        else
        {
            x=b[size-1];
            for(i=(size-1);i>=0;i--)
                if(i==0)
                   b[i]=x;
                else
                   b[i]=b[i-1]; 
        }           
    //////for printing array    
    for(i=0;i<size;i++)
        printf("%d ",b[i]);
}
int main()
{
    int a[5],i;
    printf("Enter five numbers:_");
    for(i=0;i<=4;i++)
        scanf("%d",&a[i]);
    rotate(a,5,2,0);    
    return 0;    
}