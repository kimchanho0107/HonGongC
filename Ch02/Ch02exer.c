#include <stdio.h>  // standard input output(표준입출력)

int main(void) {  //main함수

    printf("Study Hard\n");  //printf함수
    printf("123456789\n");  //\n 줄바꿈
    printf("My\tfriend\n"); //\t tab만큼 띄우기
    printf("Goot\bd\tchance\n");  //\b 한칸 앞으로 가기
    printf("Cow\rW\a\n");  //\r 맨 앞칸으로 가기
    //\a 벨소리 내기



    printf("%d\n", 5);  //%d 위치에 정수 출력
    printf("%lf\n", 3.14);  //%lf 위치에 소수점 6자리까지의 실수 출력
    printf("%.1lf\n", 3.14);  //%lf 위치에 소수점 1자리까지의 실수 출력
    printf("%.10lf\n", 3.14);  //%lf 위치에 소수점 10자리까지의 실수 출력


    /*정수상수 표현*/
    printf("%d\n", 12);  //12(10진수)를 출력
    printf("%d\n", 014); //12(8진수)를 출력 (0)
    printf("%d\n", 0xc);  //12(16진수)를 출력 (0x)

    printf("%o\n", 12);  //12(10진수)를 8진수로 출력
    printf("%x\n", 12);  //12(10진수)를 8진수(소문자)로 출력
    printf("%X\n", 12);  //12(10진수)를 8진수(대문자)로 출력

    /*실수상수 표현(소수점형태, 지수형태)*/
    printf("%.1lf\n", 5e6); //5e6(5000000)을 소수 1자리까지 출력
    printf("%.10lf\n", 5e-6);  //5e-6(0.000005)을 소수 10자리까지 출력
    printf("%le\n", 0.12345678);  //0.12345678을 지수형태(정규화 표기법)으로 출력
    printf("%.3le\n", 0.12345678);  //0.12345678을 지수형태로 소수점3자리(4자리에서 반올림)까지 출력

    /*문자와 문자열 상수 표현*/
    printf("%c\n", 'A');  //%c자리에 문자 출력
    printf("%s\n", "A");  //%s자리에 문자열 출력
    printf("%c은 %s입니다", '1', "first");

    return 0;  //프로그램 종료
}