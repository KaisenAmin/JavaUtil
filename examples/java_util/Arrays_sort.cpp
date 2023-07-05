//
// Created by Amin Tahmasebi on 7/5/2023.
//

#include "../../include/java_util/Arrays.h"

int main()
{
    int intArray[] = {5, 3, 2, 1, 4};
    size_t intArraySize = sizeof(intArray) / sizeof(intArray[0]);
    Arrays::sort(intArray, intArraySize);

    std::cout << "Sorted integer array: ";
    for (size_t i = 0; i < intArraySize; ++i)
        std::cout << intArray[i] << " ";

    std::cout << "\n";

    // Example usage for float array
    float floatArray[] = {5.5, 3.3, 2.2, 1.1, 4.4};
    size_t floatArraySize = sizeof(floatArray) / sizeof(floatArray[0]);
    Arrays::sort(floatArray, floatArraySize);

    std::cout << "Sorted float array: ";
    for (size_t i = 0; i < floatArraySize; ++i)
        std::cout << floatArray[i] << " ";

    std::cout << "\n";

    // Example usage for a vector of doubles
    std::vector<double> doubleVector = {5.55, 3.33, 2.22, 1.11, 4.44};
    Arrays::sort(doubleVector);

    std::cout << "Sorted vector of doubles: ";
    for (double value : doubleVector)
        std::cout << value << " ";

    std::cout << "\n";

    std::cin.get();
    return 0;
}
