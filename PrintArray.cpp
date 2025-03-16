#include <iostream>

void printArray(int64_t arr[], int32_t size)
{
    for (int32_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << " , ";
    }
    std::cout << "end, elements of array were printed";
}
