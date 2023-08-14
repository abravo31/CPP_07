#include "iter.hpp"

int main() {

    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'A', 'B', 'C', 'D', 'E'};

    std::cout << "Printing intArray elements:" << std::endl;
    iter(intArray, sizeof(intArray) / sizeof(intArray[0]), printElement<int>);
    std::cout << std::endl;

    std::cout << "Printing doubleArray elements:" << std::endl;
    iter(doubleArray, sizeof(doubleArray) / sizeof(doubleArray[0]), printElement<double>);
    std::cout << std::endl;

    std::cout << "Printing charArray elements:" << std::endl;
    iter(charArray, sizeof(charArray) / sizeof(charArray[0]), printElement<char>);
    std::cout << std::endl;

    return 0;
}