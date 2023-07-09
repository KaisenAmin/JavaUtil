//
// Created by Amin Tahmasebi on 7/5/2023.
//

#ifndef JAVAUTIL_VECTOR_H
#define JAVAUTIL_VECTOR_H

#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iterator>

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
    void add(int index, const T& value);
    bool addAll(const std::vector<T>& c);
    int size() const;
};

#include "../../src/java_util/Vector.cpp"

#endif //JAVAUTIL_VECTOR_H
