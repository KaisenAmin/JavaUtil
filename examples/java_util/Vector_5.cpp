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

    // Get element at specific index
    std::cout << "Element at index 1: " << vec.elementAt(1) << std::endl;

    // Get iterator to elements
    auto it = vec.elements();
    std::cout << "Elements: ";
    for(; it != vec.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Ensure capacity
    vec.ensureCapacity(10);
    std::cout << "Capacity after ensuring capacity: " << vec.capacity() << std::endl;

    // Compare vec to another vector
    Vector<int> vec2;
    vec2.addElement(1);
    vec2.addElement(2);
    vec2.addElement(3);

    std::cout << "vec equals vec2: " << vec.equals(vec2) << std::endl;
    vec2.addElement(4);
    std::cout << "vec equals vec2: " << vec.equals(vec2) << std::endl;

    std::cin.get();
    return 0;
}
