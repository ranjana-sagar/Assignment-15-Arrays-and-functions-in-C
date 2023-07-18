#include<stdio.h>
int greatestN(int b[],int size)
{
    int max=b[0],i;
    for(i=1;i<size;i++)
        if(max<b[i])
           max=b[i];
    return max;       
}
int main()
{
    int a[10],i;
    printf("Enter ten numbers:_");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    printf("Greatest number in Array is %d",greatestN(a,10));
    return 0;    
}