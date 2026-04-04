#include <iostream>

/*
 * What do we have in common?
Given two input arrays of int with a size of 10 (each element shows up only once in the array), for example,

  int data1[] {1,2,4,5,9,3,6,7,44,55};
  int data2[] {11,2,44,45,49,43,46,47,55,88};
Your job is to write code that identifies common elements in these two collections and prints a message like

There are 3 common elements they are : 2 44 55 with a single space after the last common element. (The single space is
crucial for your code to pass our tests).

If there are no common elements between the arrays, for example our input arrays contain the data below

  int data1[] {1,2000,4,5,9,3,6,7,4400,5500};
  int data2[] {11,2,44,45,49,43,46,47,55,88};
your code will then print a message :

There are 0 common elements . This time there's no space after elements in the message. Please note that the assumed
size for the arrays is 10.

You will write your code within the comments

  //Don't modify anything above this line
  //Your code will go below this line

  //Your code will go above this line
  //Don't modify anything after this line
in the exercise.cpp file. Within these two comments, you will have access to the two input arrays array_1 and array_2 .
Again, please remember that the input arrays will have a fixed size of 10.

Please give this your best shot. Once you are done, you can click on the check solution button to see if you got this
right. If you are still stuck after REALLY trying, you can check our reference solution by clicking on the solution.txt
file.
*/


void common_elements(int array_1[], int array_2[]) {
    // REMEMBER, The input arrays array_1 and array_2 have a fixed size of 10

    // Don't modify anything above this line
    // Your code will go below this line
    int curr_counter = 0;
    for (size_t i{0}; i < 10; ++i) {
        for (size_t j{0}; j < 10; ++j) {
            if (array_1[i] == array_2[j]) {
                ++curr_counter;
            }
        }
    }


    std::cout << "There are " << curr_counter << " common elements";

    if (curr_counter > 0) {
        std::cout << " they are:";
        for (size_t i{0}; i < 10; ++i) {
            for (size_t j{0}; j < 10; ++j) {
                if (array_1[i] == array_2[j]) {
                    std::cout << " " << array_1[i];
                }
            }
        }
        std::cout << " ";
    }


    // Your code will go above this line
    // Don't modify anything after this line
}
