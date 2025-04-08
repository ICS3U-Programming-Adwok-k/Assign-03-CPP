// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: April 7th, 2025
// This program asks the user for the quantity of
// items purchased and calculates the cost with tax
// and a 10 % discount if total cost is> $ 1000.

#include <iomanip>
#include <iostream>
#include <string>

int main() {
    std::cout << "Hello and Welcome to Adwok's shop!" << std::endl;
    // The above code is the initial greeting.

    const float HST = 13.0 / 100;
    // The HST is the tax taken when the user gives a certain input

    const float DISCOUNT = 10.0 / 100;
    // The discount is offered when total quantity of items
    // > $1000 before tax.

    std::string quantityAsString;

    // We have to ask the user for the quantity of items needed.
    std::cout << "Please enter the quantity of items: " << std::endl;

    std::cin >> quantityAsString;

    try {
        // We convert the quantity to an integer.
        int quantity = stoi(quantityAsString);

        // find the total cost = quantity * 100.
        int totalCost = quantity * 100;

        // find the tax = HST * totalCost.
        int tax = HST * totalCost;

        // find the discount = discount * totalCost.
        int discount = DISCOUNT * totalCost;

        if (totalCost > 1000) {
            // find the finalPrice = totalCost - discount + tax.
            float finalPrice = totalCost - discount + tax;

            // round the output to 2 decimal values.
            std::cout << std::fixed << std::setprecision(2);

            // Display the final price
            std::cout << "The final price is $" << finalPrice << std::endl;
        }
        if (totalCost < 1000) {
            // find the final price = totalCost + tax.
            float finalPrice = totalCost + tax;

            // round the output to 2 decimal values.
            std::cout << std::fixed << std::setprecision(2);

            // Display the final price.
            std::cout << "The final price is $" << finalPrice << std::endl;
        }
    } catch (std::invalid_argument) {
        // When the user enters an unknown value it is invalid.
        std::cout << "Please enter a valid quantity." << std::endl;
    }
        std::cout << "Thank you and have a great day." << std::endl;
        // Once everything is executed the above code will be displayed.
        std::cout << " " << std::endl;


    return 0;
}
