#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(void) {

	return 0;
}

// 함수를 선언 할때 중요한 3개
/* 1. 함수 정의
반환형 함수명 (매개변수, 매개변수){
    함수가 수행하는 명령. 매개변수를 사용한 결과값을 돌려보냄
	return 결과값; 
	}
*/
/* 2. 함수 호출
함수명( 인수, 인수 )
입력된 인수는 호출된 함수의 매개변수에 복사되어 사용된다.
함수의 반환값을 수식의 일부로 사용 할수 있음.
*/
/* 3. 함수 선언
main 함수 앞에 선언
반환형 함수명 ( 매개변수, 매개변수 );
컴파일할 때 함수를 호출한 자리에 반환값과 같은 형태의 저장 공간을 준비하기 위해 선언
그래서 main함수 앞에함수를 정의하면 선언해줄 필요없음.
*/



//매개변수가 없는 함수
// 매개변수가 필요없는 경우 매개변수 자리에 void를 써줌
//이런 경우 인수도 없으니 호출할때 함수명(); 이렇게만 써주면됨.


//반환값이 없는 함수
//반환값이 없음으로 return을 단독으로 사용 return; <-- 이것도 생략가능


//매개변수, 반환값이 없는 함수


//재귀호출 함수는 최초호출한 곳이 아니라 이전에 호출했던 곳으로 돌아감.