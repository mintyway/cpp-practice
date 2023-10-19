#include <iostream>

float Multiply(const float LeftNumber, const float RightNumber)
{
	const float Result = LeftNumber * RightNumber;
	return Result;
}

int main()
{
	const float MultiplyResult = Multiply(3, 5);
	std::cout << MultiplyResult << std::endl;
	return 0;
}
