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

/**
 * @brief Fills the given bool array with the specified value.
 * @param boolArr The bool array to be filled.
 * @param value The bool value to be set in all positions of the array.
 * @param size The size of the array.
*/
[[maybe_unused]] auto Arrays::fill(bool *boolArr, bool &value, size_t size) -> void
{
    Arrays::fillArray(boolArr, value, size);
}

/**
 * @brief Fills the given int array with the specified value.
 * @param intArr The int array to be filled.
 * @param value The int value to be set in all positions of the array.
 * @param size The size of the array.
 */
[[maybe_unused]] auto Arrays::fill(int *intArr, int &value, size_t size) -> void
{
    Arrays::fillArray(intArr, value, size);
}

/**
 * @brief Fills the given float array with the specified value.
 * @param floatArr The float array to be filled.
 * @param value The float value to be set in all positions of the array.
 * @param size The size of the array.
*/
[[maybe_unused]] auto Arrays::fill(float *floatArr, float &value, size_t size) -> void
{
    Arrays::fillArray(floatArr, value, size);
}

/**
 * @brief Fills the given double array with the specified value.
 * @param doubleArr The double array to be filled.
 * @param value The double value to be set in all positions of the array.
 * @param size The size of the array.
*/
[[maybe_unused]] auto Arrays::fill(double *doubleArr, double &value, size_t size) -> void
{
    Arrays::fillArray(doubleArr, value, size);
}

/**
 * @brief Fills the given char array with the specified value.
 * @param charArr The char array to be filled.
 * @param value The char value to be set in all positions of the array.
 * @param size The size of the array.
*/
[[maybe_unused]] auto Arrays::fill(char *charArr, char &value, size_t size) -> void
{
    Arrays::fillArray(charArr, value, size);
}

/**
 * @brief Fills the given short array with the specified value.
 * @param shortArr The short array to be filled.
 * @param value The short value to be set in all positions of the array.
 * @param size The size of the array.
*/
[[maybe_unused]] auto Arrays::fill(short *shortArr, short &value, size_t size) -> void
{
    Arrays::fillArray(shortArr, value, size);
}

/**
 * @brief Fills the given long array with the specified value.
 * @param longArr The long array to be filled.
 * @param value The long value to be set in all positions of the array.
 * @param size The size of the array.
*/
[[maybe_unused]] auto Arrays::fill(long *longArr, long &value, size_t size) -> void
{
    Arrays::fillArray(longArr, value, size);
}

/**
 * @brief Fills the given long double array with the specified value.
 * @param longDoubleArr The long double array to be filled.
 * @param value The long double value to be set in all positions of the array.
 * @param size The size of the array.
*/
[[maybe_unused]] auto Arrays::fill(long double *longDoubleArr, long double &value, size_t size) -> void
{
    Arrays::fillArray(longDoubleArr, value, size);
}

/**
 * @brief Fills the given long long array with the specified value.
 * @param longLongArr The long long array to be filled.
 * @param value The long long value to be set in all positions of the array.
 * @param size The size of the array.
*/
[[maybe_unused]] auto Arrays::fill(long long *longLongArr, long long &value, size_t size) -> void
{
    Arrays::fillArray(longLongArr, value, size);
}
/**
 * @brief Fills the given int8_t array with the specified value.
 * @param byteArr The int8_t array to be filled.
 * @param value The int8_t value to be set in all positions of the array.
 * @param size The size of the array.
*/
[[maybe_unused]] auto Arrays::fill(int8_t *byteArr, int8_t &value, size_t size) -> void
{
    Arrays::fillArray(byteArr, value, size);
}

/**
 * @brief Fills the given uint8_t array with the specified value.
 * @param ubyteArr The uint8_t array to be filled.
 * @param value The uint8_t value to be set in all positions of the array.
 * @param size The size of the array.
*/
[[maybe_unused]] auto Arrays::fill(uint8_t *ubyteArr, uint8_t &value, size_t size) -> void
{
    Arrays::fillArray(ubyteArr, value, size);
}

/**
 * @brief Fills the given uint64_t array with the specified value.
 * @param ubyteArr The uint64_t array to be filled.
 * @param value The uint64_t value to be set in all positions of the array.
 * @param size The size of the array.
*/
[[maybe_unused]] auto Arrays::fill(uint64_t *ubyteArr, uint64_t &value, size_t size) -> void
{
    Arrays::fillArray(ubyteArr, value, size);
}

