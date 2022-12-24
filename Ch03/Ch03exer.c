#define _CRT_SECURE_NO_WARNINGS          //strcpy, scanf 함수가 컴파일 될수있게 함
#include <stdio.h>
#include <string.h>


int main(void) {

    /*변수 선언 방법*/
    int a = 7;  // 전에 프로그램이 사용하던 메모리를 비우고 생성됨으로 쓰레기 값이 남아 있어 초기화 해주어야한다.
    double b = 3.14;
    char c = 'w';  //문자를 %d로 출력하면 아스키코드 번호가 출력됨
    char d[] = "Study Hard";  //char자료형은 크기가 1바이트임으로 한개의 문자만 담을수있다. 문자열을 담을려면 배열을 사용.
    // 배열의 크기는 문자열 길이의 +1 임. 문자열의 끝을 알리는 0, null, /0가 한자리를 차지 하기 때문.
    printf("%d\n", a);
    printf("%.2lf\n", b);
    printf("%c\n", c);
    printf("%s\n", d);




    /*정수 자료형(=데이터형)(변수 형태를 의미함)*/
    // char(1byte), short(2byte), int(4byte), long(4byte), longlong(8byte)

    char x = 'a';
    int y = 97;
    printf("%c의 아스키코드 번호는%d 이다 \n", x, x);
    printf("%c의 아스키코드 번호는%d 이다 \n", y, y);
    //아스키 코드 번호를 %c로 출력하면 해당하는 문자가 출력되고, 문자를 %d로 출력하면 해당하는 아스키코드 번호가 출력된다.

    short sh = 32767;
    int in = 2147483647;
    long ln = 2147483647;
    long long lln = 123451234512345;
    printf("short형 변수의 최댓값: %d \n", sh);
    printf("int형 변수의 최댓값: %d \n", in);
    printf("long형 변수의 최댓값: %ld \n", ln);
    printf("long long형 변수의 최댓값: %lld \n", lln);
    //보통 정수형은 int를 사용
    //short는 int보다 크기가 작아 메모리 적게 사용, 연산할때는 int형으로 변환돼 실행이 느려질수있음
    //long long은 int가 저장할 수 없는 큰 범위 일때만 사용, 메모리 낭비가 큼
    //long은 int가 2바이트로 구현된 컴파일러 일때만 사용



    /*자료형의 크기가 궁금하면 sizeof*/
    printf("char형의 크기 : %d\n", sizeof(char));
    printf("short형의 크기 : %d\n", sizeof(short));
    printf("int형의 크기 : %d\n", sizeof(int));
    printf("long형의 크기 : %d\n", sizeof(long));
    printf("long long형의 크기 : %d\n", sizeof(long long));



    /*unsigned 정수 자료형*/
    unsigned int z = 3459039;
    printf("%u\n", z);  //%u로 출력해야함, %d로출력하면 부호의 영향을 받아 다른 값이 출력 될 수있음
    unsigned int p = 4294967295;
    printf("%d\n", p);




    /*실수 자료형
    float(4비트)(유효숫자7)
    double(8비트)(유효숫자15)
    long double(8비트이상)(유효숫자15이상)*/

    float fl = 1.234567890123456789;  //값뒤에 f를 붙여 4바이트 크기ㅢ 상수로 처리해주는것이 좋음
    double db = 1.234567890123456789; //유효숫자가 많은 double을 기본으로 사용
    long double ldb = 1.234567890123456789;
    printf("float형 변수의 값: %.20f\n", fl);
    printf("float형 변수의 값: %.20lf\n", db);
    printf("float형 변수의 값: %.20llf\n", ldb);




    /*문자열 저장*/
    char name[] = "ChanHo";  //char에는 문자 한개만 저장 할 수 있음으로 문자열을 저장하려면 char형 배열을 만들어야함.
    //배열의 크기는 문자열 +1임. 컴파일러가 문자열 끝에 /0(null)을 자동 추가 하기 때문
    //null뒤로 저장된 값은 출력이 안됨
    printf("My name is %s\n", name);
    strcpy(name, "JiHo");  // 새로운 문자열 저장. strcpy. #include <string.h>. 소스파일>파일우클릭>속성>구성속성>C/C++>전처리기>전처리기 정의> _CRT_SECURE_NO_WARNINGS추가
    printf("%s\n", name);




    /*const를 사용한 변수(초기화된 값을 바꿀수 없음)(변수를 상수처럼 사용할수있게 해줌)*/
    int income = 0;
    const double tax_rate = 0.12;  //const는 선언과 동시에 값을 바꿀수 없으므로 선언과 동시에 초기화 해줘야함. 안그러면 쓰레기 값이 계속 사용됨.

    income = 456;
    double tax = income * tax_rate;
    printf("세금은 : %1.lf입니다.\n", tax);
    //const는 상수처럼 사용되지만 변수의 특성을 모두 가지는 변수임으로 주소 연산자로 메로미의 위치를 알수 있으면 사용 범위의 제한 규칙도 그대로 적용됨.




    /*scanf 데이터입력 함수*/
    int t;
    scanf("%d", &t);       // scanf "" 안에는 문자 넣으면 안됨
    printf("입력한 값은 %d 입니다.\n", t);

    int age;
    double height;
    printf("나이와 키를 입력하시오:");
    scanf("%d%lf", &age, &height);
    printf("나이:%d 키:%lf 입니다\n", age, height);




    /*문자 데이터 입력*/
    char MyName[10];
    printf("당신의 이름은 무엇입니까?");
    scanf("%s", &MyName);
    printf("당신의 이름은 %s 입니다.", MyName);


    return 0;
}