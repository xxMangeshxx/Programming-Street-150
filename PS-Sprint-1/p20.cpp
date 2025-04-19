/* Checking for Perfect Numbers
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to determine if a number is a perfect number.
Example:
Input: number = 28
Output: Perfect Number
Explanation: 28 is a perfect number because its divisors (1, 2, 4, 7, 14) sum up to 28.
 */
#include<iostream>
int main(){
    int n,sum=0;
    std::cout<<"Enter a number to check if it is a perfect number:";
    std::cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        std::cout<<"The number is a perfect number";
    }
    else std::cout<<"It is not a perfect number";
    return 0;
}