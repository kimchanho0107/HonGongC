#include <stdio.h>
int main(void) {

	/*대입 연산자*/
	int a = 10;
	int b = 3;

	/*산술 연산자*/
	int sum = a + b;
	int sub = a - b;
	int mul = a * b;
	int inv = -a;

	printf("a와b의 합:%d\n", sum);
	printf("a와b의 빼:%d\n", sub);
	printf("a와b의 곱:%d\n", mul);
	printf("a의 음수 연산:%d\n", inv);



	/* 나누기, 나머지 연산자*/
	int dev = a / b;
	int las = a % b;  // 실수 연산에는 나머지의 개념이 없음으로 나머지 연산자의 피연산자로는 정수만 사용
	printf("a와b의 몫:%d\n", dev);
	printf("a와b의 나머지:%d\n", las);



	/*증감 연산자*/
	// 하나의 수식에서 같은 변수를 두 번 이상 사용할떄는 그 변수에 증감 연산자를 사용하면 안됨  ex) (++a)+a+(++a)
	++a; //a = a + 1;
	--b;  //b = b - a;
	printf("++a의 값은 %d\n", a);
	printf("--b의 값은 %d\n", b);
	
	int x = 5;
	int y = 5;
	//전위 표기
	int pre = (++x) * 3;
	//후위 표기
	int post = (y++) * 3;  // 후위 표기는 다른 연산자와 함께 사용할 때 가장 마지막에 계산된다.
	printf("전위 표기 값: %d\n", pre);
	printf("후위 표기 값: %d\n", post);  




	/*관계 연산자*/
	// > , < , >= , <= , == , !=
	// 관계 연산자가 참이면 1, 거짓이면 0 (>= , <=은 둘다 참이어야 1임)
	int res;
	res = (a > b);
	printf("a > b : %d\n", res);
	res = (a < b);
	printf("a < b : %d\n", res);
	res = (a == b);
	printf("a == b : %d\n", res);
	res = (a != b);
	printf("a != b : %d\n", res);




	/*논리 연산자*/
	// &&(and)  ||(or)  !(not)
	int z = 30;
	int val;
	val = 10 < z < 20;
	printf("%d\n", val);
	val = (10 < z) && (z < 20);
	printf("%d\n", val);
	//위 두 식은 다른 값임! 실수 하지 말기




	/*숏 서킷 룰*/
	//&& 연산자는 좌항이 거짓이면 우항과 관계 없이 무조건 거짓
	//|| 연산자는 좌항이 참이면 우항과 관계 없이 무조건 참
	// 따라서 좌항으로 연산자의 값이 정해지면 우항은 연산 하지 않음
	// ex) (15<10)&&(++b>20) 에서 좌항이 이미 거짓이므로 우항은 연산을 하지 않아 ++b의 값은 실행이 안됨




	/*형 변환 연산자*/
	int p = 20;
	int q = 3;
	double pq;

	pq = ((double)p / (double)q);
	printf("p와 q의 몫:%d와 %d의 몫 : %.1lf\n", p, q, pq); // 실수에서 정수로 형 변환 할때 소수점 이하 숫자는 반올림이 아닌 버림을 수행.




	/*자동 형 변환*/
	// 피 연산자의 형이 다르면 크기가 작은 피연산자 큰 피연산자로 자동 형 변환 된다.
	// 하지만 저장은 피연산자의 변수형에 맞게 저장됨으로 예상치 못한 값의 변영이 생길 수있어서 형태를 같게 사용해 주는것이 좋음.




	/*sizeof 연산자*/
	printf("sizeof(char)의 크기:%d\n", sizeof(char));
	printf("sizeof(short)의 크기:%d\n", sizeof(short));
	printf("sizeof(float)의 크기:%d\n", sizeof(float));
	printf("sizeof(double)의 크기:%d\n", sizeof(double));
	printf("sizeof(long)의 크기:%d\n", sizeof(long));
	printf("sizeof(long long)의 크기:%d\n", sizeof(long long));
	printf("sizeof(abc)의 크기:%d\n", sizeof("abc"));   //글자는 3개여도 마지막에 null값이 있으므로 크기는 4이다. 띄어쓰기도 크기에 포함
	printf("sizeof(10)의 크기:%d\n", sizeof(10));
	//sizeof가 연산자임으로 () 사용을 안해줘도 되지만 ()안에 연산자가 들어갈때에는 해줘야한다.




	/*복합대입 연산자*/
	//+=, -=, *= , /= , %=
	// 변수 += 값    -->     변수 =  변수 + 값




	/*콤마 연산자*/
	// 변수 = ( a식 ,b식, c식)
	// a, b, c식 모두 계산이 된다. 하지만 변수에 저장되는 값은 c식이다.
	// 대입 연산자보다 우선순위가 낮은 유일한 연산자 임으로 ()를 무조건 사용




	/*조건 연산자*/
	// ( a > b ) ? a : b;   -->    ? 앞의 값이 참이면 a, 거짓이면 b
	res = (a > b) ? a : b;
	printf("a와 b중에 큰 값은 %d\n", res);
	// 피연산자 안에 식을 넣어도됨




	/*비트 연산자*/
	//정수에만 사용 가능
	//복합 대입연산자랑도 사용가능              &=, ^= , |= , <<= , >>=    (비트부정 연산자~은 단항 연산자이므로 복합대입 연산자로 사용 불가능
	int n = 10;
	int m = 12;
	printf("n & m : %d\n", n & m);  //비트별 논리곱 연산자. 두 비트가 모두 1인 경우에만 1로 계산
	printf("n ^ m : %d\n", n ^ m);  //비트별  배타적 논리곱 연산자. 두 비트가 서로 다른 경우에만 1로 계산
	printf("n | m : %d\n", n | m);  //비트별 논리합 연산자. 둘중에 하나라도 참이면 1로 계산
	printf("~n : %d\n", ~n);        //비트별 부정 연산자. 1과 0을 서로 바꿈
	printf("n << 1 : %d\n", n << 1);  //비트 이동 연산자. 왼쪽으로 이동. 밀려나는 비트는 사라지고 새로 생긴 비트는 0.
	                                  // 원래 값에서 한칸 밀수록 2씩 곱해짐
	printf("n >> 2 : %d\n", n >> 2);  //비트 이동 연산자. 오른쪽으로 이동.밀려나는 비트는 사라지고 새로 생긴 비트는 0. 근데 부호비트자리는 원래 숫자의 부호를 따라감.
	                                  //unsigned로 선언된 값이면 부호 비트 의미 없음 무조건 0으로 채우기
	                                  // 원래 값에서 한칸 밀수록 2나눈 몫



	/*연산자 우선순위*/
	// 단항 연산자 > 이항 연산자 > 삼함 연산자
	// 산술 연산자 > (비트 이동 연산자)> 관계 연산자 > 논리 연산자 

	return 0;
}