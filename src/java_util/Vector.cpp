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

