#include <iostream>

void hunt_for_vowels(char message[], unsigned int size) {


    unsigned int vowel_count{}; // Initialized to zero

    // Don't modify anything above this line
    // Your code should go below this line

    char vowels[6]{'a', 'e', 'i', 'o', 'u'};

    for (u_int i{0}; i < size; ++i) {
        for (u_int j{0}; j < 6; ++j) {
            if (message[i] == vowels[j]) {
                ++vowel_count;
            }
        }
    }

    // Your code should go above this line
    // Don't modify anything below this line


    std::cout << "The string : " << message << " has " << vowel_count << " vowels";
}

int main() { return 0; }
