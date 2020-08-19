#include <stdio.h>
#include <limits.h>

int main()
{
    char num1 = CHAR_MIN;
    short num2 = SHRT_MIN;
    int num3 = INT_MIN;
    long num4 = LONG_MIN;
    long long num5 = LLONG_MIN;

    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

    char num6 = CHAR_MAX + 1;
    short num7 = SHRT_MAX + 1;
    int num8 = INT_MAX + 1;
    long long num9 = LLONG_MAX + 1;

    //부호 있는 정수에서 저장할 수 있는 범위를 넘어서면 최솟값부터 다시 시작한다.
    printf("%d %d %d %lld\n", num6, num7, num8, num9);

    unsigned char num10 = UCHAR_MAX + 1;
    unsigned short num11 = USHRT_MAX + 1;
    unsigned int num12 = UINT_MAX + 1;
    unsigned long long num13 = ULLONG_MAX + 1;

    printf("%u %u %u %llu\n", num10, num11, num12, num13);

    return 0;
}