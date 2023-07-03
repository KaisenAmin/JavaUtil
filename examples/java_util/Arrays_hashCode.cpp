//
// Created by Amin Tahmasebi on 7/3/2023.
//


#include "../../include/java_util/Arrays.h"

template<typename T>
void printArray(T *array, size_t fromIndex, size_t toIndex)
{
    for (size_t i = fromIndex; i < toIndex; i++)
        std::cout << array[i] << " ";

    std::cout << std::endl;
}

template<typename T>
void printVector(std::vector<T> &vec, size_t fromIndex, size_t toIndex)
{
    for (const auto &item : vec)
        std::cout << item << " ";

    std::cout << std::endl;
}

int main()
{
    int intArr[10];
    Arrays::fill(intArr, 0, 10, 1);
    std::cout << "int hash " << Arrays::hashCode(intArr, 10) << '\n';


    double doubleArr[10];
    Arrays::fill(doubleArr, 0, 10, 2.0);
    std::cout << "double hash " << Arrays::hashCode(doubleArr, 10) << '\n';

    float floatArr[10];
    Arrays::fill(floatArr, 0, 10, 3.0f);
    std::cout << "float hash " << Arrays::hashCode(floatArr, 10) << '\n';

    char charArr[10];
    Arrays::fill(charArr, 0, 10, 'a');
    std::cout << "char hash " << Arrays::hashCode(charArr, 10) << '\n';

    short shortArr[10];
    Arrays::fill(shortArr, 0, 10, 4);
    std::cout << "short hash " << Arrays::hashCode(shortArr, 10) << '\n';

    long longArr[10];
    Arrays::fill(longArr, 0, 10, 5L);
    std::cout << "long hash " << Arrays::hashCode(longArr, 10) << '\n';

    int8_t byteArr[10];
    Arrays::fill(byteArr, 0, 10, 95);
    std::cout << "byte hash " << Arrays::hashCode(byteArr, 10) << '\n';

    uint8_t ubyteArr[10];
    Arrays::fill(ubyteArr, 0, 10, 63);
    std::cout << "ubyte hash " << Arrays::hashCode(ubyteArr, 10) << '\n';

    long double longDoubleArr[10];
    Arrays::fill(longDoubleArr, 0, 10, 8.0L);
    std::cout << "int hash " << Arrays::hashCode(intArr, 10) << '\n';

    long long longLongArr[10];
    Arrays::fill(longLongArr, 0, 10, 9LL);
    std::cout << "long long hash " << Arrays::hashCode(longLongArr, 10) << '\n';

    uint64_t uint64Arr[10];
    Arrays::fill(uint64Arr, 0, 10, 10ULL);
    std::cout << "ubyte64 hash " << Arrays::hashCode(uint64Arr, 10) << '\n';

    std::vector<int> intVec(10);
    int intValue = 3;
    Arrays::fill(intVec, 0, 10, intValue);
    std::cout << "Vector int hash " << Arrays::hashCode(intVec) << '\n';

    std::vector<double> doubleVec(10);
    double doubleValue = 4.0;
    Arrays::fill(doubleVec, 0, 10, doubleValue);
    std::cout << "Vector double hash " << Arrays::hashCode(doubleVec) << '\n';

    std::vector<float> floatVec(10);
    float floatValue = 5.0f;
    Arrays::fill(floatVec, 0, 10, floatValue);
    std::cout << "Vector float hash " << Arrays::hashCode(floatVec) << '\n';

    std::vector<char> charVec(10);
    char charValue = 'b';
    Arrays::fill(charVec, 0, 10, charValue);
    std::cout << "Vector char hash " << Arrays::hashCode(charVec) << '\n';

    std::vector<short> shortVec(10);
    short shortValue = 6;
    Arrays::fill(shortVec, 0, 10, shortValue);
    std::cout << "Vector short hash " << Arrays::hashCode(shortVec) << '\n';

    std::vector<long> longVec(10);
    long longValue = 7L;
    Arrays::fill(longVec, 0, 10, longValue);
    std::cout << "Vector long hash " << Arrays::hashCode(longVec) << '\n';

    std::vector<int8_t> int8Vec(10);
    int8_t int8Value = 80;
    Arrays::fill(int8Vec, 0, 10, int8Value);
    std::cout << "Vector byte hash " << Arrays::hashCode(int8Vec) << '\n';

    std::vector<uint8_t> uint8Vec(10);
    uint8_t uint8Value = 90;
    Arrays::fill(uint8Vec, 0, 10, uint8Value);
    std::cout << "Vector ubyte hash " << Arrays::hashCode(uint8Vec) << '\n';

    std::vector<long double> longDoubleVec(10);
    long double longDoubleValue = 10.0L;
    Arrays::fill(longDoubleVec, 0, 10, longDoubleValue);
    std::cout << "Vector long double hash " << Arrays::hashCode(longDoubleVec) << '\n';

    std::vector<long long> longLongVec(10);
    long long longLongValue = 11LL;
    Arrays::fill(longLongVec, 0, 10, longLongValue);
    std::cout << "long long hash " << Arrays::hashCode(longLongVec) << '\n';

    std::vector<uint64_t> uint64Vec(10);
    uint64_t uint64Value = 12ULL;
    Arrays::fill(uint64Vec, 0, 10, uint64Value);
    std::cout << "uint64 hash " << Arrays::hashCode(uint8Vec) << '\n';

    std::cin.get();
    return 0;
}





