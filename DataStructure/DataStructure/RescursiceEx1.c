#include <stdio.h>
/*
	재귀(recursive) 알고리즘 : 자기 자신을 호출(함수)하는 것을 말한다.
	함수 내부에 같은 자기 자신 함수()
	무한반복을 하므로 종료조건이 필수다.
*/

void sos(int n) {
	printf("Help Me!!\n");
	n--;
	if (n > 0) {	//종료조건
		sos(n);
	}
}

int main() {
	
	sos(4);

	return 0;
}