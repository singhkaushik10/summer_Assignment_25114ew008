#include <stdio.h>
int fact(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}
int main() {
    int n, sum = 0, num;
    printf("Enter the number: ");
    scanf("%d", &n);
    int orig = n;     
    int number = n;    
    while(number != 0) {
        num = number % 10;
        sum = sum + fact(num);
        number = number / 10;
    }
    if(sum == orig)
        printf("It is a strong number");
    else
        printf("It is not a strong number");

    return 0;
}