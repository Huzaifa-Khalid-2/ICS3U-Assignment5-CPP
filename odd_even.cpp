// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Huaifa Khalid
// Created on: April 2022
// This program uses a for loop
//   with user input

#include <iostream>

int main() {
    // this function uses for loop
    int numberAsInteger;
    std::string number;
    int numTwoAsInteger;
    std::string numTwo;
    int odd = 0;
    int even = 0;

    // input
    std::cout << "How many numbers do you want to add: ";
    std::cin >> number;
    std::cout << "" << std::endl;

    // process and output
    try {
        numberAsInteger = std::stoi(number);
        for (int counter = 0; counter < numberAsInteger; counter ++) {
            std::cout << "Enter your number: ";
            std::cin >> numTwo;
            numTwoAsInteger = std::stoi(numTwo);
            if (numTwoAsInteger % 2 == 0) {
                even = even + numTwoAsInteger;
            } else {
                odd = odd + numTwoAsInteger;
            }
        }
        std::cout << "\nThe sum of all even numbers is = "
                    << even << "." << std::endl;
        std::cout << "The sum of all odd numbers is = "
                    << odd << "." << std::endl;
    }
    catch (std::invalid_argument) {
        std::cout << "\nInvalid input you plonker." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
