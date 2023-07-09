//
// Created by Amin Tahmasebi on 7/5/2023.
//

#include "../../include/java_util/Vector.h"

/**
 * @brief Constructs an empty Vector object with no initial capacity.
 *
 * The Vector will have a capacity of 0 and the capacity increment value will be set to 0.
*/
template <typename T>
Vector<T>::Vector() : capacityIncrement(0) {}

/**
 * @brief Constructs a Vector object with the specified initial capacity.
 *
 * The Vector will have the specified initial capacity and the capacity increment value will be set to 0.
 *
 * @param initialCapacity The initial capacity of the Vector.
*/
template <typename T>
Vector<T>::Vector(int initialCapacity) : capacityIncrement(0)
{
    elementData.reserve(initialCapacity);
}

/**
 * @brief Constructs a Vector object with the specified initial capacity and capacity increment.
 *
 * The Vector will have the specified initial capacity, and if additional capacity is needed,
 * it will be incremented by the specified capacity increment value.
 *
 * @param initialCapacity The initial capacity of the Vector.
 * @param capacityIncrement The amount by which the capacity should be incremented when additional capacity is required.
*/
template <typename T>
Vector<T>::Vector(int initialCapacity, int capacityIncrement)
        : capacityIncrement(capacityIncrement)
        {
    elementData.reserve(initialCapacity);
}

/**
 * @brief Adds the specified value to the end of the Vector.
 *
 * If the current capacity of the Vector is not sufficient to store the new value,
 * the capacity will be increased based on the capacity increment value (if greater than 0),
 * or by a default increment of 1.
 *
 * @param value The value to be added to the Vector.
*/
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

/**
 * @brief Returns the element at the specified position in this Vector.
 *
 * The range of the index is [0, size()-1]. Throws an exception if the index is out of range.
 *
 * @param index Index of the element to return
 * @return The element at the specified position in this Vector
 */
template <typename T>
T Vector<T>::get(int index) const
{
    if(index >= elementCount)
    {
        throw std::out_of_range("Index out of range");
    }

    return elementData[index];
}

/**
 * @brief Inserts the specified element at the specified position in this Vector.
 *
 * Shifts the element currently at that position (if any) and any subsequent elements to the right.
 * The range of the index is [0, size()]. Throws an exception if the index is out of range.
 *
 * @param index Index at which the specified element is to be inserted
 * @param value Element to be inserted
 */
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

/**
 * @brief Appends all of the elements in the specified collection to the end of this Vector.
 *
 * The order of the elements in the specified collection is preserved.
 * Throws an exception if the specified collection is null.
 *
 * @param c Collection containing elements to be added to this Vector
 * @return True if this Vector changed as a result of the call
 */
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

/**
 * @brief Returns the number of elements in this Vector.
 *
 * @return The number of elements in this Vector
 */
template <typename T>
int Vector<T>::size() const
{
    return elementCount;
}

/**
 * @brief Adds the specified component to the end of this Vector.
 *
 * @param obj The component to be added
 */
template <typename T>
void Vector<T>::addElement(const T& obj)
{
    add(obj);
}

/**
 * @brief Returns the current capacity of this Vector.
 *
 * @return The current capacity of this Vector
 */
template <typename T>
[[maybe_unused]] int Vector<T>::capacity() const
{
    return elementData.capacity();
}


/**
 * @brief Removes all of the elements from this Vector.
 */
template <typename T>
void Vector<T>::clear()
{
    elementData.clear();
    elementCount = 0;
}

/**
 * @brief Returns a copy of this Vector.
 *
 * @return A copy of this Vector
 */
template <typename T>
Vector<T> Vector<T>::clone() const
{
    Vector<T> copy(*this);
    return copy;
}

/**
 * @brief Returns true if this Vector contains the specified element.
 *
 * @param o Element whose presence in this Vector is to be tested
 * @return True if this Vector contains the specified element
 */
template <typename T>
bool Vector<T>::contains(const T& o) const
{
    return std::find(elementData.begin(), elementData.end(), o) != elementData.end();
}

/**
 * @brief Returns true if this Vector contains all of the elements in the specified collection.
 *
 * @param c Collection to be checked for containment in this Vector
 * @return True if this Vector contains all of the elements in the specified collection
 */
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

/**
 * @brief Copies the components of this Vector into the specified array.
 *
 * The item at index i in this Vector is copied into the corresponding entry in the array.
 * Throws an exception if the specified array is not large enough.
 *
 * @param anArray The array into which the components get copied
 */
template <typename T>
void Vector<T>::copyInto(std::vector<T>& anArray) const
{
    if(anArray.size() < elementData.size())
    {
        throw std::out_of_range("The specified array is not large enough");
    }

    std::copy(elementData.begin(), elementData.end(), anArray.begin());
}

/**
 * @brief Returns the component at the specified index.
 *
 * Throws an exception if the index is out of range.
 *
 * @param index An index into this Vector
 * @return The component at the specified index
 */
template <typename T>
T Vector<T>::elementAt(int index) const
{
    if(index < 0 || index >= size())
    {
        throw std::out_of_range("Index is out of range");
    }

    return elementData[index];
}

