//
// Created by Amin Tahmasebi on 7/1/2023.
//

#include "../../include/java_util/Arrays.h"

int main()
{
    int intArr[] = {10, 20, 30};
    std::cout << "intArray: " << Arrays::toString(intArr, sizeof(intArr) / sizeof(int)) << std::endl;

    float floatArr[] = {15.326f, 3.25f, 63.25f};
    std::cout << "floatArray: " << Arrays::toString(floatArr, sizeof(floatArr) / sizeof(float)) << std::endl;

    double doubleArr[] = {15.32, 65.398, 7.321545, 3.2145, 18536954.312585};
    std::cout << "doubleArray: " << Arrays::toString(doubleArr, sizeof(doubleArr) / sizeof(double)) << std::endl;

    char charArr[] = {'C', '+', '+'};
    std::cout << "charArray: " << Arrays::toString(charArr, sizeof(charArr) / sizeof(char)) << std::endl;

    short shortArr[] = {152, 3625, 9625, -3659};
    std::cout << "shortArray: " << Arrays::toString(shortArr, sizeof(shortArr) / sizeof(short)) << std::endl;

    bool boolArr[] = {true, false, true, true, false};
    std::cout << "boolArray: " << Arrays::toString(boolArr, sizeof(boolArr) / sizeof(bool)) << std::endl;

    long longArr[] = {987654321, 123456789, 543210987};
    std::cout << "longArray: " << Arrays::toString(longArr, sizeof(longArr) / sizeof(long)) << std::endl;

    std::vector<int8_t> byteArray = {55, 65, 70, 80};
    std::cout << "byteArray: " << Arrays::toString(byteArray) << std::endl;

    std::cin.get();
    return 0;
}






