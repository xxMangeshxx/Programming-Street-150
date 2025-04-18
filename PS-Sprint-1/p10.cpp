/* Finding the Greatest Common Divisor (GCD)
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to find the GCD of two numbers.
Example:
Input: a = 48, b = 18
Output: 6
Explanation: The GCD of 48 and 18 is 6.  */

#include <iostream>
int main(){
    int a,b,gcd;
    std::cout<<"Enter two numbers to find gcd:";
    std::cin>>a>>b;
    std::cout<<"The two numbers are: "<<a<<" and "<<b<<std::endl;
    
    for(int i=std::min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            gcd=i;
            break;
        }
    }
    std::cout<<"The gcd of both numbers is:"<<gcd<<"\n";
    return 0;
}
