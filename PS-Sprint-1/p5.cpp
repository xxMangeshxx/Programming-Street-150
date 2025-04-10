#include <iostream>
using namespace std;
int main(){
  int l, first=0,second=1, third;
  cout<<"Enter the limit up to which Fibonacci numbers should be generated:";
  cin>>l;
  cout<<first<<endl;
  if(second<=l)
  cout<<second<<endl;
  while (second<=l){
    third=first+second;
    if(third<=l){
      cout<<third<<endl;
    }
    first=second;
    second=third;
  }
  
  return 0;
  
}
