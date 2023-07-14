#include <stdio.h>
// 전역변수와 지역변수의 이름이 일치하는 경우 생기는 문제
int result; //전역변수

void Sum(int data1, int data2) {
	int result; // 지역변수
	result = data1 + data2;
}

void main() {
	Sum(5, 3);
	printf("5 + 3 = %d\n", result);
}
// 