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
#include <functional>
#include <unordered_set>
#include <iostream>

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
    T firstElement();
    void forEach(const std::function<void(const T &)> &action);
    size_t hashCode();

    [[maybe_unused]] int indexOf(const T &value);
    int indexOf(const T &value, int index);
    void insertElementAt(const T &value, int index);
    bool isEmpty();
    T lastElement();
    typename std::vector<T>::iterator iterator();
    typename std::vector<T>::iterator begin();

    int lastIndexOf(T o);
    int lastIndexOf(T o, int index);

    T removeByIndex(int index);
    bool removeElementValue(T o);
    bool removeAll(const std::vector<T>& object);
    void removeAllElements();
    bool removeElement(T obj);
    void removeElementAt(int index);

    void removeRange(int fromIndex, int toIndex);
    void replaceAll(std::function<T(const T &)> func);
    void print();

    T set(int index, const T &element);
    bool retainAll(const std::vector<T> &c);
};

#include "../../src/java_util/Vector.cpp"

#endif //JAVAUTIL_VECTOR_H
