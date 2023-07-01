//
// Created by Science on 6/30/2023.
//

#include "../../include/java_util/Arrays.h"


/**
 * @brief Generates a string representation of an int array.
 * @param intArray - The array to convert.
 * @param size - Size of the array.
 * @return A string representation of the array.
*/
auto Arrays::toString(int *intArray, size_t size) -> std::string
{
    return Arrays::iterateOverArrays(intArray, size);
}

/**
 * @brief Generates a string representation of a float array.
 * @param floatArray - The array to convert.
 * @param size - Size of the array.
 * @return A string representation of the array.
*/
auto Arrays::toString(float *floatArray, size_t size) -> std::string
{
    return Arrays::iterateOverArrays(floatArray, size);
}

/**
 * @brief Generates a string representation of a double array.
 * @param doubleArray - The array to convert.
 * @param size - Size of the array.
 * @return A string representation of the array.
*/
auto Arrays::toString(double *doubleArray, size_t size) -> std::string
{
    return Arrays::iterateOverArrays(doubleArray, size);
}

/**
 * @brief Generates a string representation of a char array.
 * @param charArray - The array to convert.
 * @param size - Size of the array.
 * @return A string representation of the array.
*/
auto Arrays::toString(char *charArray, size_t size) -> std::string
{
    return Arrays::iterateOverArrays(charArray, size);
}

/**
 * @brief Generates a string representation of a short array.
 * @param shortArray - The array to convert.
 * @param size - Size of the array.
 * @return A string representation of the array.
*/
[[maybe_unused]] auto Arrays::toString(short *shortArray, size_t size) -> std::string
{
    return Arrays::iterateOverArrays(shortArray, size);
}

/**
 * @brief Generates a string representation of a bool array.
 * @param boolArray - The array to convert.
 * @param size - Size of the array.
 * @return A string representation of the array.
*/
auto Arrays::toString(bool *boolArray, size_t size) -> std::string
{
    return Arrays::iterateOverArrays(boolArray, size);
}

/**
 * @brief Generates a string representation of a long array.
 * @param longArray - The array to convert.
 * @param size - Size of the array.
 * @return A string representation of the array.
*/
auto Arrays::toString(long *longArray, size_t size) -> std::string
{
    return Arrays::iterateOverArrays(longArray, size);
}

/**
 * @brief Generates a string representation of a byte(int8_t) array.
 * @param byteArray - The array to convert.
 * @param size - Size of the array.
 * @return A string representation of the array.
*/
[[maybe_unused]] auto Arrays::toString(int8_t *byteArray, size_t size) -> std::string
{
    return Arrays::iterateOverArrays(byteArray, size);
}

/**
 * @brief Generates a string representation of a vector array.
 * @param objects - The array to convert.
 * @return A string representation of the array.
*/
template<typename T>
auto Arrays::toString(std::vector<T> &objects) -> std::string
{
    T arr[objects.size()];
    int counter = 0;

    for (const auto& value : objects)
        arr[counter++] = value;

    return Arrays::iterateOverArrays(arr, counter);
}

/**
 * @brief Performs a binary search on the given integer array to find the specified key.
 * @param intArr The integer array to search.
 * @param key The key to search for.
 * @param size The size of the array.
 * @return The index of the key in the array if found, or -1 if the key is not present.
*/
[[maybe_unused]] auto Arrays::binarySearch(int *intArr, int& key, int size) -> int
{
    return Arrays::binarySearchBeginToEnd(intArr, key, size);
}

/**
 * @brief Performs a binary search on the given float array to find the specified key.
 * @param floatArr The float array to search.
 * @param key The key to search for.
 * @param size The size of the array.
 * @return The index of the key in the array if found, or -1 if the key is not present.
*/
[[maybe_unused]] auto Arrays::binarySearch(float *floatArr, float& key, int size) -> int
{
    return Arrays::binarySearchBeginToEnd(floatArr, key, size);
}

/**
 * @brief Performs a binary search on the given long array to find the specified key.
 * @param longArr The long array to search.
 * @param key The key to search for.
 * @param size The size of the array.
 * @return The index of the key in the array if found, or -1 if the key is not present.
*/
[[maybe_unused]] auto Arrays::binarySearch(long *longArr, long& key, int size) -> int
{
    return Arrays::binarySearchBeginToEnd(longArr, key, size);
}

