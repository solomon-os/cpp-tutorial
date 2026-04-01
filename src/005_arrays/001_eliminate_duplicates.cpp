#include <iostream>

void unique_numbers(int numbers[], unsigned int collection_size) {

    // Don't modify anthing above this line
    // Your code should go below this line
    //
    //
    //

    int arrays[100];
    int k = 0;


    for (int i = 0; i < collection_size; ++i) {
        for (int j = 0; j < collection_size; ++j) {
            if (numbers[i] == numbers[j]) {
                if (i != j) {
                    break;
                }
                arrays[k] = numbers[i];
                k++;
            }
        }
    }


    std::cout << "The collection contains " << k << " unique numbers, they are : ";

    for (int i{0}; i < k; ++i) {
        std::cout << "" << arrays[i] << " ";
    }


    // Your code should go above this line
    // Don't modify anything below this line
}

int main() { return 0; }
