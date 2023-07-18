#include<stdio.h>
void merge(int a[],int size1,int b[],int size2)
{
    int c[size1+size2],i,j,k,y=size1+size2,l;
    for(i=0,j=0,k=0;i<size1 && j<size2;k++)
    {
        if(a[i]<b[j])
        {
            c[k]=b[j];
            j++;
        }
        else
        {
            c[k]=a[i];
            i++;
        }
    }
    if(j==size2)
        for(;k<=y-1;k++,i++)
            c[k]=a[i];
    else if(i==size1)
        for(;k<=y-1;k++,j++)
            c[k]=b[j];
    /////////////////////////////////
    for(i=0;i<=y-1;i++)
        printf("%d ",c[i]);                
}
int main()
{
    int x[]={66,9,7,5,3},y[]={32,29,24,19,12};
    merge(x,5,y,5);
    return 0;
}