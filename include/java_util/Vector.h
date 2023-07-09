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
    void addElement(const T& obj);
    [[maybe_unused]] int capacity() const;
    void clear();
    Vector<T>clone() const;
    bool contains(const T& o) const;
    bool containsAll(const std::vector<T>& c) const;
    void copyInto(std::vector<T>& anArray) const;

    T elementAt(int index) const;
    typename std::vector<T>::iterator elements();
    typename std::vector<T>::iterator end();
    void ensureCapacity(int minCapacity);
    bool equals(const Vector<T> &o) const;
};

#include "../../src/java_util/Vector.cpp"

#endif //JAVAUTIL_VECTOR_H
