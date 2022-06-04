#include<iostream>

int main() {

//C STYLE STRING
    //Declare an array
    char message[5] = {'H','e','l','l','o'};

    //Print out the array through looping
    std::cout << "Message: " ;
    for (char c: message) {
        std::cout << c;
    }
    std::cout << std::endl;

    //Change characters in an array
    message[1] = 'a';

    //Print out the array through looping
    std::cout << "Message: " ;
    for (char c: message) {
        std::cout << c;
    }
    std::cout << std::endl;

    std::cout << "Message: " << message << std::endl;
    std::cout << "Size of message = " << sizeof(message) << std::endl;

    char message1[6] = {'H','a','l','l','o','\0'};
    std::cout << "Message 1: " << message1 << std::endl;
    std::cout << "Size of message 1 = " << sizeof(message1) << std::endl;

    char message2[] = {'H','a','l','l','o','\0'};
    std::cout << "Message 2: " << message2 << std::endl;
    std::cout << "Size of message 2 = " << sizeof(message2) << std::endl;

    char message3[8] = {'H','a','l','l','o'};               //Auto-filled with null terminators if the size of the characters array is defined but no changing with the size of that array
    std::cout << "Message 3: " << message3 << std::endl;  
    std::cout << "Size of message 3 = " << sizeof(message3) << std::endl;

    char message4[] = {'H','a','l','l','o'};               //Not a c style string cuz there is no null character. Should avoid
    std::cout << "Message 4: " << message4 << std::endl;  
    std::cout << "Size of message 4 = " << sizeof(message4) << std::endl;

    //String literal - chuỗi ký tự
    char message5[] = {"Hello"};
    std::cout << "Message 5: " << message5 << std::endl;
    std::cout << "Size of message 5 = " << sizeof(message5) << std::endl;

    int number[] {1, 2, 3, 4, 5, 6};
    std::cout << "Numbers : " << number << std::endl;       



    return 0;
}