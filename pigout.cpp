#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define DECLARE_MAIN(name) int main_##name(void)
#define CALL_MAIN(name)    main_##name()

DECLARE_MAIN(1);
DECLARE_MAIN(2);
DECLARE_MAIN(3);
DECLARE_MAIN(4);
DECLARE_MAIN(5);
DECLARE_MAIN(6);
DECLARE_MAIN(7);
DECLARE_MAIN(8);
DECLARE_MAIN(9);

int main(void)
{
    int choice;
    int i;
    printf("실행할 프로그램 선택:\n");
    for (i = 1; i <= 9; i++)
    {
        printf("Program %d\n", i);
    }
    scanf("%d", &choice);
    printf("choice : %d\n", choice);

    switch (choice)
    {
    case 1: return CALL_MAIN(1);
    case 2: return CALL_MAIN(2);
    case 3: return CALL_MAIN(3);
    case 4: return CALL_MAIN(4);
    case 5: return CALL_MAIN(5);
    case 6: return CALL_MAIN(6);
    case 7: return CALL_MAIN(7);
    case 8: return CALL_MAIN(8);
    case 9: return CALL_MAIN(9);
    default:
        printf("잘못된 선택!\n");
        return 1;
    }
}

// 프로그램 1
DECLARE_MAIN(1)
{
    int celsius = 100;
    printf("%d\n", (9 * celsius / 5 + 32));
    printf("%d\n", (9 / 5 * celsius + 32));
    return 0;
}
/*
 결과:
 212
 132
 */

// 프로그램 2
DECLARE_MAIN(2)
{
    int N;
    printf("자연수를 입력하세요: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
/*
입력: N = 3
결과:
*
***
*****
*/

// 프로그램 3
DECLARE_MAIN(3)
{
    int N;
    printf("자연수를 입력하세요: ");
    scanf("%d", &N);
    for (int i = N; i >= 1; i--)
    {
        for (int j = 0; j < 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}
/*
입력: N = 3
결과:
*****
***
*
*/

// 프로그램 4
DECLARE_MAIN(4)
{
    int sum = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0) sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
// 결과: 234168

// 프로그램 5
DECLARE_MAIN(5)
{
    int a = 1, b = 2, total = 0;
    while (b <= 1000000)
    {
        if (b % 2 == 0) total += b;
        int temp = a + b;
        a = b;
        b = temp;
    }
    printf("%d\n", total);
    return 0;
}
// 결과: 1089154

// 프로그램 6
DECLARE_MAIN(6)
{
    int N;
    printf("자연수를 입력하세요: ");
    scanf("%d", &N);
    long long factorial = 1;
    for (int i = 1; i <= N; i++) factorial *= i;
    printf("%lld\n", factorial);
    return 0;
}
/*
입력: N = 5
결과: 120
*/

// 프로그램 7
DECLARE_MAIN(7)
{
    int count = 0;
    int P = 2000;

    for (int a = 1; a < P; ++a)
    {
        for (int b = 1; b < a; ++b)
        {
            for (int c = 1; c < b; ++c)
            {
                if (a + b + c == P)
                {
                    count++;
                }
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
// 결과: 332334

// 프로그램 8
DECLARE_MAIN(8)
{
    int N;
    printf("자연수를 입력하세요: ");
    scanf("%d", &N);
    printf("%d =", N);

    int first = 1;
    for (int i = 2; i * i <= N; i++)
    {
        while (N % i == 0)
        {
            if (!first) printf(" *");
            printf(" %d", i);
            N /= i;
            first = 0;
        }
    }
    if (N > 1)
    {
        if (!first) printf(" *");
        printf(" %d", N);
    }
    printf("\n");
    return 0;
}
/*
입력: N = 18
결과: 18 = 2 * 3 * 3
*/

// 프로그램 9
DECLARE_MAIN(9)
{
    float f;
    printf("실수를 입력하세요:");
    scanf("%f", &f);
    int i = abs((int)(f * 100)) % 100;
    printf("i=%d\n", i);
    return 0;
}
/*
예: f = 12.3456
i=34
*/