/**
 * @brief Fills the specified range of the provided int array with the given value.
 *
 * @param intArr The array to be filled with the provided value.
 * @param fromIndex The initial index of the range to be filled, inclusive.
 * @param toIndex The final index of the range to be filled, exclusive.
 * @param value The value to be stored in all elements of the array within the specified range.
*/
[[maybe_unused]] auto Arrays::fill(int *intArr, size_t fromIndex, size_t toIndex, int value) -> void
{
    Arrays::fillArray(intArr, fromIndex, toIndex, value);
}

/**
 * @brief Fills the specified range of the provided double array with the given value.
 *
 * @param doubleArr The array to be filled with the provided value.
 * @param fromIndex The initial index of the range to be filled, inclusive.
 * @param toIndex The final index of the range to be filled, exclusive.
 * @param value The value to be stored in all elements of the array within the specified range.
*/
[[maybe_unused]] auto Arrays::fill(double doubleArr[], size_t fromIndex, size_t toIndex, double value) -> void
{
    Arrays::fillArray(doubleArr, fromIndex, toIndex, value);
}

/**
 * @brief Fills the specified range of the provided float array with the given value.
 *
 * @param floatArr The array to be filled with the provided value.
 * @param fromIndex The initial index of the range to be filled, inclusive.
 * @param toIndex The final index of the range to be filled, exclusive.
 * @param value The value to be stored in all elements of the array within the specified range.
 */
[[maybe_unused]] auto Arrays::fill(float floatArr[], size_t fromIndex, size_t toIndex, float value) -> void
{
    Arrays::fillArray(floatArr, fromIndex, toIndex, value);
}

/**
 * @brief Fills the specified range of the provided char array with the given value.
 *
 * @param charArr The array to be filled with the provided value.
 * @param fromIndex The initial index of the range to be filled, inclusive.
 * @param toIndex The final index of the range to be filled, exclusive.
 * @param value The value to be stored in all elements of the array within the specified range.
*/
[[maybe_unused]] auto Arrays::fill(char charArr[], size_t fromIndex, size_t toIndex, char value) -> void
{
    Arrays::fillArray(charArr, fromIndex, toIndex, value);
}

/**
 * @brief Fills the specified range of the provided short array with the given value.
 *
 * @param shortArr The array to be filled with the provided value.
 * @param fromIndex The initial index of the range to be filled, inclusive.
 * @param toIndex The final index of the range to be filled, exclusive.
 * @param value The value to be stored in all elements of the array within the specified range.
*/
[[maybe_unused]] auto Arrays::fill(short shortArr[], size_t fromIndex, size_t toIndex, short value) -> void
{
    Arrays::fillArray(shortArr, fromIndex, toIndex, value);
}

/**
 * @brief Fills the specified range of the provided long array with the given value.
 *
 * @param longArr The array to be filled with the provided value.
 * @param fromIndex The initial index of the range to be filled, inclusive.
 * @param toIndex The final index of the range to be filled, exclusive.
 * @param value The value to be stored in all elements of the array within the specified range.
*/
[[maybe_unused]] auto Arrays::fill(long longArr[], size_t fromIndex, size_t toIndex, long value) -> void
{
    Arrays::fillArray(longArr, fromIndex, toIndex, value);
}

/**
 * @brief Fills the specified range of the provided int8_t array with the given value.
 *
 * @param byteArr The array to be filled with the provided value.
 * @param fromIndex The initial index of the range to be filled, inclusive.
 * @param toIndex The final index of the range to be filled, exclusive.
 * @param value The value to be stored in all elements of the array within the specified range.
*/
[[maybe_unused]] auto Arrays::fill(int8_t byteArr[], size_t fromIndex, size_t toIndex, int8_t value) -> void
{
    Arrays::fillArray(byteArr, fromIndex, toIndex, value);
}

/**
 * @brief Fills the specified range of the provided uint8_t array with the given value.
 *
 * @param ubyteArr The array to be filled with the provided value.
 * @param fromIndex The initial index of the range to be filled, inclusive.
 * @param toIndex The final index of the range to be filled, exclusive.
 * @param value The value to be stored in all elements of the array within the specified range.
*/
[[maybe_unused]] auto Arrays::fill(uint8_t ubyteArr[], size_t fromIndex, size_t toIndex, uint8_t value) -> void
{
    Arrays::fillArray(ubyteArr, fromIndex, toIndex, value);
}

