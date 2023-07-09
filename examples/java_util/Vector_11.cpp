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

    vec.print();
    std::vector<int> toRetain = {10, 20};
    vec.retainAll(toRetain); // Retains only 10 and 20 in the vector

    vec.print();

    int oldElement = vec.set(0, 30);
    vec.print();

    std::cin.get();
    return 0;
}
