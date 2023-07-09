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

template <typename T>
T Vector<T>::firstElement()
{
    if(elementData.empty())
    {
        throw std::out_of_range("No elements in the vector");
    }
    return elementData.front();
}

template <typename T>
void Vector<T>::forEach(const std::function<void(const T&)>& action)
{
    for(const auto& element : elementData)
    {
        action(element);
    }
}

template <typename T>
size_t Vector<T>::hashCode()
{
    size_t hash = 0;
    std::hash<T> hasher;
    for(const auto& element : elementData)
    {
        hash ^= hasher(element) + 0x9e3779b9 + (hash << 6) + (hash >> 2);
    }
    return hash;
}

template <typename T>
[[maybe_unused]] int Vector<T>::indexOf(const T& value)
{
    auto it = std::find(elementData.begin(), elementData.end(), value);
    if(it != elementData.end())
    {
        return std::distance(elementData.begin(), it);
    }
    return -1;
}

template <typename T>
int Vector<T>::indexOf(const T& value, int index)
{
    if(index < 0 || index >= elementData.size())
    {
        throw std::out_of_range("Index is out of range");
    }

    auto it = std::find(elementData.begin() + index, elementData.end(), value);
    if(it != elementData.end())
    {
        return std::distance(elementData.begin(), it);
    }
    return -1;
}

template <typename T>
void Vector<T>::insertElementAt(const T& value, int index)
{
    if(index < 0 || index > elementData.size())
    {
        throw std::out_of_range("Index is out of range");
    }
    elementData.insert(elementData.begin() + index, value);
}

template <typename T>
bool Vector<T>::isEmpty()
{
    return elementData.empty();
}

template <typename T>
T Vector<T>::lastElement()
{
    if(elementData.empty())
    {
        throw std::out_of_range("No elements in the vector");
    }
    return elementData.back();
}

template <typename T>
typename std::vector<T>::iterator Vector<T>::iterator()
{
    return elementData.begin();
}

template <typename T>
typename std::vector<T>::iterator Vector<T>::begin()
{
    return elementData.begin();
}

template <typename T>
int Vector<T>::lastIndexOf(T o)
{
    auto it = std::find(elementData.rbegin(), elementData.rend(), o);
    if (it != elementData.rend()) {
        return elementData.size() - 1 - std::distance(elementData.rbegin(), it);
    } else {
        return -1;
    }
}

template <typename T>
int Vector<T>::lastIndexOf(T o, int index)
{
    if(index < 0 || index >= elementData.size())
    {
        throw std::out_of_range("Index out of range");
    }
    auto it = std::find(elementData.rbegin() + (elementData.size() - 1 - index), elementData.rend(), o);
    if (it != elementData.rend())
    {
        return elementData.size() - 1 - std::distance(elementData.rbegin(), it);
    }
    else
    {
        return -1;
    }
}

template <typename T>
T Vector<T>::removeByIndex(int index)
{
    if(index < 0 || index >= elementData.size())
    {
        throw std::out_of_range("Index out of range");
    }
    T removedElement = elementData.at(index);
    elementData.erase(elementData.begin() + index);

    return removedElement;
}

template <typename T>
bool Vector<T>::removeAll(const std::vector<T>& objects)
{
    std::size_t oldSize = elementData.size();

    // Create a set from objects for efficient lookups
    std::unordered_set<T> objects_set(objects.begin(), objects.end());

    // Use std::remove_if to remove elements from elementData
    auto newEnd = std::remove_if(elementData.begin(), elementData.end(),
                                 [&](const T& obj) {
                                     return objects_set.find(obj) != objects_set.end();
                                 });

    // Erase the "removed" elements from the vector
    elementData.erase(newEnd, elementData.end());

    // Return whether any elements were removed
    return oldSize != elementData.size();
}



template <typename T>
bool Vector<T>::removeElementValue(T o) {
    auto it = std::find(elementData.begin(), elementData.end(), o);
    if (it != elementData.end()) {
        elementData.erase(it);
        return true;
    }
    return false;
}

template <typename T>
void Vector<T>::removeAllElements()
{
    elementData.clear();
}

template <typename T>
bool Vector<T>::removeElement(T obj)
{
    return removeElementValue(obj);
}

template <typename T>
void Vector<T>::removeElementAt(int index)
{
    removeByIndex(index);
}

template <typename T>
void Vector<T>::removeRange(int fromIndex, int toIndex)
{
    if (fromIndex < 0 || toIndex > elementData.size() || fromIndex > toIndex)
    {
        throw std::out_of_range("Invalid index range");
    }

    elementData.erase(elementData.begin() + fromIndex, elementData.begin() + toIndex);
}

template <typename T>
void Vector<T>::replaceAll(std::function<T(const T&)> func)
{
    std::transform(elementData.begin(), elementData.end(), elementData.begin(), func);
}

template <typename T>
void Vector<T>::print()
{
    for(const T& elem : elementData)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
}