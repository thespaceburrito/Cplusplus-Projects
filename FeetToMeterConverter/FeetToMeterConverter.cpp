// FeetToMeterConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Author - Jonathan Obi

#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;


int main()
{
    while(true) {
    float m, ft;
    char choice;
    char con;
    std::cout << "Feet and Meters Converter\n\n";
    std::cout << "Conversions Menu:\n" << "a.Feet to Meters\n" << "b.Meters to Feet\n";
    std::cout << "Select a conversion (a/b): ";
    std::cin >> choice;
    std::cout << "\n";

    if (choice == 'a' || choice == 'A') {
        std::cout << "Enter feet: ";
        std::cin >> ft;

        m = floor(ft * 0.3048 * 100)/100;
        std::cout << m << " meters\n\n";
        std::cout << "Continue? (y/n): ";
        std::cin >> con;
        std::cout << "\n";

        if (con == 'n') {
            break;
        }
    }
    else if (choice == 'b' || choice == 'B') {
        std::cout << "Enter meters: ";
        std::cin >> m;

        ft = floor((m / 0.3048) * 100) / 100;
        std::cout << ft << " feet\n\n";
        std::cout << "Continue? (y/n):";
        std::cin >> con;
        std::cout << "\n";

        if (con == 'n') {
            break;
        }
    }
     

    }

}

