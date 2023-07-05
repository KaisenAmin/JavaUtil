//
// Created by Amin Tahmasebi on 7/5/2023.
//

#include "../../include/java_util/Arrays.h"

int main()
{
    // Integer array example
    int intArray[5] = {1, 2, 3, 4, 5};
    auto intCopy = Arrays::copyOfRange(intArray, 5, 1, 4); // Copy elements from index 1 to 3 (4 exclusive)
    for (size_t i = 0; i < 3; i++)
        std::cout << intCopy[i] << " ";

    std::cout << "\n";

    // Float array example
    float floatArray[5] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    auto floatCopy = Arrays::copyOfRange(floatArray, 5, 0, 5); // Copy all elements
    for (size_t i = 0; i < 5; i++)
        std::cout << floatCopy[i] << " ";

    std::cout << "\n";

    // Boolean array example
    bool boolArray[4] = {true, false, true, false};
    auto boolCopy = Arrays::copyOfRange(boolArray, 4, 2, 5); // Copy elements from index 2 to end (and add one false)
    for (size_t i = 0; i < 5; i++)
        std::cout << (boolCopy[i] ? "true" : "false") << " ";

    std::cout << "\n";

    // Vector example
    std::vector<int> vec = {1, 2, 3, 4, 5};
    auto vecCopy = Arrays::copyOfRange(vec, 2, 6); // Copy elements from index 2 to 6 (extend vector with zeros)
    for (size_t i = 0; i < 4; i++)
        std::cout << vecCopy[i] << " ";

    std::cout << "\n";

    std::cin.get();
    return 0;
}

