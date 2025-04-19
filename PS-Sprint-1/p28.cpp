#include <iostream>
using namespace std;
int factorial(int n){
  int fact=1;
  for(int i=1; i<=n;i++){
    fact*=i;
  }
  return fact;
}
int sumofdigits(int n){
  int sum=0,rem;
  while(n>0){
  rem=n%10;
  sum+=rem;
  n/=10;
  }
  return sum;
}
int main(){
  cout<<"Enter a number to find sum of digits of its factorial:";
  int n;
  cin>>n;
  cout<<"Sum of digits of factorial of number is:"<<sumofdigits(factorial(n));
return 0;
}
