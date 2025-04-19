#include<iostream>
using namespace std;
int main(){
  int n
  cout<<"Enter the number to find number of digits:";
  cin>>n;
  int numofdigits=0;
  while (n>0){
    n=n/10;
    numofdigits++;
  }
cout<<"The num of digits is:"<<numofdigits;
return 0;
}
