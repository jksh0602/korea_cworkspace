#include <iostream>	//입출력 관련 헤더파일
/*
	파일명: printData.cpp
	만든이: 제갈수현
	프로그램: Hello~ World 테스트
*/
int main() 
{
	/*
		std(소속을 의미하는 이름공간) > cout(출력 스트림)
		:: - 범위연산자
		endl - 줄바꿈
		<< - shift 연산자: 오른쪽 데이터를 왼쪽 스트림 객체에 넣음
	*/
	//iostream안에 std 안에 cout(stream)이 있음
	std::cout << "Hello~ World" << std::endl;

	//사칙 연산(상수)
	std::cout << 4 + 5 << std::endl;		//9
	std::cout << 4 - 5 << std::endl;		//-1
	std::cout << 4 * 5 << std::endl;		//20
	std::cout << 4.0 / 5.0 << std::endl;	//0.8

	return 0;
}