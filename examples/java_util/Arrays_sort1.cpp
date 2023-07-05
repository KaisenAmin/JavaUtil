//
// Created by Amin Tahmasebi on 7/6/2023.
//

#include "../../include/java_util/Arrays.h"

int main()
{
    int intArr[] = {3, 1, 4, 1, 5, 9, 2};
    size_t arrSize = sizeof(intArr) / sizeof(intArr[0]);
    Arrays::sort(intArr, arrSize, 0, arrSize);

    // Print the sorted array.
    for (int i = 0; i < arrSize; ++i)
        std::cout << intArr[i] << " ";

    std::cout << std::endl;

    std::vector<double> doubleVec = {2.7, 1.4, 3.6, 2.0, 0.9};
    Arrays::sort(doubleVec, 1, 5);

    for (double val : doubleVec)
        std::cout << val << " ";

    std::cout << std::endl;

    std::cin.get();
    return 0;
}
