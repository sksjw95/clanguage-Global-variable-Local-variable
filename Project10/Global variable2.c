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
// Sum(5,3)의 값이 지역변수 result에 할당된다. 따라서 전역변수 result에는 처음에 선언할때
// 초기화된 값인 0이 유지된다. 그래서 main함수의 반환값은 0이 나온다.
