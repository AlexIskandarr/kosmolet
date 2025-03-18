#include <iostream>
#include "Diesel.h"
//#include "Diesel.cpp"
//#include "Crocodos.cpp"
#include "Crocodos.h"

using std::cout;
using std::cin;

int main() 
{
	int32_t array[100]{};
	double arr[100]{};
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

	//Diesel=>

	InputSize(size);
	if(!(CheckSize(size))){
	  return 0;
	}
	FillArray(arr,size);
	MaxDigit(arr,size);
	MinDigit(arr,size);
	CalculateAverage(arr,size);
  return 0;
}
