//
// Created by Amin Tahmasebi on 6/30/2023.
//

#ifndef JAVAUTIL_ARRAYS_H
#define JAVAUTIL_ARRAYS_H

#include <sstream>
#include <string>

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
public:
    static auto toString(int intArray[], size_t size) -> std::string;
    static auto toString(float floatArray[], size_t size) -> std::string;
    static auto toString(double doubleArray[], size_t size) -> std::string;
    static auto toString(char charArray[], size_t size) -> std::string;
    [[maybe_unused]] static auto toString(short shortArray[], size_t size) -> std::string;
    static auto toString(bool boolArray[], size_t size) -> std::string;
    static auto toString(long longArray[], size_t size) -> std::string;
};

#endif //JAVAUTIL_ARRAYS_H