/**
 * @brief Fills the specified range of the provided long double array with the given value.
 *
 * @param longDoubleArr The array to be filled with the provided value.
 * @param fromIndex The initial index of the range to be filled, inclusive.
 * @param toIndex The final index of the range to be filled, exclusive.
 * @param value The value to be stored in all elements of the array within the specified range.
*/
[[maybe_unused]] auto Arrays::fill(long double longDoubleArr[], size_t fromIndex, size_t toIndex, long double value) -> void
{
    Arrays::fillArray(longDoubleArr, fromIndex, toIndex, value);
}

/**
 * @brief Fills the specified range of the provided long long array with the given value.
 *
 * @param longLongArr The array to be filled with the provided value.
 * @param fromIndex The initial index of the range to be filled, inclusive.
 * @param toIndex The final index of the range to be filled, exclusive.
 * @param value The value to be stored in all elements of the array within the specified range.
*/
[[maybe_unused]] auto Arrays::fill(long long longLongArr[], size_t fromIndex, size_t toIndex, long long value) -> void
{
    Arrays::fillArray(longLongArr, fromIndex, toIndex, value);
}

/**
 * @brief Fills the specified range of the provided uint64_t array with the given value.
 *
 * @param ubyteArr The array to be filled with the provided value.
 * @param fromIndex The initial index of the range to be filled, inclusive.
 * @param toIndex The final index of the range to be filled, exclusive.
 * @param value The value to be stored in all elements of the array within the specified range.
*/
[[maybe_unused]] auto Arrays::fill(uint64_t ubyteArr[], size_t fromIndex, size_t toIndex, uint64_t value) -> void
{
    Arrays::fillArray(ubyteArr, fromIndex, toIndex, value);
}

/**
 * @brief Fills the specified range of the provided bool array with the given value.
 *
 * @param boolArr The array to be filled with the provided value.
 * @param fromIndex The initial index of the range to be filled, inclusive.
 * @param toIndex The final index of the range to be filled, exclusive.
 * @param value The value to be stored in all elements of the array within the specified range.
*/
[[maybe_unused]] auto Arrays::fill(bool *boolArr, size_t fromIndex, size_t toIndex, bool value) -> void
{
    Arrays::fillArray(boolArr, fromIndex, toIndex, value);
}

/**
 * @brief Fills the specified range of the provided Generic vector with the given value.
 *
 * @param objects The vector to be filled with the provided value.
 * @param fromIndex The initial index of the range to be filled, inclusive.
 * @param toIndex The final index of the range to be filled, exclusive.
 * @param value The value to be stored in all elements of the vector within the specified range.
*/
template<typename T>
auto Arrays::fill(std::vector<T> &objects, size_t fromIndex, size_t toIndex, T &value) -> void
{
    std::fill(objects.begin(), objects.end(), value);
}

/**
 * @brief Fills the given vector with the specified value.
 * @tparam T The type of elements in the vector.
 * @param objects The vector to be filled.
 * @param value The value to be set in all positions of the vector.
*/
template<typename T>
auto Arrays::fill(std::vector<T> &objects, T &value) -> void
{
    for (size_t index = 0; index < objects.size(); index++)
    {
        objects[index] = value;
    }
}

/**
 * @brief Returns a hash code based on the contents of the specified integer array.
 *
 * This function computes the hash value of an array of integers using the Arrays::hashCodeGenerator function.
 * It is designed to generate a unique (or nearly unique) hash value for each distinct input.
 * The value returned by this method can be used, for example, in hash tables.
 *
 * @param intArr The integer array whose hash value to compute.
 * @param size The number of elements in the array.
 * @return A content-based hash code for the integer array.
*/
[[maybe_unused]] auto Arrays::hashCode(int *intArr, size_t size) -> int
{
    return Arrays::hashCodeGenerator(intArr, size);
}

/**
 * @brief Returns a hash code based on the contents of the specified integer array.
 *
 * This function computes the hash value of an array of floats using the Arrays::hashCodeGenerator function.
 * It is designed to generate a unique (or nearly unique) hash value for each distinct input.
 * The value returned by this method can be used, for example, in hash tables.
 *
 * @param floatArr The float array whose hash value to compute.
 * @param size The number of elements in the array.
 * @return A content-based hash code for the integer array.
*/
[[maybe_unused]] auto Arrays::hashCode(float *floatArr, size_t size) -> int
{
    return Arrays::hashCodeGenerator(floatArr, size);
}

