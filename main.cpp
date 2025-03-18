#include <iostream>
#include "Crocodos.h"
#include "Crocodos.cpp"
int main() 
{
	int32_t array[100]{};
	int32_t size{};
	std::cout << " Input size of array ";
	std::cin >> size;
	InputArray(array,size);
	PrintArray(array,size);
	CountElements(array,size);
	std::cout << " Input your number ";
	int64_t number{};
	std::cin >> number;
	std::cout << " order of your number is " << FindElement(array, size, number);
	std::cout << "Max and min elements of your array are" << MaxElement(array, size) <<MinElement(array,size);
	ReplaceZero(array, size);
	PrintArray(array, size);
  return 0;
}
