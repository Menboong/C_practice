#include<stdio.h>
#include<limits.h>

main()
{
	char num1 = CHAR_MAX + 1;          // char�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο� �߻�
    short num2 = SHRT_MAX + 1;         // short�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο� �߻�
    int num3 = INT_MAX + 1;            // int�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο� �߻�
    long long num4 = LLONG_MAX + 1;    // long long�� �ִ񰪺��� ū ���� �Ҵ�. �����÷ο� �߻�

    // ��ȣ �ִ� �������� ������ �� �ִ� ������ �Ѿ�� �ּڰ����� �ٽ� ����
    printf("%d %d %d %lld\n", num1, num2, num3, num4);
    // -128 -32768 -2147483648 -9223372036854775808
}

