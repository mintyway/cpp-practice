#include <iostream>

void TestPrint()
{
	std::cout << "테스트 중입니다." << std::endl;
}

float Multiply(const float LeftNumber, const float RightNumber)
{
	const float Result = LeftNumber * RightNumber;
	return Result;
}

void TestPrint()
{
	std::cout << "테스트입니다." << std::endl;
}

int main()
{
	const float MultiplyResult = Multiply(3, 5);
	std::cout << MultiplyResult << std::endl;
	TestPrint();
	return 0;
}
