//
// Created by Amin Tahmasebi on 7/1/2023.
//

#include "../../include/java_util/Arrays.h"

int main()
{
    // binarySearch for int array
    int intArr[] = {1, 2, 3, 4, 5};
    int keyInt = 3;
    int index = Arrays::binarySearch(intArr, 1, 4, keyInt);
    std::cout << "Index of " << keyInt << " in intArr: " << index << std::endl;

    // binarySearch for float array
    float floatArr[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    float keyFloat = 2.2f;
    index = Arrays::binarySearch(floatArr, 0, 4, keyFloat);
    std::cout << "Index of " << keyFloat << " in floatArr: " << index << std::endl;

    // binarySearch for double array
    double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double keyDouble = 4.4;
    index = Arrays::binarySearch(doubleArr, 0, 4, keyDouble);
    std::cout << "Index of " << keyDouble << " in doubleArr: " << index << std::endl;

    // binarySearch for char array
    char charArr[] = {'a', 'b', 'c', 'd', 'e'};
    char keyChar = 'c';
    index = Arrays::binarySearch(charArr, 0, 4, keyChar);
    std::cout << "Index of " << keyChar << " in charArr: " << index << std::endl;

    // binarySearch for long array
    long longArr[] = {10, 20, 30, 40, 50};
    long keyLong = 20;
    index = Arrays::binarySearch(longArr, 0, 4, keyLong);
    std::cout << "Index of " << keyLong << " in longArr: " << index << std::endl;

    // binarySearch for short array
    short shortArr[] = {100, 200, 300, 400, 500};
    short keyShort = 400;
    index = Arrays::binarySearch(shortArr, 0, 4, keyShort);
    std::cout << "Index of " << keyShort << " in shortArr: " << index << std::endl;

    // binarySearch for string array
    std::string stringArr[] = {"apple", "banana", "cherry", "date", "elderberry"};
    std::string keyString = "cherry";
    index = Arrays::binarySearch(stringArr, 0, 4, keyString);
    std::cout << "Index of " << keyString << " in stringArr: " << index << std::endl;

    // binarySearch for int8_t array
    int8_t byteArr[] = {10, 20, 30, 40, 50};
    int8_t keyByte = 30;
    index = Arrays::binarySearch(byteArr, 0, 4, keyByte);
    std::cout << "Index of " << (int)keyByte << " in byteArr: " << index << std::endl;

    // binarySearch for uint8_t array
    uint8_t ubyteArr[] = {100, 200, 255, 125, 150};
    uint8_t keyUByte = 200;
    index = Arrays::binarySearch(ubyteArr, 0, 4, keyUByte);
    std::cout << "Index of " << (unsigned int)keyUByte << " in ubyteArr: " << index << std::endl;

    // binarySearch for vector
    std::vector<int> intVec = {1, 2, 3, 4, 5};
    int keyVec = 4;
    index = Arrays::binarySearch(intVec, 0, 4, keyVec);
    std::cout << "Index of " << keyVec << " in intVec: " << index << std::endl;

    std::cin.get();
    return 0;
}






