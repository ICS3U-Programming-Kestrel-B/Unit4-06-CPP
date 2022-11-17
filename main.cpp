// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by: KestrelBryce
// Created on: Nov 16, 2022
// This program prints all possible
// RGB codes

#include <iostream>
#include <cmath>
#include <string>

int main() {
    // Declaring variables
    int red = 0;
    int green = 0;
    int blue = 0;
    std::string start;



    // Introductory paragraph
    std::cout << "This program prints all possible\n";
    std::cout << "RGB codes\n";
    std::cout << "\n";

    // Input
    // Getting start
    std::cout << "Enter Y to start program: ";
    std::cin >> start;

    // Starting loop
    while (start == "Y") {
        // Blue statement
        if (blue < 255) {
            // Printing colours
            printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)" , red, green, blue);
            std::cout << red << " " << green << " " << blue << '\n';
            // Incrementing counter
            blue = blue + 1;
        } else if (green < 255) {
            if (blue == 255) {
                // Updating counters
                blue = 0;
                green = green + 1;
            }
            // Printing colours
            printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)" , red, green, blue);
            std::cout << red << " " << green << " " << blue << '\n';
        } else if (red < 255) {
            if (green == 255) {
                // Updating counters
                green = 0;
                red = red + 1;
            }
            // Printing colours
            printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)" , red, green, blue);
            std::cout << red << " " << green << " " << blue << '\n';
        } else {
            // Printing colours
            printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)" , red, green, blue);
            std::cout << red << " " << green << " " << blue << '\n';
            // Ending remark
            std::cout << "This is the end.";
            // Break statement
            break;
        }
    }
}
