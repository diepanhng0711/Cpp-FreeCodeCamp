#include<iostream>

int main() {

    //Braced initialization
    //Variable may contain random garbage value 
    int elephant_count;

    int lion_count{};       //Initializes to Zero(0)

    int dog_count{10};      //Initializes to 10

    int cat_count{15};      //Initializes to 15

    //Can use expresstion as initializer
    int domesticated_animals {dog_count + cat_count};

    //int number1{doesnotknow};         //not declared
    //int narrow_conversion{2.9};       //unable

    std::cout << elephant_count << std::endl;
    std::cout << lion_count << std::endl;
    std::cout << dog_count << std::endl;
    std::cout << domesticated_animals << std::endl;

    std::cout << std::endl;

    //Functional Initialization
    int a();
    int b(44);
    int c(25);
    int d(b + c);

    int narrow_conversion(2.9);         //narrow_conversion = 2 => lost of data
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << narrow_conversion << std::endl;

    std::cout << std::endl;

    //Assignment Initalizaion
    int w;
    int x = 15;
    int y = 27;
    int z = x + y;
    int narrow_conversion1 = 2.9;       //narrow_conversion = 2 => lost of data

    std::cout << w << std::endl;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    std::cout << narrow_conversion1 << std::endl << std::endl;

    std::cout << "sizeof int : " << sizeof(int) << std::endl;
    std::cout << "sizeof x : " << sizeof(x) << std::endl;

    return 0;
}