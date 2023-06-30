#include <iostream>

#include "include/java_util/Arrays.h"

int main()
{
    int intArr[] = {10, 20, 30};
    float floatArr[] = {15.326f, 3.25f, 63.25f};
    double doubleArr[] = {15.32, 65.398, 7.321545, 3.2145, 18536954.312585};
    char charArr[] = {'C', '+', '+'};
    short shortArr[] = {152, 3625, 9625, -3659};

    size_t shortSize = sizeof shortArr / sizeof(short);
    size_t charSize = sizeof charArr / sizeof(char);
    size_t doubleSize = sizeof doubleArr / sizeof(double);
    size_t floatSize = sizeof(floatArr) / sizeof(float);
    size_t intSize = sizeof(intArr) / sizeof(int);

    std::cout << "char -> " << Arrays::toString(charArr, charSize) << '\n';
    std::cout << "int -> " << Arrays::toString(intArr, intSize) << '\n';
    std::cout << "float -> " << Arrays::toString(floatArr, floatSize) << '\n';
    std::cout << "double -> " << Arrays::toString(doubleArr, doubleSize) << '\n';
    std::cout << "short -> " << Arrays::toString(shortArr, shortSize) << '\n';

    return 0;
}
