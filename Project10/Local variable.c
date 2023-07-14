#include <stdio.h>
int ReturnNum() {
	int num = 5;
	return num;
}

void main() {

	/*ReturnNum(); 지역변수 num은  그 함수안에서 끝난다.
	printf("%d", num);*/ 
	int k = ReturnNum();
	printf("%d", k);
}