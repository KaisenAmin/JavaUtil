//
// Created by Amin Tahmasebi on 6/30/2023.
//

#ifndef JAVAUTIL_ARRAYS_H
#define JAVAUTIL_ARRAYS_H

#include <sstream>
#include <string>
#include <vector>
#include <iostream>
#include <memory>
#include <functional>
#include <numeric>
#include <stdexcept>
#include <cstring>

/**
 * @class Arrays
 * @brief A class that provides static methods for handling arrays similar to Java's Arrays class.
 * @author Amin Tahmasebi
 * @date 6/30/2023
 */
class [[maybe_unused]] Arrays
{
private:
    template <typename T>
    static auto iterateOverArrays(T *array, size_t size) -> std::string;

    template <typename T>
    static auto binarySearchBeginToEnd(T *array, T key, size_t size) -> int;

    template <typename T>
    static auto binarySearchIndex(T* array, size_t fromIndex, size_t toIndex, T& key) -> int;

    template <typename T>
    static auto fillArray(T* array, T& value, size_t size) -> void;

    template<typename T>
    static auto fillArray(T* array, int fromIndex, int toIndex, T& value) -> void;

    template<typename T>
    static auto hashCodeGenerator(T* array, size_t size) -> int;

    template<typename T>
    static auto equality(T* arr1, T* arr2, size_t size) -> bool;

    template<typename T>
    static auto copyArray(T* arr, size_t arrSize, size_t newSize) -> std::unique_ptr<T[]>;

public:
    static auto toString(int intArray[], size_t size) -> std::string;
    static auto toString(float floatArray[], size_t size) -> std::string;
    static auto toString(double doubleArray[], size_t size) -> std::string;
    static auto toString(char charArray[], size_t size) -> std::string;
    [[maybe_unused]] static auto toString(short shortArray[], size_t size) -> std::string;
    static auto toString(bool boolArray[], size_t size) -> std::string;
    static auto toString(long longArray[], size_t size) -> std::string;
    [[maybe_unused]] static auto toString(int8_t byteArray[], size_t size) -> std::string;

    template<typename T>
    static auto toString(std::vector<T>& objects) -> std::string;

    [[maybe_unused]] static auto binarySearch(int intArr[], int& key, int size) -> int;
    [[maybe_unused]] static auto binarySearch(float floatArr[], float& key, int size) -> int;
    [[maybe_unused]] static auto binarySearch(double doubleArr[], double& key, int size) -> int;
    [[maybe_unused]] static auto binarySearch(long longArr[], long& key, int size) -> int;
    [[maybe_unused]] static auto binarySearch(char charArr[], char& key, int size) -> int;
    [[maybe_unused]] static auto binarySearch(short shortArr[], short& key, int size) -> int;
    [[maybe_unused]] static auto binarySearch(std::string stringArr[], std::string &key, int size) -> int;
    [[maybe_unused]] static auto binarySearch(int8_t byteArr[], int8_t& key, int size) -> int;
    [[maybe_unused]] static auto binarySearch(uint8_t ubyteArr[], uint8_t& key, int size) -> int;

    template <typename T>
    static auto binarySearch(std::vector<T>& objects, T& key) -> int;

    [[maybe_unused]] static auto binarySearch(int intArr[], size_t fromIndex, size_t toIndex, int& key) -> int;
    [[maybe_unused]] static auto binarySearch(float floatArr[], size_t fromIndex, size_t toIndex, float& key) -> int;
    [[maybe_unused]] static auto binarySearch(double doubleArr[], size_t fromIndex, size_t toIndex, double& key) -> int;
    [[maybe_unused]] static auto binarySearch(char charArr[], size_t fromIndex, size_t toIndex, char& key) -> int;
    [[maybe_unused]] static auto binarySearch(long longArr[], size_t fromIndex, size_t toIndex, long& key) -> int;
    [[maybe_unused]] static auto binarySearch(short shortArr[], size_t fromIndex, size_t toIndex, short& key) -> int;
    [[maybe_unused]] static auto binarySearch(std::string stringArr[], size_t fromIndex, size_t toIndex, std::string& key) -> int;
    [[maybe_unused]] static auto binarySearch(int8_t byteArr[], size_t fromIndex, size_t toIndex, int8_t & key) -> int;
    [[maybe_unused]] static auto binarySearch(uint8_t ubyteArr[], size_t fromIndex, size_t toIndex, uint8_t & key) -> int;

