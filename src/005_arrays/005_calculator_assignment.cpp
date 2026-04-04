#include <ctime>
#include <iostream>
#include <string>

int main() {

    std::srand(std::time(0));

    std::cout << "Welcome to the greatest calculator on earth!" << std::endl;

    bool end{false};


    int i, j, x, y, z;

    while (!end) {
        std::string raw_input;
        std::string answer;
        std::cout << "What's the result of ";

        x = std::rand() % 100;
        y = std::rand() % 100;

        std::cout << "" << x;

        i = std::rand() % 3;

        switch (i) {
            case 0:
                z = x * y;
                std::cout << " * " << y;
                break;
            case 1:
                z = x - y;
                std::cout << " - " << y;
                break;
            case 2:
                z = x + y;
                std::cout << " + " << y;
                break;
        }
        std::cout << " : ";
        std::getline(std::cin, raw_input);
        j = std::stoi(raw_input);

        if (j == z) {
            std::cout << "Congratulations! You got the result " << z << " right!\n\n";
        } else {
            std::cout << "Naah! th correct result is : " << z << "\n\n";
        }

        std::cout << "Do you want me to try again ? (Y | N) : ";
        std::getline(std::cin, answer);

        if (answer == "y" || answer == "Y") {
            end = false;
        } else {
            end = true;
        }
    }


    return 0;
}
