//
// Created by Amin Tahmasebi on 7/9/2023.
//


#include "../../include/java_util/Vector.h"

#include <iostream>

int main()
{
    // Default constructor
    Vector<int> vec1;
    vec1.add(5);
    vec1.add(10);
    std::cout << "vec1[0] = " << vec1.get(0) << ", vec1[1] = " << vec1.get(1) << std::endl;

    // Initial capacity constructor
    Vector<double> vec2(10);
    vec2.add(1.23);
    vec2.add(4.56);
    std::cout << "vec2[0] = " << vec2.get(0) << ", vec2[1] = " << vec2.get(1) << std::endl;

    // Initial capacity and increment constructor
    Vector<std::string> vec3(5, 10);
    vec3.add("Hello");
    vec3.add("World");
    std::cout << "vec3[0] = " << vec3.get(0) << ", vec3[1] = " << vec3.get(1) << std::endl;


    std::cin.get();
    return 0;
}
