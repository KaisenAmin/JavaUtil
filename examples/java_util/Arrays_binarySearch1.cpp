//
// Created by Amin Tahmasebi on 7/1/2023.
//

#include "../../include/java_util/Arrays.h"

int main()
{
    int intArr[] = {2, 4, 6, 8, 10};
    int intKey = 8;
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    std::cout << "Index of key " << intKey << " in intArr: " << Arrays::binarySearch(intArr, intKey, intSize) << std::endl;

    float floatArr[] = {1.5f, 3.5f, 5.5f, 7.5f, 9.5f};
    float floatKey = 5.5f;
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);
    std::cout << "Index of key " << floatKey << " in floatArr: " << Arrays::binarySearch(floatArr, floatKey, floatSize) << std::endl;

    double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double doubleKey = 3.3;
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    std::cout << "Index of key " << doubleKey << " in doubleArr: " << Arrays::binarySearch(doubleArr, doubleKey, doubleSize) << std::endl;

    long longArr[] = {1000, 2000, 3000, 4000, 5000};
    long longKey = 4000;
    int longSize = sizeof(longArr) / sizeof(longArr[0]);
    std::cout << "Index of key " << longKey << " in longArr: " << Arrays::binarySearch(longArr, longKey, longSize) << std::endl;

    char charArr[] = {'a', 'b', 'c', 'd', 'e'};
    char charKey = 'c';
    int charSize = sizeof(charArr) / sizeof(charArr[0]);
    std::cout << "Index of key " << charKey << " in charArr: " << Arrays::binarySearch(charArr, charKey, charSize) << std::endl;

    short shortArr[] = {10, 20, 30, 40, 50};
    short shortKey = 30;
    int shortSize = sizeof(shortArr) / sizeof(shortArr[0]);
    std::cout << "Index of key " << shortKey << " in shortArr: " << Arrays::binarySearch(shortArr, shortKey, shortSize) << std::endl;

    std::string stringArr[] = {"apple", "banana", "cherry", "date", "elderberry"};
    std::string stringKey = "cherry";
    int stringSize = sizeof(stringArr) / sizeof(stringArr[0]);
    std::cout << "Index of key " << stringKey << " in stringArr: " << Arrays::binarySearch(stringArr, stringKey, stringSize) << std::endl;

    int8_t byteArr[] = {1, 2, 3, 4, 5};
    int8_t byteKey = 3;
    int byteSize = sizeof(byteArr) / sizeof(byteArr[0]);
    std::cout << "Index of key " << byteKey << " in byteArr: " << Arrays::binarySearch(byteArr, byteKey, byteSize) << std::endl;

    uint8_t ubyteArr[] = {10, 20, 30, 40, 50};
    uint8_t ubyteKey = 20;
    int ubyteSize = sizeof(ubyteArr) / sizeof(ubyteArr[0]);
    std::cout << "Index of key " << ubyteKey << " in ubyteArr: " << Arrays::binarySearch(ubyteArr, ubyteKey, ubyteSize) << std::endl;

    std::vector<int> intVector = {2, 4, 6, 8, 10};
    int intVectorKey = 6;
    std::cout << "Index of key " << intVectorKey << " in intVector: " << Arrays::binarySearch(intVector, intVectorKey) << std::endl;

    std::cin.get();
    return 0;
}