    template <typename T>
    static auto binarySearch(std::vector<T>& objects, size_t fromIndex, size_t toIndex, T& key) -> int;

    [[maybe_unused]] static auto fill(bool boolArr[], bool& value, size_t size) -> void;
    [[maybe_unused]] static auto fill(int intArr[], int& value, size_t size) -> void;
    [[maybe_unused]] static auto fill(float floatArr[], float& value, size_t size) -> void;
    [[maybe_unused]] static auto fill(double doubleArr[], double& value, size_t size) -> void;
    [[maybe_unused]] static auto fill(char charArr[], char& value, size_t size) -> void;
    [[maybe_unused]] static auto fill(short shortArr[], short& value, size_t size) -> void;
    [[maybe_unused]] static auto fill(long longArr[], long& value, size_t size) -> void;
    [[maybe_unused]] static auto fill(long double longDoubleArr[], long double& value, size_t size) -> void;
    [[maybe_unused]] static auto fill(long long longLongArr[], long long& value, size_t size) -> void;
    [[maybe_unused]] static auto fill(int8_t byteArr[], int8_t& value, size_t size) -> void;
    [[maybe_unused]] static auto fill(uint8_t ubyteArr[], uint8_t & value, size_t size) -> void;
    [[maybe_unused]] static auto fill(uint64_t ubyteArr[], uint64_t& value, size_t size) -> void;

    template <typename T>
    static auto fill(std::vector<T>& objects, T& value) -> void;

    [[maybe_unused]] static auto fill(int intArr[], size_t fromIndex, size_t toIndex, int value) -> void;
    [[maybe_unused]] static auto fill(double doubleArr[], size_t fromIndex, size_t toIndex, double value) -> void;
    [[maybe_unused]] static auto fill(float floatArr[], size_t fromIndex, size_t toIndex, float value) -> void;
    [[maybe_unused]] static auto fill(char charArr[], size_t fromIndex, size_t toIndex, char value) -> void;
    [[maybe_unused]] static auto fill(short shortArr[], size_t fromIndex, size_t toIndex, short value) -> void;
    [[maybe_unused]] static auto fill(long longArr[], size_t fromIndex, size_t toIndex, long value) -> void;
    [[maybe_unused]] static auto fill(int8_t byteArr[], size_t fromIndex, size_t toIndex, int8_t value) -> void;
    [[maybe_unused]] static auto fill(uint8_t ubyteArr[], size_t fromIndex, size_t toIndex, uint8_t value) -> void;
    [[maybe_unused]] static auto fill(long double longDoubleArr[], size_t fromIndex, size_t toIndex, long double value) -> void;
    [[maybe_unused]] static auto fill(long long longLongArr[], size_t fromIndex, size_t toIndex, long long value) -> void;
    [[maybe_unused]] static auto fill(uint64_t ubyteArr[], size_t fromIndex, size_t toIndex, uint64_t value) -> void;
    [[maybe_unused]] static auto fill(bool boolArr[], size_t fromIndex, size_t toIndex, bool value) -> void;

    template <typename T>
    static auto fill(std::vector<T>& objects, size_t fromIndex, size_t toIndex, T& value) -> void;

    [[maybe_unused]] static auto hashCode(int intArr[], size_t size) -> int;
    [[maybe_unused]] static auto hashCode(float floatArr[], size_t size) -> int;
    [[maybe_unused]] static auto hashCode(double doubleArr[], size_t size) -> int;
    [[maybe_unused]] static auto hashCode(char charArr[], size_t size) -> int;
    [[maybe_unused]] static auto hashCode(short shortArr[], size_t size) -> int;
    [[maybe_unused]] static auto hashCode(long longArr[], size_t size) -> int;
    [[maybe_unused]] static auto hashCode(long long longLongArr[], size_t size) -> int;
    [[maybe_unused]] static auto hashCode(long double longDoubleArr[], size_t size) -> int;
    [[maybe_unused]] static auto hashCode(int8_t byteArr[], size_t size) -> int;
    [[maybe_unused]] static auto hashCode(uint8_t ubyteArr[], size_t size) -> int;
    [[maybe_unused]] static auto hashCode(uint64_t ubyteArr[], size_t size) -> int;
    [[maybe_unused]] static auto hashCode(bool boolArr[], size_t size) -> int;

