#include<stdio.h>
int countdupli(int b[],int size)
{
    int i,j,count=0;
    for(i=0;i<(size-1);i++)
        for(j=i+1;j<=(size-1);j++)
            if(b[i]==b[j])
                count+=1; 
    return count;                
}
int main()
{
    int a[10],i;
    printf("Enter 10 numbers:_");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    printf("total duplicate vvalue is %d",countdupli(a,10));
    return 0;     
}