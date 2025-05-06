// Created by: Hiab G
// Date: Wed, May. 3rd
// This program gets all pairs of two-digit numbers whose sum is 60


#include <iostream>

void printing_pairs() {
    // Print all pairs whose sum is 60
    std::cout << "\nAll pairs of two-digit numbers whose sum is 60 :" << std::endl;

    int counter_num1 = 0;  // Counter for outer loop

    // Using for loop for num1
    for (int num1 = 10; num1 < 100; ++num1) {
        counter_num1 += 1;
        int num2 = num1;
        int counter_num2 = 0;  // Counter for inner loop

        // Using while loop for num2
        while (num2 < 61) {
            if (num1 + num2 == 60) {
                std::cout << "(" << num1 << ", " << num2 << ")" << std::endl;
            }
            num2++;
            counter_num2 += 1;
        }
    }
}

int main() {
    // Welcome message
    std::cout << "Welcome! This program will tell you all the pairs of positive two-digit numbers whose sum is 60." << std::endl;

    // Ask user for input and catch errors
    try {
        int user_input;
        std::cout << "Enter a two-digit number: ";
        std::cin >> user_input;  

        // Check if the input is a valid two-digit number between 10–59
        if (user_input >= 10 && user_input <= 59) {
            int pair2 = 60 - user_input;
            if (pair2 >= 10 && pair2 <= 59) {
                std::cout << "The number that adds up to 60 with " << user_input << " is " << pair2 << "." << std::endl;
            } else {
                std::cout << "No valid two-digit number adds up to 60 with " << user_input << std::endl;
            }
        } else {
            std::cout << "Invalid argument: Please enter a two-digit number between 10 and 59." << std::endl;
        }
    } 

    // Call function
    printing_pairs();

    return 0;
}
