//
// Created by Amin Tahmasebi on 7/9/2023.
//

#include "../../include/java_util/Vector.h"

#include <iostream>
#include <vector>

int main()
{
    Vector<int> vec;

    // Add elements to vec
    vec.addElement(1);
    vec.addElement(2);
    vec.addElement(3);

    // Display the capacity of vec
    std::cout << "Capacity: " << vec.capacity() << std::endl;

    // Clear the vector
    vec.clear();

    // Display the capacity of vec after clear
    std::cout << "Capacity after clear: " << vec.capacity() << std::endl;

    // Add elements to vec
    vec.addElement(4);
    vec.addElement(5);
    vec.addElement(6);

    // Clone the vector
    Vector<int> vecCopy = vec.clone();

    // Display the elements of the copied vector
    for (int i = 0; i < vecCopy.size(); ++i)
    {
        std::cout << "vecCopy[" << i << "] = " << vecCopy.get(i) << std::endl;
    }

    std::cin.get();
    return 0;
}