/**
 * @brief Returns an iterator over the elements in this Vector.
 *
 * @return An iterator over the elements in this Vector
 */
template <typename T>
typename std::vector<T>::iterator Vector<T>::elements()
{
    return elementData.begin();
}


/**
 * @brief Returns an iterator pointing to the past-the-end element in the Vector.
 *
 * @return An iterator pointing to the past-the-end element in the Vector
 */
template <typename T>
typename std::vector<T>::iterator Vector<T>::end()
{
    return elementData.end();
}

/**
 * @brief Increases the capacity of this vector, if necessary, to ensure that it can hold at least the number of components specified by the minimum capacity argument.
 *
 * @param minCapacity the desired minimum capacity
 */
template <typename T>
void Vector<T>::ensureCapacity(int minCapacity)
{
    if(minCapacity > elementData.capacity())
    {
        elementData.reserve(minCapacity);
    }
}

/**
 * @brief Compares the specified Object with this vector for equality.
 *
 * @param o the object to be compared for equality with this vector
 * @return true if the specified Object is equal to this vector
 */
template <typename T>
bool Vector<T>::equals(const Vector<T>& o) const
{
    return elementData == o.elementData;
}

/**
 * @brief Returns the first component (the item at index 0) of this vector.
 *
 * @return the first component of this vector
 */
template <typename T>
T Vector<T>::firstElement()
{
    if(elementData.empty())
    {
        throw std::out_of_range("No elements in the vector");
    }
    return elementData.front();
}

/**
 * @brief Performs the given action for each element of the Iterable until all elements have been processed or the action throws an exception.
 *
 * @param action The action to be performed for each element
 */
template <typename T>
void Vector<T>::forEach(const std::function<void(const T&)>& action)
{
    for(const auto& element : elementData)
    {
        action(element);
    }
}

/**
 * @brief Returns the hash code value for this vector.
 *
 * @return the hash code value for this vector
 */
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

/**
 * @brief Returns the index of the first occurrence of the specified element in this vector, or -1 if this vector does not contain the element.
 *
 * @param value element to search for
 * @return the index of the first occurrence of the specified element in this vector, or -1 if this vector does not contain the element
 */
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

/**
 * @brief Returns the index of the first occurrence of the specified element in this vector, searching forwards from index, or returns -1 if the element is not found.
 *
 * @param value element to search for
 * @param index index to start searching from
 * @return the index of the first occurrence of the element in this vector at position index or later in the vector; -1 if the element is not found.
 */
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

/**
 * @brief Inserts the specified object as a component in this vector at the specified index.
 *
 * @param value the component to be inserted
 * @param index where to insert the new component
 */
template <typename T>
void Vector<T>::insertElementAt(const T& value, int index)
{
    if(index < 0 || index > elementData.size())
    {
        throw std::out_of_range("Index is out of range");
    }
    elementData.insert(elementData.begin() + index, value);
}

/**
 * @brief Tests if this vector has no components.
 *
 * @return true if and only if this vector has no components, that is, its size is zero; false otherwise
 */
template <typename T>
bool Vector<T>::isEmpty()
{
    return elementData.empty();
}

/**
 * @brief Returns the last component of the vector.
 *
 * @return the last component of the vector, i.e., the component at the current size of this vector minus 1.
 */
template <typename T>
T Vector<T>::lastElement()
{
    if(elementData.empty())
    {
        throw std::out_of_range("No elements in the vector");
    }
    return elementData.back();
}

/**
 * @brief Returns an iterator over the elements in this Vector.
 *
 * @return an iterator over the elements in this Vector
 */
template <typename T>
typename std::vector<T>::iterator Vector<T>::iterator()
{
    return elementData.begin();
}

/**
 * @brief Returns an iterator pointing to the first element in the Vector.
 *
 * @return An iterator pointing to the first element in the Vector
 */
template <typename T>
typename std::vector<T>::iterator Vector<T>::begin()
{
    return elementData.begin();
}

/**
 * @brief Returns the index of the last occurrence of the specified element in this vector, or -1 if this vector does not contain the element.
 *
 * @param o element to search for
 * @return the index of the last occurrence of the specified element in this vector, or -1 if this vector does not contain the element
 */
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

/**
 * @brief Returns the index of the last occurrence of the specified element in this vector, searching backwards from index, or returns -1 if the element is not found.
 *
 * @param o element to search for
 * @param index index to start searching backwards from
 * @return the index of the last occurrence of the element at position less than index in this vector; -1 if the element is not found.
 */
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

/**
 * @brief Removes the element at the specified position in this Vector.
 *
 * @param index the index of the element to be removed
 * @return element that was removed
 */
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

/**
 * @brief Removes from this Vector all of its elements that are contained in the specified collection.
 *
 * @param objects collection containing elements to be removed from this Vector
 * @return true if this Vector changed as a result of the call
 */
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

/**
 * @brief Removes the first occurrence of the specified element in this Vector.
 *
 * @param o the element to be removed from this Vector, if present
 * @return true if the Vector contained the specified element
 */
