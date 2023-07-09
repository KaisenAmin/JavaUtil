//
// Created by Amin Tahmasebi on 7/5/2023.
//

#ifndef JAVAUTIL_VECTOR_H
#define JAVAUTIL_VECTOR_H

#include <string>
#include <vector>
#include <algorithm>


template <typename T>
class Vector
{
private:
    std::vector<T> elementData;
    int elementCount = 0;
    int capacityIncrement;

public:
    Vector();
    Vector(int initialCapacity);
    Vector(int initialCapacity, int capacityIncrement);
    void add(const T& value);
    T get(int index) const;
};

#include "../../src/java_util/Vector.cpp"

#endif //JAVAUTIL_VECTOR_H