/**
 * @brief Returns a hash code based on the contents of the specified integer array.
 *
 * This function computes the hash value of an array of doubles using the Arrays::hashCodeGenerator function.
 * It is designed to generate a unique (or nearly unique) hash value for each distinct input.
 * The value returned by this method can be used, for example, in hash tables.
 *
 * @param doubleArr The double array whose hash value to compute.
 * @param size The number of elements in the array.
 * @return A content-based hash code for the integer array.
*/
[[maybe_unused]] auto Arrays::hashCode(double *doubleArr, size_t size) -> int
{
    return Arrays::hashCodeGenerator(doubleArr, size);
}

/**
 * @brief Returns a hash code based on the contents of the specified integer array.
 *
 * This function computes the hash value of an array of chars using the Arrays::hashCodeGenerator function.
 * It is designed to generate a unique (or nearly unique) hash value for each distinct input.
 * The value returned by this method can be used, for example, in hash tables.
 *
 * @param charArr The char array whose hash value to compute.
 * @param size The number of elements in the array.
 * @return A content-based hash code for the integer array.
*/
[[maybe_unused]] auto Arrays::hashCode(char *charArr, size_t size) -> int
{
    return Arrays::hashCodeGenerator(charArr, size);
}

/**
 * @brief Returns a hash code based on the contents of the specified integer array.
 *
 * This function computes the hash value of an array of shorts using the Arrays::hashCodeGenerator function.
 * It is designed to generate a unique (or nearly unique) hash value for each distinct input.
 * The value returned by this method can be used, for example, in hash tables.
 *
 * @param shortArr The short array whose hash value to compute.
 * @param size The number of elements in the array.
 * @return A content-based hash code for the integer array.
*/
[[maybe_unused]] auto Arrays::hashCode(short *shortArr, size_t size) -> int
{
    return Arrays::hashCodeGenerator(shortArr, size);
}

/**
 * @brief Returns a hash code based on the contents of the specified integer array.
 *
 * This function computes the hash value of an array of longs using the Arrays::hashCodeGenerator function.
 * It is designed to generate a unique (or nearly unique) hash value for each distinct input.
 * The value returned by this method can be used, for example, in hash tables.
 *
 * @param longArr The char array whose hash value to compute.
 * @param size The number of elements in the array.
 * @return A content-based hash code for the integer array.
*/
[[maybe_unused]] auto Arrays::hashCode(long *longArr, size_t size) -> int
{
    return Arrays::hashCodeGenerator(longArr, size);
}

/**
 * @brief Returns a hash code based on the contents of the specified integer array.
 *
 * This function computes the hash value of an array of long long int using the Arrays::hashCodeGenerator function.
 * It is designed to generate a unique (or nearly unique) hash value for each distinct input.
 * The value returned by this method can be used, for example, in hash tables.
 *
 * @param longLongArr The char array whose hash value to compute.
 * @param size The number of elements in the array.
 * @return A content-based hash code for the integer array.
*/
[[maybe_unused]] auto Arrays::hashCode(long long *longLongArr, size_t size) -> int
{
    return Arrays::hashCodeGenerator(longLongArr, size);
}

/**
 * @brief Returns a hash code based on the contents of the specified integer array.
 *
 * This function computes the hash value of an array of long doubles using the Arrays::hashCodeGenerator function.
 * It is designed to generate a unique (or nearly unique) hash value for each distinct input.
 * The value returned by this method can be used, for example, in hash tables.
 *
 * @param longDoubleArr The long double array whose hash value to compute.
 * @param size The number of elements in the array.
 * @return A content-based hash code for the integer array.
*/
[[maybe_unused]] auto Arrays::hashCode(long double *longDoubleArr, size_t size) -> int
{
    return Arrays::hashCodeGenerator(longDoubleArr, size);
}

/**
 * @brief Returns a hash code based on the contents of the specified int8_t array.
 *
 * This function computes the hash value of an array of integers using the Arrays::hashCodeGenerator function.
 * It is designed to generate a unique (or nearly unique) hash value for each distinct input.
 * The value returned by this method can be used, for example, in hash tables.
 *
 * @param byteArr The int8_t array whose hash value to compute.
 * @param size The number of elements in the array.
 * @return A content-based hash code for the integer array.
*/
[[maybe_unused]] auto Arrays::hashCode(int8_t *byteArr, size_t size) -> int
{
    return Arrays::hashCodeGenerator(byteArr, size);
}

