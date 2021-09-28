// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: September 2021
// This is the adding program in c++

#include <iostream>

int main() {
    // this function adds all integers from 1 to the entered number

    // this is to keep track of how many times it goes in a loop
    std::string userAsString;
    int whileLoop = 0;
    int total = 0;
    int userInput;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> userAsString;

    // process and output
    try {
        userInput = std::stoi(userAsString);

        while (whileLoop <= userInput) {
            total = total + whileLoop;
            whileLoop = whileLoop + 1;
        } {std::cout << "The sum from the integers 1 to " << userAsString
            << " is " << total << "." << std::fixed << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << userAsString << " is an invalid input." << std::fixed
        << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
