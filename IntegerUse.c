#include <stdio.h>

int main()
{
    char num1 = -10;                       //1바이트 부호 있는 정수형으로 변수를 선언하고 값을 할당
    short num2 = 30000;                    //2바이트 부호 있는 정수형으로 변수를 선언하고 값을 할당
    int num3 = -1234567890;                //4바이트 부호 있는 정수형으로 변수를 선언하고 값을 할당
    long num4 = 1234567890;                //4바이트 부호 있는 정수형으로 변수를 선언하고 값을 할당
    long long num5 = -1234567890123456789; //8바이트 부호 있는 정수형으로 변수를 선언하고 값을 할당

    //char, short, int는 %d로 출력하고 longdms %ld, long long은 %lld로 출력
    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

    return 0;
}