/**
 * @brief Returns a hash code based on the contents of the specified uint8_t array.
 *
 * This function computes the hash value of an array of integers using the Arrays::hashCodeGenerator function.
 * It is designed to generate a unique (or nearly unique) hash value for each distinct input.
 * The value returned by this method can be used, for example, in hash tables.
 *
 * @param ubyteArr The ubyte array whose hash value to compute.
 * @param size The number of elements in the array.
 * @return A content-based hash code for the integer array.
*/
[[maybe_unused]] auto Arrays::hashCode(uint8_t *ubyteArr, size_t size) -> int
{
    return Arrays::hashCodeGenerator(ubyteArr, size);
}

/**
 * @brief Returns a hash code based on the contents of the specified uint64_t array.
 *
 * This function computes the hash value of an array of integers using the Arrays::hashCodeGenerator function.
 * It is designed to generate a unique (or nearly unique) hash value for each distinct input.
 * The value returned by this method can be used, for example, in hash tables.
 *
 * @param ubyteArr The char array whose hash value to compute.
 * @param size The number of elements in the array.
 * @return A content-based hash code for the integer array.
*/
[[maybe_unused]] auto Arrays::hashCode(uint64_t *ubyteArr, size_t size) -> int
{
    return Arrays::hashCodeGenerator(ubyteArr, size);
}

/**
 * @brief Returns a hash code based on the contents of the specified bool array.
 *
 * This function computes the hash value of an array of bool using the Arrays::hashCodeGenerator function.
 * It is designed to generate a unique (or nearly unique) hash value for each distinct input.
 * The value returned by this method can be used, for example, in hash tables.
 *
 * @param boolArr The bool array whose hash value to compute.
 * @param size The number of elements in the array.
 * @return A content-based hash code for the integer array.
*/
[[maybe_unused]] auto Arrays::hashCode(bool *boolArr, size_t size) -> int
{
    return Arrays::hashCodeGenerator(boolArr, size);
}

/**
 * @brief Returns a hash code based on the contents of the specified Generic vector.
 *
 * This function computes the hash value of an array of integers using the Arrays::hashCodeGenerator function.
 * It is designed to generate a unique (or nearly unique) hash value for each distinct input.
 * The value returned by this method can be used, for example, in hash tables.
 *
 * @param objects The generic vector whose hash value to compute.
 * @param size The number of elements in the array.
 * @return A content-based hash code for the integer array.
*/
template<typename T>
auto Arrays::hashCode(std::vector<T> &objects) -> int
{
    T arr[objects.size()];
    size_t size = objects.size();

    if (!size)
        throw std::invalid_argument("size of array is not valid");

    for (size_t index = 0; index < size; index++)
        arr[index] = objects[index];

    return Arrays::hashCodeGenerator(arr, size);

}

/**
 * @brief Checks if two given arrays of integers are equal.
 *
 * This function uses Arrays::equality() to determine if the two input arrays are equal.
 * Two arrays are considered equal if they contain the same elements in the same order.
 * This method also treats two null arrays as equal.
 *
 * @param intArr1 The first array to be tested for equality.
 * @param intArr2 The second array to be tested for equality.
 * @param size The number of elements in the arrays.
 * @return Returns true if the two arrays are equal, false otherwise.
*/
auto Arrays::equal(int intArr1[], int intArr2[], size_t size) -> bool
{
    return Arrays::equality(intArr1, intArr2, size);
}

/**
 * @brief Checks if two given arrays of float are equal.
 *
 * This function uses Arrays::equality() to determine if the two input arrays are equal.
 * Two arrays are considered equal if they contain the same elements in the same order.
 * This method also treats two null arrays as equal.
 *
 * @param floatArr1 The first array to be tested for equality.
 * @param floatArr2 The second array to be tested for equality.
 * @param size The number of elements in the arrays.
 * @return Returns true if the two arrays are equal, false otherwise.
*/
auto Arrays::equal(float floatArr1[], float floatArr2[], size_t size) -> bool
{
    return Arrays::equality(floatArr1, floatArr2, size);
}

/**
 * @brief Checks if two given arrays of double are equal.
 *
 * This function uses Arrays::equality() to determine if the two input arrays are equal.
 * Two arrays are considered equal if they contain the same elements in the same order.
 * This method also treats two null arrays as equal.
 *
 * @param doubleArr1 The first array to be tested for equality.
 * @param doubleArr2 The second array to be tested for equality.
 * @param size The number of elements in the arrays.
 * @return Returns true if the two arrays are equal, false otherwise.
*/
auto Arrays::equal(double doubleArr1[], double doubleArr2[], size_t size) -> bool
{
    return Arrays::equality(doubleArr1, doubleArr2, size);
}

