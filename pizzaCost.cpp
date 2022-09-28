// Copyright (c) 2022 Spencer Scarlett All rights reserved.
//
// Created by: Spencer Scarlett
// Date: Sept 28, 2022
// A program to calculate pizza costs with taxes

#include <iomanip>

#include <iostream>

int main() {
    // declearing constants
    const float HST = 0.13;
    const float LABOUR = 2.00;
    const float RENTAL = 2.25;
    const float SUPPLYS = 1.5;

    // variables
    float diameter, subtotal, total, taxes;

    // requests diameter of the pizza in inches
    std::cout << "What is the diameter of the pizza? (inches): ";
    std::cin >> diameter;

    // calculates the cost of making the pizza
    subtotal = LABOUR + RENTAL + SUPPLYS * diameter;

    // calculates taxes of the pizza
    taxes = subtotal * HST;

    // calculates TOTAL cost of the pizza
    total = subtotal + taxes;

    // end results displayed to the user
    std::cout << "The final cost is: $" << std::fixed << std::setprecision(2)
    << std::setfill('0') << total << std::endl;
    }
