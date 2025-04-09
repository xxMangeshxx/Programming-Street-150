#include <iostream>
using namespace std;
int main(){
  cout<<"Enter a number to find factorial:";
  int n;
  int fact=1;
  cin>>n;
  for(int i=1; i<=n;i++){
    fact*=i;
  }
  cout<<"The factorial of "<<n<<" is "<<fact;
  return 0;
}
