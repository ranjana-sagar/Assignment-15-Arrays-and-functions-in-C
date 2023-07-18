#include<stdio.h>
void frequency(int a[],int size)
{
    int b[size],i,j,k=0,c=0,s=0;
    //////////////////////////////
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
            if(a[i]==a[j])
               break;
        if(j==size)
        {
           b[k++]=a[i];
           s++;
        }          
    }    
    b[k]=a[size-1];
    s++;
    /////////////////////////////////////
    for(i=0;i<s;i++)
    {
        for(j=0;j<size;j++)
            if(b[i]==a[j])
               c+=1;
        printf("\n%d is no of time is %d",b[i],c);
        c=0;     
    }
}
int main()
{
    int x[20]={-8,-8,-8,-6,-6,-6,-6,-6,-3,-3,-3,-3,1,-1,-1,-1,-1,-1,-1,-1};
    frequency(x,20);
    return 0;
}