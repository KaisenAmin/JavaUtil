//
// Created by Amin Tahmasebi on 7/9/2023.
//

#include "../../include/java_util/Vector.h"

#include <iostream>


int main()
{
    Vector<int> vec1;
    vec1.add(5);
    vec1.add(10);
    vec1.add(10);
    std::cout << "Index of 10 after index 1: " << vec1.indexOf(10, 1) << std::endl;  // Outputs: 2

    Vector<int> vec2;
    vec2.add(5);
    vec2.add(10);
    vec2.insertElementAt(15, 1);
    vec2.forEach([](const int& number){ std::cout << number << std::endl; });  // Outputs: 5, 15, 10

    Vector<int> vec3;
    std::cout << std::boolalpha << "Is empty: " << vec3.isEmpty() << std::endl;  // Outputs: true
    vec3.add(5);
    std::cout << "Is empty: " << vec3.isEmpty() << std::endl;  // Outputs: false

    Vector<int> vec4;
    vec4.add(5);
    vec4.add(10);
    std::cout << "Last element: " << vec4.lastElement() << std::endl;  // Outputs: 10

    Vector<int> vec;
    vec.add(5);
    vec.add(10);

    // Using a range-based for loop
    for(int value : vec)
    {
        std::cout << value << std::endl;
    }

    // Using a while loop
    auto it = vec.iterator();
    while(it != vec.end())
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cin.get();
    return 0;
}

