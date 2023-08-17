#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter number = ");
    scanf("%d", &n);
    n = n % 10;
    while(n >= 10)
    {
        n = n / 10;
    }
    n = n;
    printf("first digit = %d and last digit = %d\n\n");
    printf("
    return 0;
}
