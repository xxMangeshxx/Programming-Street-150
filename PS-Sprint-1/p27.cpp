#include <iostream>
int main(){
  int n,k=1;
  std::cout<<"Enter the number of rows up to which you want to generate the sequence:";
 std::cin>>n;
  for(int i=1; i<=n;i++){
    for(int j=0;j<i;j++){
      std::cout<<k++<<"\t";
    }
    std::cout<<std::endl;
  }
 
  return 0;
}
