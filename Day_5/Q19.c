#include<stdio.h>
int main(){
    int n,a;
    printf("enter a number");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        if(n%a==0)
        printf("n%d is a factor",a);
    }
    return 0;
}