//
// Created by Amin Tahmasebi on 7/5/2023.
//

/**
 * @class Vector
 *
 * @brief Implementation of the Java Vector class in C++
 *
 * This class template replicates functionality of the Vector class from Java in C++.
 * It stores elements and allows operations such as adding, removing, inserting, and replacing elements.
 * The class allows for dynamic resizing, cloning, and other utility functions such as checking if the
 * Vector contains a certain element.
 *
 * @author Amin Tahmasebi
 * @date 7/5/2023
 * @note The exact implementation details might be different based on how you have defined the `Vector` class and its methods.
 *
 */

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
#include <sstream>

template <typename T>
class Vector
{
private:
    std::vector<T> elementData; /**< The underlying array to store the elements. */
    int capacityIncrement; /**< The amount by which the capacity should be incremented when additional capacity is needed. */
    int elementCount; /**< The number of elements currently stored in the Vector. */

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

    void setElementAt(const T &obj, int index);
    void setSize(int newSize);
    void sort();
    void trimToSize();
    std::string toString();
    std::vector<T> toArray();
};

#include "../../src/java_util/Vector.cpp"

#endif //JAVAUTIL_VECTOR_H
