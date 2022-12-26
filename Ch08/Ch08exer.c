#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
 
int main(void) {

	/*배열 선언 방법*/
	// 자료형 배열명[요소개수];
	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	printf("arr[3] 배열에 저장할 값을 입력하시오.");
	scanf("%d", &arr[3]);

	printf("배열에 저장된 값은: %d\n", arr[3]);
	printf("남는 배열 요소의 값: %d\n", arr[4]);  // 쓰레기 값이 들어있다.


	//int arr[5]  -->   arr[0] ~ arr[4] 5개


	/*배열 초기화*/
	// int arr[5] = {1,2,3,4,5};
	// int arr[5] = {1,2,3};      -->  남은 배열은 0으로 초기화됨
	// int arr[5] = {0};     --> 모두 0으로 초기화
	// int arr[] = {1,2,3};     --> 배열을 3개만 생성하고 1,2,3으로 초기화 함
	// double arr[5] = {2.7, 6.5, 3.9, 4.1, 2.2};   -->   선언한 배열의 자료형에 맞게 초기화
	// char arr[5] = {'a','p','p','l','e'};



	/*배열과 반복문*/
	/*
	int score[5];
	scanf("%d", &score[0]);
	scanf("%d", &score[1]);
	scanf("%d", &score[2]);
	scanf("%d", &score[3]);
	scanf("%d", &score[4]);
	*/
	int score[5];
	int i;
	for (i = 0;i < 5;i++) {
		printf("score[%d]에 저장할 값을 쓰시오.\n", i);
		scanf("%d", &score[i]);
	}
	printf("모든 입력이 끝났습니다");
	for (i = 0;i < 5;i++) {
		printf("score[%d]에 저장된 값은 %d 입니다.\n", i, score[i]);
	}


	/*sizeof 연산자를 활용한 배열 처리*/
	// count = sizeof(배열명) / sizeof(배열명[0]); --> 배열의 전체크기를 배열 요소 하나의 크기로 나눠 배열 요소의 개수를 구한다


	/*char형 배열*/
	//저장할 문자열의 길이보다 최소한 하나 이상 크게 배열을 선언해야함 (/0null자리)
	// 문자 상수로 초기화 하는건 너무 길어서 문자열 상수로 초기화
	// char str[80] = {'a','p','p','l','e','j','a','m'};
	// char str[80] = "applejam";



	/*문자열 대입*/
	// strcpy 함수 사용 : char형 배열에 새로운 문자열을 저장하는 함수
	char fruit[30];
	strcpy(fruit, "banana");
	printf("%s\n", fruit);


	/*문자열 전용 입출력 함수 gets, puts*/
	//scanf도 가능하지만 빈칸 전까지5만 입력한다.
	//근데 입력할 배열의 크기를 검사하지 않음으로 배열의 크기보다 긴 문자열을 입력하면 배열을 벗어난 메모리 영역을 침법할 가능성이 있어서
	// 라이브러리 함수에서 제외됨
	return 0;
}