template <typename T>
bool Vector<T>::removeElementValue(T o) {
    auto it = std::find(elementData.begin(), elementData.end(), o);
    if (it != elementData.end()) {
        elementData.erase(it);
        return true;
    }
    return false;
}

/**
 * @brief Removes all components from this vector and sets its size to zero.
 */
template <typename T>
void Vector<T>::removeAllElements()
{
    elementData.clear();
}

/**
 * @brief Removes the first (lowest-indexed) occurrence of the argument from this vector.
 *
 * @param obj the component to be removed
 * @return true if the argument was a component of this vector; false otherwise
 */
template <typename T>
bool Vector<T>::removeElement(T obj)
{
    return removeElementValue(obj);
}

/**
 * @brief Removes the element at the specified position in this Vector.
 *
 * @param index the index of the element to be removed
 */
template <typename T>
void Vector<T>::removeElementAt(int index)
{
    removeByIndex(index);
}

/**
 * @brief Removes from this Vector all the elements in the range from fromIndex, inclusive, to toIndex, exclusive.
 *
 * @param fromIndex index of the first element to be removed
 * @param toIndex index after the last element to be removed
 * @throw std::out_of_range if the range is invalid
 */
template <typename T>
void Vector<T>::removeRange(int fromIndex, int toIndex)
{
    if (fromIndex < 0 || toIndex > elementData.size() || fromIndex > toIndex)
    {
        throw std::out_of_range("Invalid index range");
    }

    elementData.erase(elementData.begin() + fromIndex, elementData.begin() + toIndex);
}

/**
 * @brief Replaces each element of this Vector with the result of applying the operator to that element.
 *
 * @param func a function to apply to each element
 */
template <typename T>
void Vector<T>::replaceAll(std::function<T(const T&)> func)
{
    std::transform(elementData.begin(), elementData.end(), elementData.begin(), func);
}

/**
 * @brief Prints out the Vector elements to the standard output.
 */
template <typename T>
void Vector<T>::print()
{
    for(const T& elem : elementData)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
}

/**
 * @brief Retains only the elements in this Vector that are contained in the specified collection.
 *
 * @param c collection containing elements to be retained in this Vector
 * @return true if this Vector changed as a result of the call
 */
template <typename T>
bool Vector<T>::retainAll(const std::vector<T>& c)
{
    bool isChanged = false;

    for (auto it = elementData.begin(); it != elementData.end();)
    {
        // if element in Vector is not found in c, erase it from Vector
        if (std::find(c.begin(), c.end(), *it) == c.end())
        {
            it = elementData.erase(it);
            isChanged = true;
        }
        else
        {
            ++it;
        }
    }

    return isChanged; // return true if any element was removed
}

/**
 * @brief Replaces the element at the specified position in this Vector with the specified element.
 *
 * @param index index of the element to replace
 * @param element element to be stored at the specified position
 * @return the element previously at the specified position
 * @throw std::out_of_range if the index is out of range
 */
template <typename T>
T Vector<T>::set(int index, const T& element)
{
    if(index < 0 || index >= elementData.size())
    {
        throw std::out_of_range("Index out of range");
    }

    T oldElement = elementData.at(index);
    elementData[index] = element;

    return oldElement; // return the element previously at the specified position
}

/**
 * @brief Sets the component at the specified index of this vector to be the specified object.
 *
 * @param obj the component to be inserted
 * @param index where to insert the new component
 * @throw std::out_of_range if the index is out of range
 */
template <typename T>
void Vector<T>::setElementAt(const T& obj, int index)
{
    if(index < 0 || index >= elementData.size())
    {
        throw std::out_of_range("Index out of range");
    }

    elementData[index] = obj;
}

/**
 * @brief Sets the size of this vector.
 *
 * @param newSize the new size for this vector
 * @throw std::out_of_range if the new size is negative
 */
template <typename T>
void Vector<T>::setSize(int newSize)
{
    if(newSize < 0)
    {
        throw std::out_of_range("New size is negative");
    }

    if(newSize < elementData.size())
    {
        elementData.resize(newSize);
    }
    else
    {
        while(elementData.size() < newSize)
        {
            elementData.push_back(T());
        }
    }
}

/**
 * @brief Sorts this Vector into ascending order, according to the natural ordering of its elements.
 */
template <typename T>
void Vector<T>::sort()
{
    std::sort(elementData.begin(), elementData.end());
}

/**
 * @brief Trims the capacity of this Vector instance to be the Vector's current size.
 */
template <typename T>
void Vector<T>::trimToSize()
{
    elementData.shrink_to_fit();
}

/**
 * @brief Returns a string representation of this Vector.
 *
 * @return a string representation of this Vector
 */
template <typename T>
std::string Vector<T>::toString()
{
    std::ostringstream oss;
    for(const auto& el : elementData)
    {
        oss << el << ' ';
    }
    return oss.str();
}

/**
 * @brief Returns an array containing all of the elements in this Vector in the correct order.
 *
 * @return an array containing all of the elements in this Vector
 */
template <typename T>
std::vector<T> Vector<T>::toArray()
{
    return elementData;
}

