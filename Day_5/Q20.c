#include<stdio.h>
int main()
{
    int n,i,max=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;
            }
            max=i;
        }
    }
    printf("Largest prime factor is %d",max);
    return 0;


}