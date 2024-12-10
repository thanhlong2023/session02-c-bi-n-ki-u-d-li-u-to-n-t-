#include <stdio.h>

int main()
{
    // Khai báo các kiểu dữ liệu và gán giá trị
    short a = 32767;
    unsigned short b = 65535;
    int c = 2147483647;
    unsigned int d = 4294967295;
    long long e = 9223372036854775807;
    unsigned long long f = 18446744073709551615U;
    char g = 'A';
    unsigned char h = 255;
    float i = 3.14159;
    double j = 3.141592653589793;

    // In giá trị tương ứng
    printf("short: %hi\n", a);
    printf("unsigned short: %hu\n", b);
    printf("int: %d\n", c);
    printf("unsigned int: %u\n", d);
    printf("long long: %lld\n", e);
    printf("unsigned long long: %llu\n", f);
    printf("char: %c\n", g);
    printf("unsigned char: %c\n", h);
    printf("float: %f\n", i);
    printf("double: %lf\n", j);

    return 0;
}

// Kiểu dữ liệu 	Kích thước (byte)	Giá trị có thể lưu	        Giới hạn có thể lưu	Đặc tả (Format Specifier)
// short	        2 byte	             Số nguyên	                      -32,768 -> 32,767	%hi
// unsigned short	2 byte	             Số nguyên không dấu	           0 -> 65,535	%hu
// int	            4 byte	             Số nguyên	                      -2,147,483,648 -> 2,147,483,647	%d
// unsigned int	    4 byte	             Số nguyên không dấu	           0 -> 4,294,967,295	%u
// long long	    8 byte	             Số nguyên	                      -9,223,372,036,854,775,808 -> 9,223,372,036,854,775,807	%lld
// unsigned long long	8 byte	         Số nguyên không dấu	           0 -> 18,446,744,073,709,551,615	%llu
// char	            1 byte	             Số nguyên, Ký tự	               -128 -> 127	%c
// unsigned char	1 byte	             Số nguyên không dấu, Ký tự	0 -> 255	%c
// float	        4 byte	             Số thực	                      3.4E-38 -> 3.4E+38	%f
// double	        8 byte	             Số thực	                      1.7E-308 -> 1.7E+308	%lf
