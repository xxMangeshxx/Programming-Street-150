/* Reversing a String
Difficulty: Easy
Topics: Basic Programming, String Manipulation
Description: Write a program to reverse a given string.
Example:
Input: string = "programming"
Output: "gnimmargorp"
Explanation: The reversed string of "programming" is "gnimmargorp".
 */
#include<iostream>
#include<string>
#include<algorithm>
int main(){
  std::string str,rev;
std::cout<<"Enter the string to reverse: ";
std::getline(std::cin,str);
rev.resize(str.length());
for(int i=0;i<str.length();i++){
  rev[str.length()-1-i]=str[i];
}
  std::cout<<"Original :"<<str<<" \n reverse: "<<rev;
return 0;
}
