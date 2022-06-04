#include<iostream>

int add2Numbers(int x, int y) {
    return (x + y);
}

int main() {
    int a = 25;
    int b = 17;
    float c = 22.5;
    int d = b + c; 
    int e = 6;

    std::cout << "Sum of " << a << " and " << b << " = " << add2Numbers(a, b) << std::endl;
    std::cout << "17 + 22.5 = " << b + c << std::endl;
    std::cout << "d = 17 + 22.5 = " << d << std::endl;
    std::cout << "a/e = " << a / e << std::endl;

    return 0;
}