#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

int main(void) {

	/*if��*/
	/*
	if ( ���ǽ� ){
         ���๮	
	}
	*/
	int a = 5;
	if (a < 10) {
		printf("������ �����մϴ�.\n");
	}


	/*if else��*/
	if (a > 10) {
		printf("a�� 10 �̻��Դϴ�.\n");
	}
	else {
		printf("a�� 10 �̸��Դϴ�.\n");
	}



	/*if else if else��*/
	if (a > 5) {
		printf("a�� 5���� Ů�ϴ�.\n");
	}
	else if ( a = 5 ) {
		printf("a�� 5 �Դϴ�.\n");
	}
	else {
		printf("a�� 5���� �۽��ϴ�.\n");
	}




	/*if�� Ȱ��*/
	// if�� ��ø�� ����ϸ� ���ʿ��� ����� �ٿ� ȿ���� �ö�.
	//���� ���� ��� : ��� ��츦 �ϳ��� ���ʷ� �˻��ϴ� ����� �ƴ�, �߰����� ���� ������ ���� ���ϴ� ���
	// if�� ��ø�� �߰�ȣ�� �������ָ� else���� ���� ����� if���� ���յ����� �߰�ȣ�� ������ ���ִ°��� ����




	/*switch ~ case ��*/
	/*
	switch (���ǽ�){
	    case (�����1):
		   ���๮1;
		   break;
		case (�����2):
		   ���๮2;
		   break;
	    default:
		   ���๮1;
		   break;
	*/
	//������ �����ĸ� ���, �⺻������ case�� break�� ���
	int num;
	printf("���ڸ� �Է��Ͻÿ�:");
	scanf("%d",&num);
	switch (num) {
		case 1:
			printf("�Է��� ���ڴ� 1�Դϴ�.");
			break;
		case 2:
			printf("�Է��� ���ڴ� 2�Դϴ�.");
			break;
		case 3:
			printf("�Է��� ���ڴ� 3�Դϴ�.");
			break;
		case 4:
			printf("�Է��� ���ڴ� 4�Դϴ�.");
			break;
		case 5:
			printf("�Է��� ���ڴ� 5�Դϴ�.");
			break;
		case 6:
			printf("�Է��� ���ڴ� 6�Դϴ�.");
			break;
		case 7:
			printf("�Է��� ���ڴ� 7�Դϴ�.");
			break;
		default:
			printf("1~7 �̿��� �����Դϴ�.");
			break;

	}
	//break���� �ʿ��ϸ� ������ ������. ���ǿ� �����ϴ� case�� ���ķ� �ִ� case�� ���� ����� ��� �����Ѵ�.

	

	return 0;

}