/**
 * @brief Checks if two given arrays of char are equal.
 *
 * This function uses Arrays::equality() to determine if the two input arrays are equal.
 * Two arrays are considered equal if they contain the same elements in the same order.
 * This method also treats two null arrays as equal.
 *
 * @param charArr1 The first array to be tested for equality.
 * @param charArr2 The second array to be tested for equality.
 * @param size The number of elements in the arrays.
 * @return Returns true if the two arrays are equal, false otherwise.
*/
auto Arrays::equal(char charArr1[], char charArr2[], size_t size) -> bool
{
    return Arrays::equality(charArr1, charArr2, size);
}

/**
 * @brief Checks if two given arrays of short are equal.
 *
 * This function uses Arrays::equality() to determine if the two input arrays are equal.
 * Two arrays are considered equal if they contain the same elements in the same order.
 * This method also treats two null arrays as equal.
 *
 * @param shortArr1 The first array to be tested for equality.
 * @param shortArr2 The second array to be tested for equality.
 * @param size The number of elements in the arrays.
 * @return Returns true if the two arrays are equal, false otherwise.
*/
auto Arrays::equal(short shortArr1[], short shortArr2[], size_t size) -> bool
{
    return Arrays::equality(shortArr1, shortArr2, size);
}

/**
 * @brief Checks if two given arrays of bool are equal.
 *
 * This function uses Arrays::equality() to determine if the two input arrays are equal.
 * Two arrays are considered equal if they contain the same elements in the same order.
 * This method also treats two null arrays as equal.
 *
 * @param boolArr1 The first array to be tested for equality.
 * @param boolArr2 The second array to be tested for equality.
 * @param size The number of elements in the arrays.
 * @return Returns true if the two arrays are equal, false otherwise.
*/
auto Arrays::equal(bool *boolArr1, bool *boolArr2, size_t size) -> bool
{
    return Arrays::equality(boolArr1, boolArr2, size);
}

/**
 * @brief Checks if two given arrays of long are equal.
 *
 * This function uses Arrays::equality() to determine if the two input arrays are equal.
 * Two arrays are considered equal if they contain the same elements in the same order.
 * This method also treats two null arrays as equal.
 *
 * @param longArr1 The first array to be tested for equality.
 * @param longArr2 The second array to be tested for equality.
 * @param size The number of elements in the arrays.
 * @return Returns true if the two arrays are equal, false otherwise.
*/
auto Arrays::equal(long *longArr1, long *longArr2, size_t size) -> bool
{
    return Arrays::equality(longArr1, longArr2, size);
}

/**
 * @brief Checks if two given arrays of long long are equal.
 *
 * This function uses Arrays::equality() to determine if the two input arrays are equal.
 * Two arrays are considered equal if they contain the same elements in the same order.
 * This method also treats two null arrays as equal.
 *
 * @param longLongArr1 The first array to be tested for equality.
 * @param longLongArr2 The second array to be tested for equality.
 * @param size The number of elements in the arrays.
 * @return Returns true if the two arrays are equal, false otherwise.
*/
auto Arrays::equal(long long *longLongArr1, long long *longLongArr2, size_t size) -> bool
{
    return Arrays::equality(longLongArr1, longLongArr2, size);
}

/**
 * @brief Checks if two given arrays of int8_t are equal.
 *
 * This function uses Arrays::equality() to determine if the two input arrays are equal.
 * Two arrays are considered equal if they contain the same elements in the same order.
 * This method also treats two null arrays as equal.
 *
 * @param byteArr1 The first array to be tested for equality.
 * @param byteArr2 The second array to be tested for equality.
 * @param size The number of elements in the arrays.
 * @return Returns true if the two arrays are equal, false otherwise.
*/
auto Arrays::equal(int8_t *byteArr1, int8_t *byteArr2, size_t size) -> bool
{
    return Arrays::equality(byteArr1, byteArr2, size);
}

/**
 * @brief Checks if two given arrays of uint8_t are equal.
 *
 * This function uses Arrays::equality() to determine if the two input arrays are equal.
 * Two arrays are considered equal if they contain the same elements in the same order.
 * This method also treats two null arrays as equal.
 *
 * @param ubyteArr1 The first array to be tested for equality.
 * @param ubyteArr2 The second array to be tested for equality.
 * @param size The number of elements in the arrays.
 * @return Returns true if the two arrays are equal, false otherwise.
*/
auto Arrays::equal(uint8_t *ubyteArr1, uint8_t *ubyteArr2, size_t size) -> bool
{
    return Arrays::equality(ubyteArr1, ubyteArr2, size);
}

