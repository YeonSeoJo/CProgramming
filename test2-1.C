/* 도입부 */
#include <stdio.h> // printf()와 scanf()를 사용하기 위한 헤더 파일 포함

int product(int x, int y); // 사용자 함수 원형 선언

int main() {
    /* 변수 선언 */
    int a, b, c;

    /* 첫 번째 수를 입력 */
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &a);

    /* 두 번째 수를 입력 */
    printf("Enter another number between 1 and 100: ");
    scanf("%d", &b);

    /* 함수 호출에 의해 두 수를 곱하고 결과를 출력 */
    c = product(a, b);
    printf("%d * %d = %d\n", a, b, c);

    return 0;
}

/* 두 수의 곱을 계산하여 반환하는 사용자 함수 */
int product(int x, int y) {
    return (x * y);
}
