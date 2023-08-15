#include <Array.hpp>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     //     try
//     //     {
//     //         for (int i = 0; i < MAX_VAL + 1; i++)
//     //             std::cout << "tmp[" << i << "]:\t" << tmp[i] << std::endl;
//     //     }
//     //     catch(const std::exception& e)
//     //     {
//     //         std::cerr << e.what() << '\t';
//     //         std::cerr << "You tried to access past the last element of the array" << std::endl;
//     //     }
//     //     tmp = numbers;
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

int main() {
    try {
        Array<int> intArray(5); // Create an array of 5 integers
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            intArray[i] = i * 2;
        }

        std::cout << "Size of intArray: " << intArray.size() << std::endl;
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
        }

        // Testing out of bounds access
        std::cout << "Trying to access intArray[10]..." << std::endl;
        std::cout << intArray[10] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}