/**
 * @brief Checks if two given arrays of long double are equal.
 *
 * This function uses Arrays::equality() to determine if the two input arrays are equal.
 * Two arrays are considered equal if they contain the same elements in the same order.
 * This method also treats two null arrays as equal.
 *
 * @param longDoubleArr1 The first array to be tested for equality.
 * @param longDoubleArr2 The second array to be tested for equality.
 * @param size The number of elements in the arrays.
 * @return Returns true if the two arrays are equal, false otherwise.
*/
auto Arrays::equal(long double *longDoubleArr1, long double *longDoubleArr2, size_t size) -> bool
{
    return Arrays::equality(longDoubleArr1, longDoubleArr2, size);
}

/**
 * @brief Checks if two given arrays of uint64 are equal.
 *
 * This function uses Arrays::equality() to determine if the two input arrays are equal.
 * Two arrays are considered equal if they contain the same elements in the same order.
 * This method also treats two null arrays as equal.
 *
 * @param uint64Arr1 The first array to be tested for equality.
 * @param uint64Arr2 The second array to be tested for equality.
 * @param size The number of elements in the arrays.
 * @return Returns true if the two arrays are equal, false otherwise.
*/
auto Arrays::equal(uint64_t *ubyteArr1, uint64_t *ubyteArr2, size_t size) -> bool
{
    return Arrays::equality(ubyteArr1, ubyteArr2, size);
}

