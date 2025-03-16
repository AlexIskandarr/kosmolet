#include <iostream>

int32_t FindElement(int32_t* array, int32_t size, int64_t number)
{
	int32_t temp{};
	int32_t i{};
	while (i < size)
	{
		if (array[i]=number)
		{
			temp = i;
		}
		++i;
	}
	if (temp == 0)
	{
		return -1;
	}
	return temp;
}