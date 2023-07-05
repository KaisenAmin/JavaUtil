//
// Created by Amin Tahmasebi on 7/5/2023.
//

#include "../../include/java_util/Arrays.h"


int main()
{
    // Integer array example
    int intArray[5] = {1, 2, 3, 4, 5};
    auto intCopy = Arrays::copyOf(intArray, 5, 7); // Increase the size from 5 to 7
    for (size_t i = 0; i < 7; i++)
        std::cout << intCopy[i] << " ";

    std::cout << "\n";

    // Float array example
    float floatArray[3] = {1.1f, 2.2f, 3.3f};
    auto floatCopy = Arrays::copyOf(floatArray, 3, 5); // Increase the size from 3 to 5
    for (size_t i = 0; i < 5; i++)
        std::cout << floatCopy[i] << " ";

    std::cout << "\n";

    // Boolean array example
    bool boolArray[4] = {true, false, true, false};
    auto boolCopy = Arrays::copyOf(boolArray, 4, 6); // Increase the size from 4 to 6
    for (size_t i = 0; i < 6; i++)
        std::cout << boolCopy[i] << " ";

    std::cout << "\n";

    // Vector example
    std::vector<int> vec = {1, 2, 3, 4, 5};
    auto vecCopy = Arrays::copyOf(vec, 7); // Increase the size from 5 to 7
    for (size_t i = 0; i < 7; i++)
        std::cout << vecCopy[i] << " ";

    std::cout << "\n";

    std::cin.get();
    return 0;
}





