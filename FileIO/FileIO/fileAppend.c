#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp;

	fp = fopen("out.txt", "a");
	if (fp == NULL) {
		printf("파일 열기 실패");
		return 1;
	}

	//파일에 추가로 쓰기
	fputs("Good Luck~\n", fp);
	fprintf(fp, "% s\n", "행운을 빌어요");

	fclose(fp);



}