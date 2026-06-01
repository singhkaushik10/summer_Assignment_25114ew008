#include<stdio.h>
int main()
{
    int n,pd=1,r;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        pd=pd*r;
        n=n/10;

    }
    printf("product of digit is %d",pd);
    return 0;
    
}