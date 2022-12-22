#include <stdio.h>
#include <string.h>

int main(void) {

    /*���� ���� ���*/
    int a = 7;  // ���� ���α׷��� ����ϴ� �޸𸮸� ���� ���������� ������ ���� ���� �־� �ʱ�ȭ ���־���Ѵ�.
    double b = 3.14;
    char c = 'w';  //���ڸ� %d�� ����ϸ� �ƽ�Ű�ڵ� ��ȣ�� ��µ�
    char d[] = "Study Hard";  //char�ڷ����� ũ�Ⱑ 1����Ʈ������ �Ѱ��� ���ڸ� �������ִ�. ���ڿ��� �������� �迭�� ���.
    // �迭�� ũ��� ���ڿ� ������ +1 ��. ���ڿ��� ���� �˸��� 0, null, /0�� ���ڸ��� ���� �ϱ� ����.
    printf("%d\n", a);
    printf("%.2lf\n", b);
    printf("%c\n", c);
    printf("%s\n", d);




    /*���� �ڷ���(=��������)(���� ���¸� �ǹ���)*/
    // char(1byte), short(2byte), int(4byte), long(4byte), longlong(8byte)

    char x = 'a';
    int y = 97;
    printf("%c�� �ƽ�Ű�ڵ� ��ȣ��%d �̴� \n", x, x);
    printf("%c�� �ƽ�Ű�ڵ� ��ȣ��%d �̴� \n", y, y);
    //�ƽ�Ű �ڵ� ��ȣ�� %c�� ����ϸ� �ش��ϴ� ���ڰ� ��µǰ�, ���ڸ� %d�� ����ϸ� �ش��ϴ� �ƽ�Ű�ڵ� ��ȣ�� ��µȴ�.

    short sh = 32767;
    int in = 2147483647;
    long ln = 2147483647;
    long long lln = 123451234512345;
    printf("short�� ������ �ִ�: %d \n", sh);
    printf("int�� ������ �ִ�: %d \n", in);
    printf("long�� ������ �ִ�: %ld \n", ln);
    printf("long long�� ������ �ִ�: %lld \n", lln);
    //���� �������� int�� ���
    //short�� int���� ũ�Ⱑ �۾� �޸� ���� ���, �����Ҷ��� int������ ��ȯ�� ������ ������������
    //long long�� int�� ������ �� ���� ū ���� �϶��� ���, �޸� ���� ŭ
    //long�� int�� 2����Ʈ�� ������ �����Ϸ� �϶��� ���



    /*�ڷ����� ũ�Ⱑ �ñ��ϸ� sizeof*/
    printf("char���� ũ�� : %d\n", sizeof(char));
    printf("short���� ũ�� : %d\n", sizeof(short));
    printf("int���� ũ�� : %d\n", sizeof(int));
    printf("long���� ũ�� : %d\n", sizeof(long));
    printf("long long���� ũ�� : %d\n", sizeof(long long));



    /*unsigned ���� �ڷ���*/
    unsigned int z = 3459039;
    printf("%u\n", z);  //%u�� ����ؾ���, %d������ϸ� ��ȣ�� ������ �޾� �ٸ� ���� ��� �� ������
    unsigned int p = 4294967295;
    printf("%d\n", p);




    /*�Ǽ� �ڷ���
    float(4��Ʈ)(��ȿ����7)
    double(8��Ʈ)(��ȿ����15)
    long double(8��Ʈ�̻�)(��ȿ����15�̻�)*/

    float fl = 1.234567890123456789;  //���ڿ� f�� �ٿ� 4����Ʈ ũ��� ����� ó�����ִ°��� ����
    double db = 1.234567890123456789; //��ȿ���ڰ� ���� double�� �⺻���� ���
    long double ldb = 1.234567890123456789;
    printf("float�� ������ ��: %.20f\n", fl);
    printf("float�� ������ ��: %.20lf\n", db);
    printf("float�� ������ ��: %.20llf\n", ldb);




    /*���ڿ� ����*/
    char name[] = "ChanHo";  //char���� ���� �Ѱ��� ���� �� �� �������� ���ڿ��� �����Ϸ��� char�� �迭�� ��������.
    //�迭�� ũ��� ���ڿ� +1��. �����Ϸ��� ���ڿ� ���� /0(null)�� �ڵ� �߰� �ϱ� ����
    //null�ڷ� ����� ���� ����� �ȵ�
    printf("My name is %s\n", name);
    strcpy(name, "JiHo");  // ���ο� ���ڿ� ����. strcpy. #include <string.h>. �ҽ�����>���Ͽ�Ŭ��>�Ӽ�>�����Ӽ�>C/C++>��ó����>��ó���� ����> _CRT_SECURE_NO_WARNINGS�߰�
    printf("%s\n", name);




    /*const�� ����� ����(�ʱ�ȭ�� ���� �ٲܼ� ����)(������ ���ó�� ����Ҽ��ְ� ����)*/
    int income = 0;
    const double tax_rate = 0.12;  //const�� ����� ���ÿ� ���� �ٲܼ� �����Ƿ� ����� ���ÿ� �ʱ�ȭ �������. �ȱ׷��� ������ ���� ��� ����.

    income = 456;
    double tax = income * tax_rate;
    printf("������ : %1.lf�Դϴ�.\n", tax);
    //const�� ���ó�� �������� ������ Ư���� ��� ������ ���������� �ּ� �����ڷ� �޷ι��� ��ġ�� �˼� ������ ��� ������ ���� ��Ģ�� �״�� �����.


    return 0;
}