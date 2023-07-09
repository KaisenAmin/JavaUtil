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

    // Check if vec contains a specific element
    std::cout << "vec contains 2: " << vec.contains(2) << std::endl;
    std::cout << "vec contains 4: " << vec.contains(4) << std::endl;

    // Check if vec contains all elements of a collection
    std::vector<int> c = {1, 2};
    std::cout << "vec contains all elements of c: " << vec.containsAll(c) << std::endl;
    c.push_back(4);
    std::cout << "vec contains all elements of c: " << vec.containsAll(c) << std::endl;

    // Copy elements of vec into an array
    std::vector<int> anArray(vec.size());
    vec.copyInto(anArray);

    // Display the elements of the array
    for (int i = 0; i < vec.size(); ++i)
    {
        std::cout << "anArray[" << i << "] = " << anArray[i] << std::endl;
    }


    std::cin.get();
    return 0;
}
