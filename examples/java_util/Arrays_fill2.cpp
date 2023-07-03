//
// Created by Amin Tahmasebi on 7/3/2023.
//


#include "../../include/java_util/Arrays.h"

template<typename T>
void printArray(T *array, size_t fromIndex, size_t toIndex)
{
    for (size_t i = fromIndex; i < toIndex; i++)
        std::cout << array[i] << " ";

    std::cout << std::endl;
}

template<typename T>
void printVector(std::vector<T> &vec, size_t fromIndex, size_t toIndex)
{
    for (const auto &item : vec)
        std::cout << item << " ";

    std::cout << std::endl;
}

int main()
{
    int intArr[10];
    Arrays::fill(intArr, 0, 10, 1);
    printArray(intArr, 0, 10);

    double doubleArr[10];
    Arrays::fill(doubleArr, 0, 10, 2.0);
    printArray(doubleArr, 0, 10);

    float floatArr[10];
    Arrays::fill(floatArr, 0, 10, 3.0f);
    printArray(floatArr, 0, 10);

    char charArr[10];
    Arrays::fill(charArr, 0, 10, 'a');
    printArray(charArr, 0, 10);

    short shortArr[10];
    Arrays::fill(shortArr, 0, 10, 4);
    printArray(shortArr, 0, 10);

    long longArr[10];
    Arrays::fill(longArr, 0, 10, 5L);
    printArray(longArr, 0, 10);

    int8_t byteArr[10];
    Arrays::fill(byteArr, 0, 10, 95);
    printArray(byteArr, 0, 10);

    uint8_t ubyteArr[10];
    Arrays::fill(ubyteArr, 0, 10, 63);
    printArray(ubyteArr, 0, 10);

    long double longDoubleArr[10];
    Arrays::fill(longDoubleArr, 0, 10, 8.0L);
    printArray(longDoubleArr, 0, 10);

    long long longLongArr[10];
    Arrays::fill(longLongArr, 0, 10, 9LL);
    printArray(longLongArr, 0, 10);

    uint64_t uint64Arr[10];
    Arrays::fill(uint64Arr, 0, 10, 10ULL);
    printArray(uint64Arr, 0, 10);

    std::vector<int> intVec(10);
    int intValue = 3;
    Arrays::fill(intVec, 0, 10, intValue);
    printVector(intVec, 0, 10);

    std::vector<double> doubleVec(10);
    double doubleValue = 4.0;
    Arrays::fill(doubleVec, 0, 10, doubleValue);
    printVector(doubleVec, 0, 10);

    std::vector<float> floatVec(10);
    float floatValue = 5.0f;
    Arrays::fill(floatVec, 0, 10, floatValue);
    printVector(floatVec, 0, 10);

    std::vector<char> charVec(10);
    char charValue = 'b';
    Arrays::fill(charVec, 0, 10, charValue);
    printVector(charVec, 0, 10);

    std::vector<short> shortVec(10);
    short shortValue = 6;
    Arrays::fill(shortVec, 0, 10, shortValue);
    printVector(shortVec, 0, 10);

    std::vector<long> longVec(10);
    long longValue = 7L;
    Arrays::fill(longVec, 0, 10, longValue);
    printVector(longVec, 0, 10);

    std::vector<int8_t> int8Vec(10);
    int8_t int8Value = 80;
    Arrays::fill(int8Vec, 0, 10, int8Value);
    printVector(int8Vec, 0, 10);

    std::vector<uint8_t> uint8Vec(10);
    uint8_t uint8Value = 90;
    Arrays::fill(uint8Vec, 0, 10, uint8Value);
    printVector(uint8Vec, 0, 10);

    std::vector<long double> longDoubleVec(10);
    long double longDoubleValue = 10.0L;
    Arrays::fill(longDoubleVec, 0, 10, longDoubleValue);
    printVector(longDoubleVec, 0, 10);

    std::vector<long long> longLongVec(10);
    long long longLongValue = 11LL;
    Arrays::fill(longLongVec, 0, 10, longLongValue);
    printVector(longLongVec, 0, 10);

    std::vector<uint64_t> uint64Vec(10);
    uint64_t uint64Value = 12ULL;
    Arrays::fill(uint64Vec, 0, 10, uint64Value);
    printVector(uint64Vec, 0, 10);

    std::cin.get();
    return 0;
}





