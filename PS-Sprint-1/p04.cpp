#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int x,n,m;
  cout<<"Enter the number to find if it's an Amstrong number:";
  cin>>x;
  n=x;
  m=x;
  int numofdigits=0;
  int rem,sum=0;
  while (n>0){
    n=n/10;
    numofdigits++;
  }
  while (m>0){
    rem=m%10;
    sum+=pow(rem,numofdigits);
    m/=10;
  }
  if(x==sum){
    cout<<"It is an Armstrong number";
  }
  else{
    cout<<"It is not an Armstrong number";
  }
  return 0;
}
