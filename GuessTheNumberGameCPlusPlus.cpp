#include <iostream>
#include <conio.h>

int main()
{
    char userInput = 'y';
    while (userInput != 'x') {
        int diap = 0;
        int answer = 0;
        bool win = false;
        std::cout << "Enter the range for a number (only positive integer number): ";
        std::cin >> diap;
        int number = rand() % diap;
        while (true) {
            int attempts = 0;
            std::cout << "Try to guess the number: ";
            std::cin >> answer;
            attempts += 1;
            if (answer != number) {
                std::cout << "Wrong answer, try again.\n";
            }
            else {
                std::cout << "You won." << std::endl;
                std::cout << "Number of attempts: " << attempts << std::endl;
                break;
            }
        }
        std::cout << "If you want to exit, press 'x' or anything else to continue.";
        userInput = _getch();
    }
}