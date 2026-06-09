#include <stdio.h>
int main()
{
    int n,i,j;
    printf("enter the number of lines\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++) 
        {
            printf("%d\t",j);  
        }
        printf("\n");
    }
    
    return 0;


    
}