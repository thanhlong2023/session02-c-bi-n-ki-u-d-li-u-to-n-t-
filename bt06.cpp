#include <stdio.h>

int main()
{
    const float PI = 3.14;
    float r;
    printf("Nhập bán kính hình tròn: ");
    scanf("%f", &r);

    float chu_vi = 2 * PI * r;
    float dien_tich = PI * r * r;

    printf("Chu vi hình tròn: %.2f\n", chu_vi);
    printf("Diện tích hình tròn: %.2f\n", dien_tich);

    return 0;
}
