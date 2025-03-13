#include <iostream>

int32_t CountElements(int32_t* array,int32_t size) 
{
	int32_t counter{};
	int32_t i{};
	while (i < size)
	{
		if (array[i] == 0) 
		{
			while (i<size) 
			{
				if (array[i + 1] != 0)
				{
					counter++;
					++i;
				}
				else return counter;
			}
		}
		i++;
	}
	return -1;
}