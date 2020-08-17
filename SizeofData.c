#include <stdio.h>

int main()
{
    int num1 = 0;
    int size;

    size = sizeof num1;
    // size = sizeof(int); , size = sizeof(num1);의 표현식도 사용 가능

    printf("num1의 크기 : %d\n", size);

    return 0;
}