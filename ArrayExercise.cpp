//
// Created by Jenn on 3/29/2024.
//
#include <iostream>

int main() {
    int numA = 12, numB = 34, numC = 56;
    std::cout << "My numbers: " << " " <<  numA <<  " " << numB << " " << numC << std::endl;

    int num[3] = {12, 34, 56};
    std::cout << "My numbers: " << " " <<  num[0] <<  " " << num[1] << " " << num[2] << std::endl;

    std::cout << "My numbers: " ;
    for (int i = 0; i < 3; i++){
        std::cout <<  num[i] << " ";
    }
    std::cout << std::endl;
}

