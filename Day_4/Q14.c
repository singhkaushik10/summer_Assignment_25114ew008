#include<stdio.h>
int main(){
    int n,i,a=0,b=1,c=0;
    printf("enter the limit");
    scanf("%d",&n);
    printf("the %d number in the fibonacci series is",n);
    for(i=1;i<=n;i++)
{
a=b;
b=c;
c=a+b;
}
printf("%d",b);
return 0;
}
 