/**
 * @brief Performs a binary search on the given double array to find the specified key.
 * @param doubleArr The double array to search.
 * @param key The key to search for.
 * @param size The size of the array.
 * @return The index of the key in the array if found, or -1 if the key is not present.
*/
[[maybe_unused]] auto Arrays::binarySearch(double *doubleArr, double& key, int size) -> int
{
    return Arrays::binarySearchBeginToEnd(doubleArr, key, size);
}

/**
 * @brief Performs a binary search on the given char array to find the specified key.
 * @param charArr The char array to search.
 * @param key The key to search for.
 * @param size The size of the array.
 * @return The index of the key in the array if found, or -1 if the key is not present.
*/
[[maybe_unused]] auto Arrays::binarySearch(char *charArr, char& key, int size) -> int
{
    return Arrays::binarySearchBeginToEnd(charArr, key, size);
}

/**
 * @brief Performs a binary search on the given short array to find the specified key.
 * @param shortArr The float array to search.
 * @param key The key to search for.
 * @param size The size of the array.
 * @return The index of the key in the array if found, or -1 if the key is not present.
*/
[[maybe_unused]] auto Arrays::binarySearch(short *shortArr, short& key, int size) -> int
{
    return Arrays::binarySearchBeginToEnd(shortArr, key, size);
}

/**
 * @brief Performs a binary search on the given string array to find the specified key.
 * @param stringArr The string array to search.
 * @param key The key to search for.
 * @param size The size of the array.
 * @return The index of the key in the array if found, or -1 if the key is not present.
*/
[[maybe_unused]] auto Arrays::binarySearch(std::string stringArr[], std::string &key, int size) -> int
{
    return Arrays::binarySearchBeginToEnd(stringArr, key, size);
}

/**
 * @brief Performs a binary search on the given int8_t array to find the specified key.
 * @param byteArr The int8_t array to search.
 * @param key The key to search for.
 * @param size The size of the array.
 * @return The index of the key in the array if found, or -1 if the key is not present.
*/
[[maybe_unused]] auto Arrays::binarySearch(int8_t *byteArr, int8_t& key, int size) -> int
{
    return Arrays::binarySearchBeginToEnd(byteArr, key, size);
}

/**
 * @brief Performs a binary search on the given uint8_t array to find the specified key.
 * @param ubyteArr The uint8_t array to search.
 * @param key The key to search for.
 * @param size The size of the array.
 * @return The index of the key in the array if found, or -1 if the key is not present.
*/
[[maybe_unused]] auto Arrays::binarySearch(uint8_t *ubyteArr, uint8_t& key, int size) -> int
{
    return Arrays::binarySearchBeginToEnd(ubyteArr, key, size);
}

/**
 * @brief Perform a binary search on a sorted array of integers
 *
 * @param intArr The array in which to search for the key. The array should be sorted in ascending order.
 * @param fromIndex The beginning index from where to start the search.
 * @param toIndex The ending index where to end the search.
 * @param key The element to search for.
 * @return int The index of the element if found, or -1 if the element is not found.
 */
[[maybe_unused]] auto Arrays::binarySearch(int *intArr, size_t fromIndex, size_t toIndex, int &key) -> int
{
    return Arrays::binarySearchIndex(intArr, fromIndex, toIndex, key);
}

/**
 * @brief Perform a binary search on a sorted array of floats
 *
 * @param floatArr The array in which to search for the key. The array should be sorted in ascending order.
 * @param fromIndex The beginning index from where to start the search.
 * @param toIndex The ending index where to end the search.
 * @param key The element to search for.
 * @return int The index of the element if found, or -1 if the element is not found.
 */
[[maybe_unused]] auto Arrays::binarySearch(float *floatArr, size_t fromIndex, size_t toIndex, float &key) -> int
{
    return Arrays::binarySearchIndex(floatArr, fromIndex, toIndex, key);
}

/**
 * @brief Perform a binary search on a sorted array of doubles
 *
 * @param doubleArr The array in which to search for the key. The array should be sorted in ascending order.
 * @param fromIndex The beginning index from where to start the search.
 * @param toIndex The ending index where to end the search.
 * @param key The element to search for.
 * @return int The index of the element if found, or -1 if the element is not found.
 */
[[maybe_unused]] auto Arrays::binarySearch(double *doubleArr, size_t fromIndex, size_t toIndex, double &key) -> int
{
    return Arrays::binarySearchIndex(doubleArr, fromIndex, toIndex, key);
}

/**
 * @brief Perform a binary search on a sorted array of chars
 *
 * @param charArr The array in which to search for the key. The array should be sorted in ascending order.
 * @param fromIndex The beginning index from where to start the search.
 * @param toIndex The ending index where to end the search.
 * @param key The element to search for.
 * @return int The index of the element if found, or -1 if the element is not found.
 */
