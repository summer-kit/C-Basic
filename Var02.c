#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;
    // int num1, num2, num3; 으로 한번에 변수 여러개 선언도 가능하다.
    // int num1 = 10;과 같이 코드를 작성해 변수를 선언 하며 값을 동시에 초기화할 수 있다.

    num1 = 10;
    num2 = 20;
    num3 = 30;

    printf("%d %d %d\n", num1, num2, num3);
    return 0;
}