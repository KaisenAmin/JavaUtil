//
// Created by Science on 6/30/2023.
//

#ifndef JAVAUTIL_ARRAYS_H
#define JAVAUTIL_ARRAYS_H

#include <sstream>
#include <string>

class [[maybe_unused]] Arrays
{
private:
    template <typename T>
    static auto iterateOverArrays(T *array, size_t size) -> std::string;
public:
    static auto toString(int intArray[], size_t size) -> std::string;
    static auto toString(float floatArray[], size_t size) -> std::string;
};

#endif //JAVAUTIL_ARRAYS_H