[[maybe_unused]] auto Arrays::binarySearch(char *charArr, size_t fromIndex, size_t toIndex, char &key) -> int
{
    return Arrays::binarySearchIndex(charArr, fromIndex, toIndex, key);
}

/**
 * @brief Perform a binary search on a sorted array of longs
 *
 * @param longArr The array in which to search for the key. The array should be sorted in ascending order.
 * @param fromIndex The beginning index from where to start the search.
 * @param toIndex The ending index where to end the search.
 * @param key The element to search for.
 * @return int The index of the element if found, or -1 if the element is not found.
 */
[[maybe_unused]] auto Arrays::binarySearch(long *longArr, size_t fromIndex, size_t toIndex, long &key) -> int
{
    return Arrays::binarySearchIndex(longArr, fromIndex, toIndex, key);
}

/**
 * @brief Perform a binary search on a sorted array of shorts
 *
 * @param shortArr The array in which to search for the key. The array should be sorted in ascending order.
 * @param fromIndex The beginning index from where to start the search.
 * @param toIndex The ending index where to end the search.
 * @param key The element to search for.
 * @return int The index of the element if found, or -1 if the element is not found.
 */
[[maybe_unused]] auto Arrays::binarySearch(short *shortArr, size_t fromIndex, size_t toIndex, short &key) -> int
{
    return Arrays::binarySearchIndex(shortArr, fromIndex, toIndex, key);
}

/**
 * @brief Perform a binary search on a sorted array of strings
 *
 * @param stringArr The array in which to search for the key. The array should be sorted in ascending order.
 * @param fromIndex The beginning index from where to start the search.
 * @param toIndex The ending index where to end the search.
 * @param key The element to search for.
 * @return int The index of the element if found, or -1 if the element is not found.
 */
[[maybe_unused]] auto Arrays::binarySearch(std::string *stringArr, size_t fromIndex, size_t toIndex, std::string &key) -> int
{
    return Arrays::binarySearchIndex(stringArr, fromIndex, toIndex, key);
}

/**
 * @brief Perform a binary search on a sorted array of bytes
 *
 * @param byteArr The array in which to search for the key. The array should be sorted in ascending order.
 * @param fromIndex The beginning index from where to start the search.
 * @param toIndex The ending index where to end the search.
 * @param key The element to search for.
 * @return int The index of the element if found, or -1 if the element is not found.
 */
[[maybe_unused]] auto Arrays::binarySearch(int8_t *byteArr, size_t fromIndex, size_t toIndex, int8_t &key) -> int
{
    return Arrays::binarySearchIndex(byteArr, fromIndex, toIndex, key);
}

/**
 * @brief Perform a binary search on a sorted array of unsigned bytes
 *
 * @param ubyteArr The array in which to search for the key. The array should be sorted in ascending order.
 * @param fromIndex The beginning index from where to start the search.
 * @param toIndex The ending index where to end the search.
 * @param key The element to search for.
 * @return int The index of the element if found, or -1 if the element is not found.
 */
[[maybe_unused]] auto Arrays::binarySearch(uint8_t *ubyteArr, size_t fromIndex, size_t toIndex, uint8_t &key) -> int
{
    return Arrays::binarySearchIndex(ubyteArr, fromIndex, toIndex, key);
}

auto Arrays::fill(bool *boolArr, bool &value, size_t size) -> void
{
    Arrays::fillArray(boolArr, value, size);
}

auto Arrays::fill(int *intArr, int &value, size_t size) -> void
{
    Arrays::fillArray(intArr, value, size);
}

auto Arrays::fill(float *floatArr, float &value, size_t size) -> void
{
    Arrays::fillArray(floatArr, value, size);
}

auto Arrays::fill(double *doubleArr, double &value, size_t size) -> void
{
    Arrays::fillArray(doubleArr, value, size);
}

auto Arrays::fill(char *charArr, char &value, size_t size) -> void
{
    Arrays::fillArray(charArr, value, size);
}

auto Arrays::fill(short *shortArr, short &value, size_t size) -> void
{
    Arrays::fillArray(shortArr, value, size);
}

auto Arrays::fill(long *longArr, long &value, size_t size) -> void
{
    Arrays::fillArray(longArr, value, size);
}

auto Arrays::fill(long double *longDoubleArr, long double &value, size_t size) -> void
{
    Arrays::fillArray(longDoubleArr, value, size);
}

