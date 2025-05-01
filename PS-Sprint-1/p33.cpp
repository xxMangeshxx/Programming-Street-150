#include <iostream>
#include <cmath>
// This program calculates the power of a number using both a user-defined function and the built-in pow() function.

int main() {
    int b,e;
    std::cout<<"Enter the base and exponent: ";
    std::cin>>b>>e;
    int result=1;
    std::cout <<"Power of a number using user defined function"<< std::endl;
    for(int i=1;i<=e;i++){
        result*=b;
    }
    std::cout<<"The power of "<<b<<"^"<<e<<" is: "<<result<<std::endl;
    std::cout <<"Power of a number using built in function"<< std::endl;
    result=pow(b,e);
    std::cout<<"The power of "<<b<<"^"<<e<<" is: "<<result<<std::endl;
    return 0;
}