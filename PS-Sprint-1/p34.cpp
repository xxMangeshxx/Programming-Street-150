#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
  string str1,str2;
  std::cout<<"Anagram checker \n";
  std::cout<<"Enter string 1";
  getline(cin,str1);
  std::cout<<"Enter string 2";
  getline(cin,str2);
  sort(str1.begin(),str1.end());
  sort(str2.begin(),str2.end());
bool b=true;
  for(int i=0;i<str1.length();i++){
    if(str1[i]!=str2[i]){
      b=false;
      break;
    }
  }
  if(b){
  cout<<"They are anagrams":
    }
  else{
    cout<<"They are not anagrams";
  }
  return 0;
}
