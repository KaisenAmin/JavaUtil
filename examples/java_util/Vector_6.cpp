//
// Created by Amin Tahmasebi on 7/9/2023.
//


#include "../../include/java_util/Vector.h"

#include <iostream>
#include <vector>

int main()
{
    Vector<int> vec1;
    vec1.add(5);
    vec1.add(10);
    std::cout << "First element: " << vec1.firstElement() << std::endl;  // Outputs: 5

    Vector<int> vec2;
    vec2.add(5);
    vec2.add(10);
    vec2.forEach([](const int& number){ std::cout << number << std::endl; });  // Outputs: 5 and then 10 on a new line

    Vector<int> vec3;
    vec3.add(5);
    vec3.add(10);
    std::cout << "Hash code: " << vec3.hashCode() << std::endl;

    Vector<int> vec4;
    vec4.add(5);
    vec4.add(10);
    std::cout << "Index of 10: " << vec4.indexOf(10) << std::endl;  // Outputs: 1

    std::cin.get();
    return 0;
}
