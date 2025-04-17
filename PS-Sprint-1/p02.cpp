#include <iostream>
#include <cmath>
using namespace std;
int main(){
 cout<<"Enter a number:" ;
int x,s=0;
cin>>x;
if (x==1){
cout<<"one";
  }
else {
for(int i=2;i<=floor(sqrt(x));i++){
if(x%i==0){
s=1;
cout<<"Not Prime";
break;
}
}
if(s==0){
    cout<<"Prime";
}
}
return 0;
}
  
