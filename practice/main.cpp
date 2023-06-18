#include <iostream>
#include <array>
#include <cstring>
#include <vector>

#pragma pack(push, 1)

struct TestStruct
{
	int j;
	short i;
};


int main()
{
	TestStruct testStruct;
	TestStruct deserialiedData;
	const int StructSize = sizeof(testStruct);
	std::array<std::byte, StructSize> serializedData;

	testStruct.i = 9;
	testStruct.j = 20;

	std::memcpy(serializedData.data(), &testStruct, StructSize);

	std::memcpy(&deserialiedData, serializedData.data(), serializedData.size());

	std::cout << "nice" << std::endl;

	return 0;
}