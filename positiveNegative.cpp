// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 09/20/22
// This is the Positive/ Negative/ 0
// The user enters in a number and the program tells the user what sign it is


#include <iostream>

int main() {
    // this function checks to see what sign the integer is
    int number;

    // input
    std::cout << "Enter in a number to see its sign (integer): ";
    std::cin >> number;
    std::cout << "" << std::endl;

    // process and output
    if (number < 0) {
        std::cout << "-" << std::endl;
    } else if (number > 0) {
       std::cout << "+" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
