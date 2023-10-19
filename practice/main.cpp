#include <iostream>

float Add(const float LeftNumber, const float RightNumber)
{
	const float Result = LeftNumber + RightNumber;
	return Result;
}

int main()
{
	const float AddResult = Add(5, 1);
	std::cout << AddResult << std::endl;
	return 0;
}