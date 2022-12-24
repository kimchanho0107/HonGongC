#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

int main(void) {

	/*if문*/
	/*
	if ( 조건식 ){
         실행문	
	}
	*/
	int a = 5;
	if (a < 10) {
		printf("조건을 만족합니다.\n");
	}


	/*if else문*/
	if (a > 10) {
		printf("a는 10 이상입니다.\n");
	}
	else {
		printf("a는 10 미만입니다.\n");
	}



	/*if else if else문*/
	if (a > 5) {
		printf("a는 5보다 큽니다.\n");
	}
	else if ( a = 5 ) {
		printf("a는 5 입니다.\n");
	}
	else {
		printf("a는 5보다 작습니다.\n");
	}




	/*if문 활용*/
	// if문 중첩을 사용하면 불필요한 계산을 줄여 효율이 올라감.
	//분할 정복 기법 : 모든 경우를 하나씩 차례로 검사하는 방법이 아닌, 중간값을 구해 범위를 나눠 비교하는 방법
	// if문 중첩시 중괄호를 생략해주면 else문이 가장 가까운 if문과 결합됨으로 중괄호는 무조건 써주는것이 편함




	/*switch ~ case 문*/
	/*
	switch (조건식){
	    case (상수식1):
		   실행문1;
		   break;
		case (상수식2):
		   실행문2;
		   break;
	    default:
		   실행문1;
		   break;
	*/
	//조건은 정수식만 사용, 기본적으로 case는 break를 사용
	int num;
	printf("숫자를 입력하시오:");
	scanf("%d",&num);
	switch (num) {
		case 1:
			printf("입력한 숫자는 1입니다.");
			break;
		case 2:
			printf("입력한 숫자는 2입니다.");
			break;
		case 3:
			printf("입력한 숫자는 3입니다.");
			break;
		case 4:
			printf("입력한 숫자는 4입니다.");
			break;
		case 5:
			printf("입력한 숫자는 5입니다.");
			break;
		case 6:
			printf("입력한 숫자는 6입니다.");
			break;
		case 7:
			printf("입력한 숫자는 7입니다.");
			break;
		default:
			printf("1~7 이외의 숫자입니다.");
			break;

	}
	//break문은 필요하면 생략이 가능함. 조건에 만족하는 case문 이후로 있는 case문 안의 계산을 모두 실행한다.

	

	return 0;

}