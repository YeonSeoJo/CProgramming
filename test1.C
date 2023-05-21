#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char major[100];
    char student_id[100];

    printf("이름을 공백 없이 영문으로 입력하시오 (예: Honggildong): ");
    scanf("%s", name);

    printf("학과를 공백 없이 영문으로 입력하시오 (예: ComputerScience): ");
    scanf("%s", major);

    printf("학번을 입력하시오. (예: 202334-123456): ");
    scanf("%s", student_id);

    printf("======= 처리 결과 =======\n");
    printf("이름 홀수번째 문자만 순방향 출력:\n");
    for (int i = 0; i < strlen(name); i++) {
        if (i % 2 == 0) {
            printf("%c ", name[i]);
        }
    }
    printf("\n");

    printf("학과 짝수번째 문자만 역방향 출력:\n");
    for (int i = strlen(major) - 1; i >= 0; i--) {
        if (i % 2 != 0) {
            printf("%c ", major[i]);
        }
    }
    printf("\n");

printf("학번 홀수번째 문자 *로 출력, 짝수번째 숫자로 출력:\n");
    for (int i = 0; i < strlen(student_id); i++) {
        if (i % 2 == 0) {
            printf("* ");
        } else {
            printf("%c ", student_id[i]);
        }
    }
    printf("\n");

    return 0;
}
