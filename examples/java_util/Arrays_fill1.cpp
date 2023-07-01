//
// Created by Amin Tahmasebi on 7/2/2023.
//

#include "../../include/java_util/Arrays.h"

template<typename T>
void printArray(T *array, size_t size)
{
    for (size_t i = 0; i < size; i++)
        std::cout << array[i] << " ";

    std::cout << std::endl;
}

template<typename T>
void printVector(std::vector<T> &vec)
{
    for (const auto &item : vec)
        std::cout << item << " ";

    std::cout << std::endl;
}

int main()
{
    // int
    int intArr[5];
    int intVal = 10;
    Arrays::fill(intArr, intVal, 5);
    printArray(intArr, 5);

    // float
    float floatArr[5];
    float floatVal = 10.0f;
    Arrays::fill(floatArr, floatVal, 5);
    printArray(floatArr, 5);

    // double
    double doubleArr[5];
    double doubleVal = 10.0;
    Arrays::fill(doubleArr, doubleVal, 5);
    printArray(doubleArr, 5);

    // char
    char charArr[5];
    char charVal = 'a';
    Arrays::fill(charArr, charVal, 5);
    printArray(charArr, 5);

    // short
    short shortArr[5];
    short shortVal = 10;
    Arrays::fill(shortArr, shortVal, 5);
    printArray(shortArr, 5);

    // long
    long longArr[5];
    long longVal = 10;
    Arrays::fill(longArr, longVal, 5);
    printArray(longArr, 5);

    // long double
    long double longDoubleArr[5];
    long double longDoubleVal = 10.0;
    Arrays::fill(longDoubleArr, longDoubleVal, 5);
    printArray(longDoubleArr, 5);

    // long long
    long long longLongArr[5];
    long long longLongVal = 10;
    Arrays::fill(longLongArr, longLongVal, 5);
    printArray(longLongArr, 5);

    // int8_t
    int8_t byteArr[5];
    int8_t byteVal = 100;
    Arrays::fill(byteArr, byteVal, 5);
    printArray(byteArr, 5);

    // uint8_t
    uint8_t ubyteArr[5];
    uint8_t ubyteVal = 100;
    Arrays::fill(ubyteArr, ubyteVal, 5);
    printArray(ubyteArr, 5);

    // uint64_t
    uint64_t uint64Arr[5];
    uint64_t uint64Val = 1000;
    Arrays::fill(uint64Arr, uint64Val, 5);
    printArray(uint64Arr, 5);

    // For std::vector
    // int
    std::vector<int> intVector(5);
    Arrays::fill(intVector, intVal);
    printVector(intVector);

    // float
    std::vector<float> floatVector(5);
    Arrays::fill(floatVector, floatVal);
    printVector(floatVector);

    // double
    std::vector<double> doubleVector(5);
    Arrays::fill(doubleVector, doubleVal);
    printVector(doubleVector);

    // char
    std::vector<char> charVector(5);
    Arrays::fill(charVector, charVal);
    printVector(charVector);

    // short
    std::vector<short> shortVector(5);
    Arrays::fill(shortVector, shortVal);
    printVector(shortVector);

    // long
    std::vector<long> longVector(5);
    Arrays::fill(longVector, longVal);
    printVector(longVector);

    // long double
    std::vector<long double> longDoubleVector(5);
    Arrays::fill(longDoubleVector, longDoubleVal);
    printVector(longDoubleVector);

    // long long
    std::vector<long long> longLongVector(5);
    Arrays::fill(longLongVector, longLongVal);
    printVector(longLongVector);

    // int8_t
    std::vector<int8_t> byteVector(5);
    Arrays::fill(byteVector, byteVal);
    printVector(byteVector);

    // uint8_t
    std::vector<uint8_t> ubyteVector(5);
    Arrays::fill(ubyteVector, ubyteVal);
    printVector(ubyteVector);

    // uint64_t
    std::vector<uint64_t> uint64Vector(5);
    Arrays::fill(uint64Vector, uint64Val);
    printVector(uint64Vector);

    std::cin.get();
    return 0;
}





