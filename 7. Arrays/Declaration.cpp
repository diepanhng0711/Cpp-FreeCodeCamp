#include<iostream>

int main() {
    //Declare an array of ints
    int scores[10]; //= {5, 7, 12};     //Junk data

    scores[0] = 11;
    scores[1] = 22;
    scores[2] = 33;
    /*std::cout << scores[0] << std::endl;
    std::cout << scores[1] << std::endl;
    std::cout << scores[2] << std::endl;
    std::cout << scores[3] << std::endl;*/

    //Read with a loop

    for (int i = 0; i < 10; i++) {
        std::cout << scores[i] << std::endl;
    }

    /*for (int i: scores) {
        std::cout << scores[i] << std::endl;
    }*/

    int class_sizes[] {10,12,15,11,18,17,23,56}; 
	
	// Will print this with a range based for loop
	for(auto value : class_sizes){
		std::cout << "value : " << value << std::endl;
	}

    int scores1 [] {2,5,8,2,5,6,9};
    int sum {0};
    
    for( int element : scores1){
        sum += element;
    }
    std::cout << "Score1 sum : " << sum << std::endl;
    return 0;
}