auto Arrays::fill(long long *longLongArr, long long &value, size_t size) -> void
{
    Arrays::fillArray(longLongArr, value, size);
}

auto Arrays::fill(int8_t *byteArr, int8_t &value, size_t size) -> void
{
    Arrays::fillArray(byteArr, value, size);
}

auto Arrays::fill(uint8_t *ubyteArr, uint8_t &value, size_t size) -> void
{
    Arrays::fillArray(ubyteArr, value, size);
}

auto Arrays::fill(uint64_t *ubyteArr, uint64_t &value, size_t size) -> void
{
    Arrays::fillArray(ubyteArr, value, size);
}

template<typename T>
auto Arrays::fill(std::vector<T> &objects, T &value) -> void
{
    T arr[objects.size()];
    size_t counter = 0;

    for (const auto& val : objects)
        arr[counter++] = value;
}

/**
 * @brief Perform a binary search on a sorted vector over a specified range.
 * @tparam T The type of elements in the vector.
 * @param objects The vector to be searched.
 * @param fromIndex The starting index for the search.
 * @param toIndex The ending index for the search.
 * @param key The value to be searched.
 * @return The index of the key if it is in the vector, -1 otherwise.
 */
template<typename T>
auto Arrays::binarySearch(std::vector<T> &objects, size_t fromIndex, size_t toIndex, T &key) -> int
{
    T arr[objects.size()];
    int counter = 0;

    for (const auto& value : objects)
        arr[counter++] = value;

    return Arrays::binarySearchIndex(arr, fromIndex, toIndex, key);
}

/**
 * @brief Perform a binary search on a sorted vector from the beginning to the end.
 * @tparam T The type of elements in the vector.
 * @param objects The vector to be searched.
 * @param key The value to be searched.
 * @return The index of the key if it is in the vector, -1 otherwise.
 */
template<typename T>
auto Arrays::binarySearch(std::vector<T> &objects, T &key) -> int
{
    T arr[objects.size()];
    int counter = 0;

    for (const auto& value : objects)
        arr[counter++] = value;

    return Arrays::binarySearchBeginToEnd(arr, key, counter);
}

/**
 * @brief Iterates over the provided array and generates a string representation.
 * @param array - Pointer to the array.
 * @param size - Size of the array.
 * @return A string representation of the array.
*/
template<typename T>
auto Arrays::iterateOverArrays(T *array, size_t size) -> std::string
{
    std::stringstream ss;
    ss << "[";

    for (size_t index = 0; index < size; index++)
    {
        if (index == size - 1)
            ss << array[index] << "]";
        else
            ss << array[index] << ", ";
    }

    return ss.str();
}

