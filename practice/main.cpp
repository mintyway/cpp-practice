#include <iostream>

float Add(const float LeftNumber, const float RightNumber)
{
	const float Result = LeftNumber + RightNumber;
	return Result;
}

float Multiply(const float LeftNumber, const float RightNumber)
{
	const float Result = LeftNumber * RightNumber;
	return Result;
}

void TestPrint()
{
	std::cout << "테스트 중입니다." << std::endl;
}

int main()
{
	const float AddResult = Add(5, 1);
	std::cout << AddResult << std::endl;
	
	const float MultiplyResult = Multiply(3, 5);
	std::cout << MultiplyResult << std::endl;
	
	TestPrint();
	
	const int Number = 10;
	std::cout << Number << std::endl;
	
	return 0;
}