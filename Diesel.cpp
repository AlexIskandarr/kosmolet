#include <iostream>

using std::cout;
using std::cin;
 
void InputSize(int32_t& size){
    cout << '\n' << "Enter your size:";
    cin >> size;
}
bool CheckSize(int32_t size){
    return size > 0;
}
void FillArray(double* arr,int32_t size){
     for (int32_t i = 0;i < size;++i){
        cin >> arr[i];
    }
}
int32_t MaxDigit(double* arr,int32_t size){
    int32_t max{0};
    for (int32_t i = 1;i < size;++i){
        if (arr[i] > arr[max]){
             max = i;
        }
    }
    return max;

}
int32_t MinDigit(double* arr,int32_t size){
    int32_t min{0};
     for(int32_t i = 1;i < size;++i){
        if (arr[i] < arr[min]){
             min = i;
        }
    }
    return min;

}
double  CalculateAverage(double* arr,int32_t size){
    double sum{};
    int32_t count{};
    int32_t maxd = MaxDigit(arr,size);
    int32_t mind = MinDigit(arr,size);
    if (mind > maxd){
        std::swap(mind,maxd);
    }
    for (int32_t i = mind + 1;i < maxd;++i){
        sum += arr[i];
        ++count;
    }
    if (count == 0){
        return 0;
    }
    delete [] arr;
    return sum / count ;
}
