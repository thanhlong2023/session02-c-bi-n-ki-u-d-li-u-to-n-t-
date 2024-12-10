#include <bits/stdc++.h>
#define ll long long
int sum(int a, int b)
{
    return a + b;
}
int hieu(int a, int b)
{
    return a - b;
}
long long tich(int a, int b)
{
    return 1ll * a * b;
}
float thuong(int a, int b)
{
    return (float)a / b;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Tổng %d\n", sum(a, b));
    printf("Hiệu %d\n", hieu(a, b));
    printf("Tích %lld\n", tich(a, b));
    printf("Thương %.2f\n", thuong(a, b));
    return 0;
}