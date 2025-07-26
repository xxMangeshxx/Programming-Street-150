#include<iostream>
int main(){
  int start, end, firsteven,sum=0;
  std::cout<<"Enter the starting number of the range:";
  std::cin>>start;
  std::cout<<"Enter the ending number of the range:";
  std::cin>>end;
  if(start>end){
    std::cout<<"\nStarting number must be smaller than last number:";
    exit(1);
  }
  if(start%2==0){
    firsteven=start;
  }
  else{
    firsteven=start+1;
  }
  for(int i=firsteven; i<=end; i+=2){
    sum+=i;
  }
  std::cout<<"\n Sum of even numbers in the range="<<sum;
  return 0;
}
