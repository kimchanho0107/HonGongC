#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*while 반복문*/
	/*
	while(조건문){
	     실행문
	}
	*/
	int num;
	printf("숫자를 입력하시오:");
	scanf("%d", &num);  //scanf는 반환값이 있는 함수이지만 반환값이 없어서 경고뜸
	while (num < 5) {
		printf("입력한숫자는 %d입니다. 다시입력하세요:", num);
		scanf("%d", &num);
	}
	printf("입력한 숫자가 5이상임으로 while문을 종료합니다.\n");




	/*for 반복문*/
	/*
	for (초기식; 조건식; 증감식;)
	{
	    실행문
	}
	*/
	//초기식 조건식 증감식은 쉽게 작성해야함, 이때 사용하는 변수를 반복문안에서 가급적 바꾸지 말기
	/*for문 --> while문*/
	int i;
	for (i = 0;i < 10;i++) {
		printf("for문이 돌아가는 중입니다.\n");
	}

	i = 0;
	while(i<10){
		printf("while문이 돌아가는 중입니다.\n");
		i++;
	}




	/*do ~ while문*/
	/*
	do{
	    실행문
	}while ( 반복조건 )
	*/
	//while 문과 비슷하나 dowhile문은 조건에 상관없이 무조건 실행문을 먼저 실행하고 조건을 비교함





	/*중첩반복문*/
	int x, y;
	for (x = 0;x < 10;x++) {
		for (y = 0;y < 4;y++) {
			printf("*");
		}
		printf("\n");
	}
	//중첩반복문 사용시 조건식의 변수를 다르게 써주어야한다.





	/*break*/
	// 반복문의 제어문 break
	//ex) 1부터 10까지 더하기. 합이 30이상이면 종료
	int sum=0;
	for (i = 1;i <=10;i++) {

		sum += i;
		if (sum > 30)  // 조건을 만족하면 break, break가 들어있는 반복문을 포함한 반복문을 벗어남
			break;
	}

	//근데 switch case문 안에서 break를 사용하면 switchcase만 빠져나감
    //while(1), for(;;)  --> 무한 반복문





	/*continue*/
	//break와 다르게 조건을 만족하면 break가 포함되어있는 반복문을 빠져나가는 것이 아닌 continue는 조건을 만족할때 실행문을 띄어넘고 반복문의 마지막으로 간다.
	//ex) 1부터 100까지 3의 배수를 제외한 합
	int n;
	int sum1=0;
	for (n = 0;n <= 100;n++) {
		if ((n % 3) == 0) {
			continue;
		}
		sum1 += n;
	}


	return 0;
}