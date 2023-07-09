//
// Created by Amin Tahmasebi on 7/9/2023.
//


#include "../../include/java_util/Vector.h"

#include <iostream>


int main()
{
    Vector<int> vec;
    vec.add(5);
    vec.add(10);
    vec.add(15);
    vec.add(10);

    std::cout << vec.lastIndexOf(10) << std::endl; // Output: 3
    std::cout << vec.lastIndexOf(10, 2) << std::endl; // Output: 1

    int removedElement = vec.remove(1);
    std::cout << removedElement << std::endl; // Output: 10

    std::cin.get();
    return 0;
}
