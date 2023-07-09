//
// Created by Amin Tahmasebi on 7/9/2023.
//

#include "../../include/java_util/Vector.h"

#include <iostream>
#include <vector>

int main()
{
    Vector<int> vec;
    vec.add(5);
    vec.add(10);
    vec.add(15);
    vec.add(10);


    vec.removeElementValue(10); // Removes the first occurrence of 10
    vec.removeElement(15); // Removes the first occurrence of 15
//
    std::vector<int> vec_to_remove =  {5, 10};
    vec.removeAll(vec_to_remove); // Removes all elements that are in vec_to_remove
//
    vec.removeAllElements(); // Removes all elements

    vec.add(5);
    vec.add(10);
    vec.add(15);
    vec.add(10);

    vec.removeElementAt(1);

    std::cin.get();
    return 0;
}
