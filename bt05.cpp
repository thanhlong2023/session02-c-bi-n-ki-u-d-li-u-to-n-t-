#include <bits/stdc++.h>
int main()
{
    int chieuDai, chieuRong;
    scanf("%d%d", &chieuDai, &chieuRong);
    printf("Diện tích %lld\n", (long long)chieuDai * chieuRong);
    printf("Chu vi %d\n", (chieuDai + chieuRong) * 2);
    return 0;
}