/* Finding the Largest and Smallest Numbers in an Array
Difficulty: Easy
Topics: Basic Programming, Arrays
Description: Write a program to find the largest and smallest numbers in an array.
Example:
Input: array = [4, 7, 1, 8, 5]
Output: Largest: 8, Smallest: 1
Explanation: The largest number in the array is 8 and the smallest is 1. */


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
    int largest,smallest;
    largest=smallest=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }

    }
    cout<<"The largest number in the array is:"<<largest<<"\n";
    cout<<"The smallest number in the array is:"<<smallest<<"\n";

    return 0;
}