/**
 * @brief Performs a binary search on the given array to find the specified key.
 * @tparam T The type of elements in the array.
 * @param array The array to search.
 * @param key The key to search for.
 * @param size The size of the array.
 * @return The index of the key in the array if found, or -1 if the key is not present.
*/
template<typename T>
auto Arrays::binarySearchBeginToEnd(T *array, T key, size_t size) -> int
{
    size_t left = 0;
    size_t right = size - 1;

    while (left <= right)
    {
        size_t mid = left + (right - left) / 2;

        if (array[mid] == key)
            return mid;
        else if (array[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // key not found
}

/**
 * @brief Perform a binary search on a sorted array
 *
 * @tparam T Type of the elements in the array. This type should support the '==' and '<' operators.
 * @param array The array in which to search for the key. The array should be sorted in ascending order.
 * @param fromIndex The beginning index from where to start the search.
 * @param toIndex The ending index where to end the search.
 * @param key The element to search for.
 * @return int The index of the element if found, or -1 if the element is not found.
*/
template<typename T>
auto Arrays::binarySearchIndex(T *array, size_t fromIndex, size_t toIndex, T &key) -> int
{
    while (fromIndex <= toIndex)
    {
        size_t mid = fromIndex + (toIndex - fromIndex) / 2;
        if (array[mid] == key)
            return mid;
        if (array[mid] < key)
            fromIndex = mid + 1;
         else
            toIndex = mid - 1;
    }

    return -1;  // return -1 if key is not found
}

template<typename T>
auto Arrays::fillArray(T *array, T &value, size_t size) -> void
{
    for (size_t index = 0; index < size; index++)
        array[index] = value;
}


template auto Arrays::toString(std::vector<std::string> &objects) -> std::string;
template auto Arrays::toString(std::vector<double> &objects) -> std::string;
template auto Arrays::toString(std::vector<int> &objects) -> std::string;
template auto Arrays::toString(std::vector<float> &objects) -> std::string;
template auto Arrays::toString(std::vector<char> &objects) -> std::string;
template auto Arrays::toString(std::vector<short> &objects) -> std::string;
template auto Arrays::toString(std::vector<bool> &objects) -> std::string;
template auto Arrays::toString(std::vector<char*> &objects) -> std::string;
template auto Arrays::toString(std::vector<uint8_t> &objects) -> std::string;
template auto Arrays::toString(std::vector<size_t> &objects) -> std::string;
template auto Arrays::toString(std::vector<int8_t> &objects) -> std::string;
template auto Arrays::toString(std::vector<long> &objects) -> std::string;
template auto Arrays::toString(std::vector<uint16_t> &objects) -> std::string;
template auto Arrays::toString(std::vector<long double> &objects) -> std::string;

template auto Arrays::binarySearch(std::vector<std::string> &objects, std::string& key) -> int;
template auto Arrays::binarySearch(std::vector<int> &objects, int& key) -> int;
template auto Arrays::binarySearch(std::vector<double> &objects, double& key) -> int;
template auto Arrays::binarySearch(std::vector<float> &objects, float& key) -> int;
template auto Arrays::binarySearch(std::vector<char> &objects, char& key) -> int;
template auto Arrays::binarySearch(std::vector<short> &objects, short& key) -> int;
template auto Arrays::binarySearch(std::vector<long> &objects, long& key) -> int;
template auto Arrays::binarySearch(std::vector<int8_t> &objects, int8_t& key) -> int;
template auto Arrays::binarySearch(std::vector<uint8_t> &objects, uint8_t & key) -> int;
template auto Arrays::binarySearch(std::vector<long double> &objects, long double& key) -> int;
template auto Arrays::binarySearch(std::vector<long long> &objects, long long& key) -> int;
template auto Arrays::binarySearch(std::vector<uint64_t> &objects, uint64_t & key) -> int;

template auto Arrays::binarySearch(std::vector<std::string> &objects, size_t fromIndex, size_t toIndex, std::string &key) -> int;
template auto Arrays::binarySearch(std::vector<int> &objects, size_t fromIndex, size_t toIndex, int &key) -> int;
template auto Arrays::binarySearch(std::vector<float> &objects, size_t fromIndex, size_t toIndex, float &key) -> int;
template auto Arrays::binarySearch(std::vector<double> &objects, size_t fromIndex, size_t toIndex, double &key) -> int;
template auto Arrays::binarySearch(std::vector<char> &objects, size_t fromIndex, size_t toIndex, char &key) -> int;
template auto Arrays::binarySearch(std::vector<long> &objects, size_t fromIndex, size_t toIndex, long &key) -> int;
template auto Arrays::binarySearch(std::vector<short> &objects, size_t fromIndex, size_t toIndex, short &key) -> int;
template auto Arrays::binarySearch(std::vector<int8_t> &objects, size_t fromIndex, size_t toIndex, int8_t &key) -> int;
template auto Arrays::binarySearch(std::vector<uint8_t> &objects, size_t fromIndex, size_t toIndex, uint8_t &key) -> int;
template auto Arrays::binarySearch(std::vector<long double> &objects, size_t fromIndex, size_t toIndex, long double &key) -> int;
template auto Arrays::binarySearch(std::vector<long long> &objects, size_t fromIndex, size_t toIndex, long long &key) -> int;
template auto Arrays::binarySearch(std::vector<uint64_t> &objects, size_t fromIndex, size_t toIndex, uint64_t &key) -> int;

template auto Arrays::fill(std::vector<int>& objects, int& value) -> void;
template auto Arrays::fill(std::vector<float>& objects, float& value) -> void;
template auto Arrays::fill(std::vector<double>& objects, double& value) -> void;
template auto Arrays::fill(std::vector<short>& objects, short& value) -> void;
template auto Arrays::fill(std::vector<char>& objects, char& value) -> void;
template auto Arrays::fill(std::vector<long>& objects, long& value) -> void;
template auto Arrays::fill(std::vector<long double>& objects, long double& value) -> void;
template auto Arrays::fill(std::vector<uint8_t>& objects, uint8_t& value) -> void;
template auto Arrays::fill(std::vector<int8_t>& objects, int8_t& value) -> void;
template auto Arrays::fill(std::vector<uint64_t>& objects, uint64_t& value) -> void;
template auto Arrays::fill(std::vector<long long>& objects, long long& value) -> void;

