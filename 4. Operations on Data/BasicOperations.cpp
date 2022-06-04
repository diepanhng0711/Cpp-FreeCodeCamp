#include<iostream>

int main() {
    
    //Initialization
    int a{2};
    int b{7};

    //Addition
    int result = a + b;
    std::cout << "a + b = " << result << std::endl;

    //Subtraction
    result = a - b;
    std::cout << "a - b = " << result << std::endl; 
    result = b - a;
    std::cout << "b - a = " << result << std::endl; 

    //Multiplication
    result = a * b;
    std::cout << "a * b = " << result << std::endl;

    //Division
    result = b / a;
    std::cout << "b / a = " << result << std::endl;    // two can fit seven only three times => 7/2 = 3 (int)

    //Modulus (mod) chia lấy dư
    result = b % a;
    std::cout << "b mod a = " << result << std::endl;

    return 0;
}