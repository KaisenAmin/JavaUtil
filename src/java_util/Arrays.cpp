//
// Created by Science on 6/30/2023.
//

#include "../../include/java_util/Arrays.h"


auto Arrays::toString(int *intArray, size_t size) -> std::string
{
    return Arrays::iterateOverArrays(intArray, size);
}

auto Arrays::toString(float *floatArray, size_t size) -> std::string
{
    return Arrays::iterateOverArrays(floatArray, size);
}

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
