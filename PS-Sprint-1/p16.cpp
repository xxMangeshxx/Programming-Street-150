
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array:";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers in the array:\n";
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }
    int sum=0;
    
    for(int i=0; i<n; i++){
      sum+=arr[i];
    }
    cout<<"The sum of numbers in the array is:"<<sum<<"\n";
    

    return 0;
}
