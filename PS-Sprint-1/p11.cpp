#include <iostream>
int gcd(int a, int b){
    int gcd;
    for(int i=std::min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            gcd=i;
            break;
        }
    }
    return gcd;
}
int main(){
    int a,b,lcm;
    std::cout<<"Enter two numbers to find lcm:";
    std::cin>>a>>b;
    std::cout<<"The two numbers are: "<<a<<" and "<<b<<std::endl;
    lcm=(a*b)/(gcd(a,b));
    std::cout<<"The lcm of the two numbers is: "<<lcm<<"\n";
    return 0;
}