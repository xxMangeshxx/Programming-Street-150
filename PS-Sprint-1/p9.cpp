#include <iostream>
using namespace std;
int main() {
  int n,rem,sum=0;
cout<<"Enter the number to find sum of its digits:";
cin>>n;
while(n>0){
  rem=n%10;
  sum+=rem;
  n/=10;
}
  cout<<"Sum of digits is: "<<sum;
    return 0;
}
