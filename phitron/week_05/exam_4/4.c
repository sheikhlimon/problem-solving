#include <stdio.h>
#include <string.h>

void makeSum(int a, int b, int *sum)
{
    *sum = a + b;
    printf("%d", sum);
}

int main()
{
    int a, b, sum;
    scanf("%d %d", &a, &b);
    makeSum(a, b, &sum);

    return 0;
}