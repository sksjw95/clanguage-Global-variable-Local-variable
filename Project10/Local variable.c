#include <stdio.h>
int ReturnNum() {
	int num = 5;
	return num;
}

void main() {

	/*ReturnNum(); �������� num��  �� �Լ��ȿ��� ������.
	printf("%d", num);*/ 
	int k = ReturnNum();
	printf("%d", k);
}