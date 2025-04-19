#include<iostream>
int main(){
    int n,l;
    std::cout<<"Enter the number to find its multiplication table:";
    std::cin>>n;
    std::cout<<"Enter limit of multiplication table:";
    std::cin>>l;
    for(int i=1;i<=l;i++){
        std::cout<<n<<" x "<<i<<"= "<<n*i<<"\n"; 
    }
}