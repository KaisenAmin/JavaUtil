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
    vec.add(20);
    vec.add(25);

    // Print the original vector
    std::cout << "Original vector: " << vec.toString() << std::endl;

    // Use setElementAt to replace the second element (10) with 100
    vec.setElementAt(100, 1);
    std::cout << "After setElementAt(100, 1): " << vec.toString() << std::endl;

    // Use setSize to reduce the size of the vector to 3
    vec.setSize(3);
    std::cout << "After setSize(3): " << vec.toString() << std::endl;

    // Add some more elements
    vec.add(30);
    vec.add(15);
    std::cout << "After adding more elements: " << vec.toString() << std::endl;

    // Use sort to sort the elements in ascending order
    vec.sort();
    std::cout << "After sort(): " << vec.toString() << std::endl;

    // Use trimToSize to trim the capacity
    vec.trimToSize();

    // Convert the vector to an std::vector and print its elements
    std::vector<int> array = vec.toArray();
    std::cout << "Elements in the std::vector: ";
    for (const auto& el : array)
    {
        std::cout << el << ' ';
    }
    std::cout << std::endl;

    std::cin.get();
    return 0;
}

