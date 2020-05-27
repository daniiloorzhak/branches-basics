#include <stdio.h>

int fib_rec(int n)
{
    if(n < 0)
        return -1;
    if (n == 1 || n == 0)
        return 1;
    return fib_rec(n - 1) + fib_rec(n - 2);
}

int main()
{
    printf("%d\n", fib_rec(0));
    printf("%d\n", fib_rec(1));
    printf("%d\n", fib_rec(10));
    return 0;
}
