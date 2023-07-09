#include "include/java_util/Vector.h"

#include <iostream>

int main()
{
    // Default constructor
    Vector<int> vec1;
    vec1.add(5);
    vec1.add(10);
    vec1.add(0, 16);

    std::cout << "vec1[0] = " << vec1.get(0) << ", vec1[1] = " << vec1.get(1) << ", vec1[2] = "<< vec1.get(2) << std::endl;



    std::cin.get();
    return 0;
}
