#include <iostream>

#include "include/java_util/Arrays.h"

int main()
{
    int arr[] = {10, 20, 30};
    float floatArr[] = {15.326f, 3.25f, 63.25f};

    size_t floatSize = sizeof(floatArr) / sizeof(float);
    size_t size = sizeof(arr) / sizeof(int);

    std::cout << Arrays::toString(arr, size) << '\n';
    std::cout << Arrays::toString(floatArr, size) << '\n';

    return 0;
}
