/* Counting Vowels and Consonants in a String
Difficulty: Easy
Topics: Basic Programming, String Manipulation
Description: Write a program to count vowels and consonants in a given string.
Example:
Input: string = "hello world"
Output: Vowels: 3, Consonants: 7
Explanation: "hello world" contains 3 vowels (e, o, o) and 7 consonants (h, l, l, w, r, l, d). */
#include<iostream>
#include<string>
int main(){
  std::string str;
int vowels=0,consonants=0;
std::string vow= "aeiouAIEOU";
std::cout<<"Enter the string to count vowels and consonants: ";
std::getline(std::cin,str);
for(int i=0;i<str.length();i++){
  if(isalpha(str[i])){
    if(vow.find(str[i])!=std::string::npos){
      vowels++;
    }
    else{
      consonants++;
    }
  }
}
  std::cout<<"Vowels: "<<vowels<<" Consonants: "<<consonants;
return 0;
}
