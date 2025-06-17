#include <iostream>

using namespace std;

int main() {
	//문자형 배열 관리 - c언어
	char season[4][10] = { "봄","여름","가을","겨울" };
	printf("%s\n", season[0]);	//봄
	int len = sizeof(season) / sizeof(season[0]);
	printf("%d\n", len);	//4

	for (int i = 0; i < len; i++) {
		printf("%s ", season[i]);
	}

	return 0;
}