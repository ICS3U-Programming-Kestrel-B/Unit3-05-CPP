// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by: KestrelBryce
// Created on: Oct 13, 2022
// This program asks for an integer
// between 1 and 12 and tells you
// what month the integer is
// related to

#include <iostream>

int main() {
    // Declaring variables
    int monthNum;

    // introduction text
    std::cout << "This program asks for an integer\n";
    std::cout << "between 1 and 12 and tells you\n";
    std::cout << "what month the integer is\n";
    std::cout << "related to\n";
    std::cout << "\n";
    // getting monthNum
    std::cout << "Enter a number (1 - 12): ";
    std::cin >> monthNum;

    // Process
    switch (monthNum) {
        case 1 :
            std::cout << "January is the " << monthNum << "st month\n";
            break;

        case 2 :
            std::cout << "February is the " << monthNum << "nd month\n";
            break;

        case 3 :
            std::cout << "March is the " << monthNum << "rd month\n";
            break;

        case 4 :
            std::cout << "April is the " << monthNum << "th month\n";
            break;

        case 5 :
            std::cout << "May is the " << monthNum << "th month\n";
            break;

        case 6 :
            std::cout << "June is the " << monthNum << "th month\n";
            break;

        case 7 :
            std::cout << "July is the " << monthNum << "th month\n";
            break;

        case 8 :
            std::cout << "August is the " << monthNum << "th month\n";
            break;

        case 9 :
            std::cout << "September is the " << monthNum << "th month\n";
            break;

        case 10 :
            std::cout << "October is the " << monthNum << "th month\n";
            break;

        case 11 :
            std::cout << "November is the " << monthNum << "th month\n";
            break;

        case 12 :
            std::cout << "December is the " << monthNum << "th month\n";
            break;

        // error message
        default :
            std::cout << "Please enter a valid number. "
             << monthNum << " is not valid.\n";
    }
}