    template <typename T>
    static auto hashCode(std::vector<T>& objects) -> int;

    [[maybe_unused]] static auto equal(int intArr1[], int intArr2[], size_t size) -> bool;
    [[maybe_unused]] static auto equal(float floatArr1[], float floatArr2[], size_t size) -> bool;
    [[maybe_unused]] static auto equal(double doubleArr1[], double doubleArr2[], size_t size) -> bool;
    [[maybe_unused]] static auto equal(char charArr1[], char charArr2[], size_t size) -> bool;
    [[maybe_unused]] static auto equal(short shortArr1[], short shortArr2[], size_t size) -> bool;
    [[maybe_unused]] static auto equal(bool boolArr1[], bool boolArr2[], size_t size) -> bool;
    [[maybe_unused]] static auto equal(long longArr1[], long longArr2[], size_t size) -> bool;
    [[maybe_unused]] static auto equal(long long longLongArr1[], long long longLongArr2[], size_t size) -> bool;
    [[maybe_unused]] static auto equal(int8_t byteArr1[], int8_t byteArr2[], size_t size) -> bool;
    [[maybe_unused]] static auto equal(uint8_t ubyteArr1[], uint8_t ubyteArr2[], size_t size) -> bool;
    [[maybe_unused]] static auto equal(long double longDoubleArr1[], long double longDoubleArr2[], size_t size) -> bool;
    [[maybe_unused]] static auto equal(uint64_t ubyteArr1[], uint64_t ubyteArr2[], size_t size) -> bool;

    template <typename T>
    static auto equal(std::vector<T>& objects1, std::vector<T>& objects2) -> bool;

    [[maybe_unused]] static auto copyOf(int intArr[], size_t arrSize, size_t newSize) -> std::unique_ptr<int[]>;
    [[maybe_unused]] static auto copyOf(float floatArr[], size_t arrSize, size_t newSize) -> std::unique_ptr<float[]>;
    [[maybe_unused]] static auto copyOf(double doubleArr[], size_t arrSize, size_t newSize) -> std::unique_ptr<double[]>;
    [[maybe_unused]] static auto copyOf(char charArr[], size_t arrSize, size_t newSize) -> std::unique_ptr<char[]>;
    [[maybe_unused]] static auto copyOf(short shortArr[], size_t arrSize, size_t newSize) -> std::unique_ptr<short[]>;
    [[maybe_unused]] static auto copyOf(long longArr[], size_t arrSize, size_t newSize) -> std::unique_ptr<long[]>;
    [[maybe_unused]] static auto copyOf(long long longLongArr[], size_t arrSize, size_t newSize) -> std::unique_ptr<long long[]>;
    [[maybe_unused]] static auto copyOf(int8_t byteArr[], size_t arrSize, size_t newSize) -> std::unique_ptr<int8_t[]>;
    [[maybe_unused]] static auto copyOf(uint8_t ubyteArr[], size_t arrSize, size_t newSize) -> std::unique_ptr<uint8_t[]>;
    [[maybe_unused]] static auto copyOf(long double longDoubleArr[], size_t arrSize, size_t newSize) -> std::unique_ptr<long double[]>;
    [[maybe_unused]] static auto copyOf(bool boolArr[], size_t arrSize, size_t newSize) -> std::unique_ptr<bool[]>;
    [[maybe_unused]] static auto copyOf(uint64_t ubyteArr[], size_t arrSize, size_t newSize) -> std::unique_ptr<uint64_t[]>;

    template<typename T>
    static auto copyOf(std::vector<T>& objects, size_t newSize);

};

#endif //JAVAUTIL_ARRAYS_H
