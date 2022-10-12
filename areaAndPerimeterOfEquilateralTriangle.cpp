// Copyright (c) 2022 Kaitlyn Ip All rights reserved
//
// Created by: Kaitlyn Ip
// Created on: Oct 2022
// This program calculates the area of perimeter of an equilateral triangle
//    with side inputted from the user

#include <cmath>
#include <iostream>

int main() {
    // this function calculates area and perimeter of equilateral triangle
    int side;
    float area;
    double perimeter;
    // input
    std::cout << "Enter the side of the equilateral triangle (mm): ";
    std::cin >> side;
    // process
    area = round(sqrt(3) / 4 * (pow(side, 2)) * 100) / 100;
    perimeter = side * 3;
    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << " mm²." << std::endl;
    std::cout << "Perimeter is " << perimeter << " mm." << std::endl;
    std::cout << "\nDone." << std::endl;
}
