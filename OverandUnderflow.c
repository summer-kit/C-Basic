#include <stdio.h>

int main()
{
    char num1 = 128;          //char에 저장 가능한 최댓값 127보다 큰 수를 저장, 오버플로우 발생
    unsigned char num2 = 256; //unsigned char에 저장 가능한 최댓값 255보다 큰 수, 오버플로우

    printf("%d %u\n", num1, num2);

    return 0;
}