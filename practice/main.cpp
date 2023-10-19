#include <iostream>

float Add(const float LeftNumber, const float RightNumber)
{
	float Result = LeftNumber + RightNumber;
	return Result;
}

int main()
{
	float Result = Add(5, 1);
	std::cout << Result << std::endl;
	return 0;
}