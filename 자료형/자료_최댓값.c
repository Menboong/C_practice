#include<stdio.h>
#include<limits.h>

main()
{
	char num1 = CHAR_MAX + 1;          // char의 최댓값보다 큰 수를 할당. 오버플로우 발생
    short num2 = SHRT_MAX + 1;         // short의 최댓값보다 큰 수를 할당. 오버플로우 발생
    int num3 = INT_MAX + 1;            // int의 최댓값보다 큰 수를 할당. 오버플로우 발생
    long long num4 = LLONG_MAX + 1;    // long long의 최댓값보다 큰 수를 할당. 오버플로우 발생

    // 부호 있는 정수에서 저장할 수 있는 범위를 넘어서면 최솟값부터 다시 시작
    printf("%d %d %d %lld\n", num1, num2, num3, num4);
    // -128 -32768 -2147483648 -9223372036854775808
}

