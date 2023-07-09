//
// Created by Amin Tahmasebi on 7/9/2023.
//

#include "../../include/java_util/Vector.h"

#include <iostream>
#include <vector>

int main()
{
    // Default constructor
    Vector<int> vec1;
    vec1.add(5);
    vec1.add(10);
    vec1.add(0, 16);

    std::cout << "vec1[0] = " << vec1.get(0) << ", vec1[1] = " << vec1.get(1) << ", vec1[2] = "<< vec1.get(2) << std::endl;

    Vector<int> vector1;

    // Add elements to vector1
    vector1.add(1);
    vector1.add(2);
    vector1.add(3);

    // Create a std::vector
    std::vector<int> stdVector = {4, 5, 6};

    // Add all elements from stdVector to vector1
    vector1.addAll(stdVector);

    // Get and print all elements in vector1
    for (int i = 0; i < vector1.size(); ++i)
    {
        std::cout << "Element at index " << i << " is: " << vector1.get(i) << std::endl;
    }


    std::cin.get();
    return 0;
}
