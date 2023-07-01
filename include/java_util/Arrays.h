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

    template<typename T>
    static auto binarySearchIndex(T* array, size_t fromIndex, size_t toIndex, T& key) -> int;

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
};

#endif //JAVAUTIL_ARRAYS_H
