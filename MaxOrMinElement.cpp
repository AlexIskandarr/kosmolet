#include <iostream>
int32_t MaxElement(int32_t* array, int32_t size) 
{
	int32_t max{};
	int32_t i{};
	while (i < size) 
	{
		if (array[i] > max) 
		{
			max = array[i];
		}
		++i;
	}
	return max;
}

int32_t MinElement(int32_t* array, int32_t size) 
{
	int32_t min{};
	int32_t i{};
	while (i < size)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
		++i;
	}
	return min;
}