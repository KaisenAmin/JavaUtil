//
// Created by Amin Tahmasebi on 7/5/2023.
//

#include "../../include/java_util/Vector.h"

template <typename T>
Vector<T>::Vector() : capacityIncrement(0) {}

template <typename T>
Vector<T>::Vector(int initialCapacity) : capacityIncrement(0)
{
    elementData.reserve(initialCapacity);
}

template <typename T>
Vector<T>::Vector(int initialCapacity, int capacityIncrement)
        : capacityIncrement(capacityIncrement)
        {
    elementData.reserve(initialCapacity);
}

template <typename T>
void Vector<T>::add(const T& value)
{
    if(elementCount >= elementData.capacity())
    {
        elementData.reserve(elementData.capacity() + (capacityIncrement > 0 ? capacityIncrement : 1));
    }
    elementData.push_back(value);
    ++elementCount;
}

template <typename T>
T Vector<T>::get(int index) const
{
    if(index >= elementCount)
    {
        throw std::out_of_range("Index out of range");
    }

    return elementData[index];
}

template <typename T>
void Vector<T>::add(int index, const T& value)
{
    if(index < 0 || index > elementCount)
    {
        throw std::out_of_range("Index out of range");
    }
    if(elementCount >= elementData.capacity())
    {
        elementData.reserve(elementData.capacity() + (capacityIncrement > 0 ? capacityIncrement : 1));
    }
    elementData.insert(elementData.begin() + index, value);
    ++elementCount;
}

template <typename T>
bool Vector<T>::addAll(const std::vector<T>& c)
{
    if(c.empty())
    {
        throw std::invalid_argument("The specified collection is null");
    }

    // Calculate the new required size
    int requiredSize = elementCount + c.size();

    // Check if we need to expand the capacity
    if(requiredSize > elementData.capacity())
    {
        // Determine the new capacity
        int newCapacity;
        if(capacityIncrement != 0) {
            newCapacity = elementData.capacity() + ((requiredSize - elementData.capacity()) / capacityIncrement + 1) * capacityIncrement;
        } else {
            newCapacity = requiredSize; // If capacityIncrement is 0, set newCapacity directly to requiredSize
        }

        // Reserve the new capacity
        elementData.reserve(newCapacity);
    }

    // Add all elements from the collection to the vector
    elementData.insert(elementData.end(), c.begin(), c.end());

    // Update the element count
    elementCount = requiredSize;

    return true;
}

template <typename T>
int Vector<T>::size() const
{
    return elementCount;
}

template <typename T>
void Vector<T>::addElement(const T& obj)
{
    add(obj);
}

template <typename T>
[[maybe_unused]] int Vector<T>::capacity() const
{
    return elementData.capacity();
}

template <typename T>
void Vector<T>::clear()
{
    elementData.clear();
    elementCount = 0;
}

template <typename T>
Vector<T> Vector<T>::clone() const
{
    Vector<T> copy(*this);
    return copy;
}

template <typename T>
bool Vector<T>::contains(const T& o) const
{
    return std::find(elementData.begin(), elementData.end(), o) != elementData.end();
}

template <typename T>
bool Vector<T>::containsAll(const std::vector<T>& c) const
{
    for(const T& elem : c)
    {
        if(!contains(elem))
        {
            return false;
        }
    }
    return true;
}

template <typename T>
void Vector<T>::copyInto(std::vector<T>& anArray) const
{
    if(anArray.size() < elementData.size())
    {
        throw std::out_of_range("The specified array is not large enough");
    }

    std::copy(elementData.begin(), elementData.end(), anArray.begin());
}

template <typename T>
T Vector<T>::elementAt(int index) const
{
    if(index < 0 || index >= size())
    {
        throw std::out_of_range("Index is out of range");
    }

    return elementData[index];
}

template <typename T>
typename std::vector<T>::iterator Vector<T>::elements()
{
    return elementData.begin();
}

template <typename T>
typename std::vector<T>::iterator Vector<T>::end()
{
    return elementData.end();
}

template <typename T>
void Vector<T>::ensureCapacity(int minCapacity)
{
    if(minCapacity > elementData.capacity())
    {
        elementData.reserve(minCapacity);
    }
}

template <typename T>
bool Vector<T>::equals(const Vector<T>& o) const
{
    return elementData == o.elementData;
}

