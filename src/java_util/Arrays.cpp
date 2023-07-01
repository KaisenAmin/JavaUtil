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
 * @brief Performs a binary search on the given integer array to find the specified key.
 * @param intArr The integer array to search.
 * @param key The key to search for.
 * @param size The size of the array.
 * @return The index of the key in the array if found, or -1 if the key is not present.
*/
auto Arrays::binarySearch(int *intArr, int key, int size) -> int
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
auto Arrays::binarySearch(float *floatArr, float key, int size) -> int
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
auto Arrays::binarySearch(long *longArr, long key, int size) -> int
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
auto Arrays::binarySearch(double *doubleArr, double key, int size) -> int
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
auto Arrays::binarySearch(char *charArr, char key, int size) -> int
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
auto Arrays::binarySearch(short *shortArr, short key, int size) -> int
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
auto Arrays::binarySearch(std::string stringArr[], std::string key, int size) -> int
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
[[maybe_unused]] auto Arrays::binarySearch(int8_t *byteArr, int8_t key, int size) -> int
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
[[maybe_unused]] auto Arrays::binarySearch(uint8_t *ubyteArr, uint8_t key, int size) -> int
{
    return Arrays::binarySearchBeginToEnd(ubyteArr, key, size);
}

/**
 * @brief Generates a string representation of a vector array.
 * @param objects - The array to convert.
 * @return A string representation of the array.
*/
template<typename T>
auto Arrays::toString(std::vector<T> &objects) -> std::string
{
    std::unique_ptr<T[]> arr(new T[objects.size()]);

    if (arr)
    {
        int counter = 0;

        for (const auto& value : objects)
            arr[counter++] = value;

        return Arrays::iterateOverArrays(arr.get(), objects.size());
    }
    else
    {
        std::cerr << "Can not allocate memory" << '\n';
        return std::string(nullptr);
    }
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
        {
            return mid;
        }
        else if (array[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1; // key not found
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