/**
 * @brief Checks if two given arrays of generic vector are equal.
 *
 * This function uses Arrays::equality() to determine if the two input arrays are equal.
 * Two arrays are considered equal if they contain the same elements in the same order.
 * This method also treats two null arrays as equal.
 *
 * @param objects1 The first array to be tested for equality.
 * @param objects2 The second array to be tested for equality.
 * @return Returns true if the two arrays are equal, false otherwise.
*/
template<typename T>
auto Arrays::equal(std::vector<T> &objects1, std::vector<T> &objects2) -> bool
{
    T arr1[objects1.size()];
    T arr2[objects2.size()];

    for (size_t index = 0; index < objects1.size(); index++)
    {
        arr1[index] = objects1[index];
        arr2[index] = objects2[index];
    }

    return Arrays::equality(arr1, arr2, objects1.size());
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

/**
 * @brief Fills the given array with the specified value.
 * @tparam T The type of elements in the array.
 * @param array The array to be filled.
 * @param value The value to be set in all positions of the array.
 * @param size The size of the array.
*/
template<typename T>
auto Arrays::fillArray(T *array, T &value, size_t size) -> void
{
    for (size_t index = 0; index < size; index++)
        array[index] = value;
}

/**
 * @brief Fills the specified range of the provided array with the given value.
 *
 * The range to be filled extends from index `fromIndex`, inclusive, to index `toIndex`, exclusive.
 * (If `fromIndex` and `toIndex` are equal, the range to be filled is empty.)
 *
 * @tparam T The type of the array elements.
 * @param array The array to be filled with the provided value.
 * @param fromIndex The initial index of the range to be filled, inclusive.
 * @param toIndex The final index of the range to be filled, exclusive.
 * @param value The value to be stored in all elements of the array within the specified range.
 *
 * @throws std::invalid_argument If `array` is null, or if `fromIndex` is greater than `toIndex`.
 */
template<typename T>
auto Arrays::fillArray(T *array, int fromIndex, int toIndex, T &value) -> void
{
    if (array == nullptr) {
        throw std::invalid_argument("The provided array is null.");
    }
    if (fromIndex > toIndex) {
        throw std::invalid_argument("fromIndex is greater than toIndex.");
    }

    for (int i = fromIndex; i < toIndex; i++) {
        array[i] = value;
    }
}

/**
 * @brief Returns a hash code based on the contents of the specified array.
 *
 * The value returned by this method is computed by invoking std::hash on each element in the array
 * and combining the result into a single hash value.
 *
 * @tparam T The type of the array elements.
 * @param array The array whose hash value to compute.
 * @param size The number of elements in the array.
 * @return A content-based hash code for the array.
 * @throws std::invalid_argument If the size of the array is not valid.
 *
*/
template<typename T>
auto Arrays::hashCodeGenerator(T *array, size_t size) -> int
{
    std::hash<T> hasher;
    int h = 0;

    if (!size)
        throw std::invalid_argument("size of array is not valid");

    for (size_t i = 0; i < size; ++i)
        h = h ^ (hasher(array[i]) + 0x9e3779b9 + (h << 6) + (h >> 2));

    return h;
}

/**
 * @brief Checks if two given arrays are equal.
 *
 * This is a template function that checks for the equality of two arrays.
 * Two arrays are considered equal if they contain the same elements in the same order.
 * Also, two array references are considered equal if both are null.
 *
 * @param arr1 The first array to be tested for equality.
 * @param arr2 The second array to be tested for equality.
 * @param size The number of elements in the arrays.
 * @return Returns true if the two arrays are equal, false otherwise.
 * @throws std::invalid_argument if one or both of the arrays are null.
*/
template<typename T>
auto Arrays::equality(T *arr1, T *arr2, size_t size) -> bool
{
    if (arr1 == nullptr || arr2 == nullptr)
        throw std::invalid_argument("One or both of the arrays are null.");

    return std::equal(arr1, arr1 + size, arr2);
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

template auto Arrays::fill(std::vector<int>& objects, size_t fromIndex, size_t toIndex, int& value) -> void;
template auto Arrays::fill(std::vector<double>& objects, size_t fromIndex, size_t toIndex, double& value) -> void;
template auto Arrays::fill(std::vector<float>& objects, size_t fromIndex, size_t toIndex, float& value) -> void;
template auto Arrays::fill(std::vector<char>& objects, size_t fromIndex, size_t toIndex, char& value) -> void;
template auto Arrays::fill(std::vector<short>& objects, size_t fromIndex, size_t toIndex, short& value) -> void;
template auto Arrays::fill(std::vector<long>& objects, size_t fromIndex, size_t toIndex, long& value) -> void;
template auto Arrays::fill(std::vector<long double>& objects, size_t fromIndex, size_t toIndex, long double& value) -> void;
template auto Arrays::fill(std::vector<long long>& objects, size_t fromIndex, size_t toIndex, long long& value) -> void;
template auto Arrays::fill(std::vector<int8_t>& objects, size_t fromIndex, size_t toIndex, int8_t & value) -> void;
template auto Arrays::fill(std::vector<uint8_t>& objects, size_t fromIndex, size_t toIndex, uint8_t & value) -> void;
template auto Arrays::fill(std::vector<uint64_t>& objects, size_t fromIndex, size_t toIndex, uint64_t & value) -> void;

template auto Arrays::hashCode(std::vector<int>& objects) -> int;
template auto Arrays::hashCode(std::vector<double> &objects) -> int;
template auto Arrays::hashCode(std::vector<float> &objects) -> int;
template auto Arrays::hashCode(std::vector<char> &objects) -> int;
template auto Arrays::hashCode(std::vector<short> &objects) -> int;
template auto Arrays::hashCode(std::vector<long> &objects) -> int;
template auto Arrays::hashCode(std::vector<long double> &objects) -> int;
template auto Arrays::hashCode(std::vector<long long> &objects) -> int;
template auto Arrays::hashCode(std::vector<int8_t> &objects) -> int;
template auto Arrays::hashCode(std::vector<uint8_t> &objects) -> int;
template auto Arrays::hashCode(std::vector<uint64_t> &objects) -> int;

template auto Arrays::equal(std::vector<int>& objects1, std::vector<int>& objects2) -> bool;
template auto Arrays::equal(std::vector<float>& objects1, std::vector<float>& objects2) -> bool;
template auto Arrays::equal(std::vector<double>& objects1, std::vector<double>& objects2) -> bool;
template auto Arrays::equal(std::vector<bool>& objects1, std::vector<bool>& objects2) -> bool;
template auto Arrays::equal(std::vector<int8_t>& objects1, std::vector<int8_t>& objects2) -> bool;
template auto Arrays::equal(std::vector<long long>& objects1, std::vector<long long>& objects2) -> bool;
template auto Arrays::equal(std::vector<long double>& objects1, std::vector<long double>& objects2) -> bool;
template auto Arrays::equal(std::vector<char>& objects1, std::vector<char>& objects2) -> bool;
template auto Arrays::equal(std::vector<uint8_t>& objects1, std::vector<uint8_t>& objects2) -> bool;
template auto Arrays::equal(std::vector<short>& objects1, std::vector<short>& objects2) -> bool;
template auto Arrays::equal(std::vector<uint64_t>& objects1, std::vector<uint64_t>& objects2) -> bool;