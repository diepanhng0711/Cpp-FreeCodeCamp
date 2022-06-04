#include<iostream>

int main() {
    int number1 = 15;           //Decimal
    int number2 = 017;          //Octal
    int number3 = 0x0F;         //Hexaxdecimal
    int number4 = 0b00001111;   //Binary

    std::cout << "Number 1: " << number1 << std::endl;
    std::cout << "Number 2: " << number2 << std::endl;
    std::cout << "Number 3: " << number3 << std::endl;
    std::cout << "Number 4: " << number4 << std::endl;
}