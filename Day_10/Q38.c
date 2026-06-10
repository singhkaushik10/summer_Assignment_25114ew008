#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter number of lines\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("\t");
        }
        for(k=2*n;k>=i;k--)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;


}