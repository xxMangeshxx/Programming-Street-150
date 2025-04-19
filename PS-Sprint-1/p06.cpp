/* Identifying Palindromes
Difficulty: Easy
Topics: Basic Programming, String Manipulation
Description: Write a program to check if a string or number is a palindrome.
Example:
Input: string = "radar"
Output: Palindrome
Explanation: "radar" reads the same backward as forward. */
#include <iostream>
#include <string>

int main(){
    std::string str;
    bool b=true;
    std::cout<<"Enter the string to check if it is a palindrome:";
    std::getline(std::cin,str);
    for(int i=0;i<str.length();i++){
        str[i]=tolower(str[i]);
    }
    int j=0,k=str.length()-1;
    while(j<k){
        if(!isalnum(str[j])){
            j++;
            continue;
        }
        if(!isalnum(str[k])){
            k--;
            continue;  
        }
        if(str[j]!=str[k]){
            b=false;
            break;
        }
        else{
            j++;
            k--;
        }
    }
    if(b){
        std::cout<<"It is a palindrome";
    }
    else{
        std::cout<<"It is not a palindrome";
    }
    return 0;
}
