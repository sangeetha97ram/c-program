#include<stdio.h>
int main()
{
    int a[10],i,k,sum=0,avg;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=k;i++)
    {
        sum=sum+a[i];
        
    }
    
    avg=sum/k;
    printf("%d",avg);
    return 0;
}
