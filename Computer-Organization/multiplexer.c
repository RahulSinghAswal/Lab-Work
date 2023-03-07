#include <stdio.h>
int helper(int n)
{
    int i = 1, ans = 0;
    while (1)
    {
        if (i > n)
            break;
        i *= 2;
        ans++;
    }
    return --ans;
}
int main()
{
    int n, i, up, down;
    printf("Enter the value of n for n*1 multiplexer : ");
    scanf("%d", &n);
    up = 1;
    down = n;
    n = helper(n);
    int s[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of S %d = ", i);
        scanf("%d", &s[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        if (s[i] == 0)
            down = (up + down) / 2;
        else
            up = (up + down) / 2 + 1;
    }
    printf("The final output will be I= %d", up - 1);
}
