/* Finding the Second Largest Number in an Array
Difficulty: Medium
Topics: Arrays, Sorting
Description: Write a program to find the second largest number in an array.
Example:
Input: array = [10, 20, 4, 45, 99]
Output: 45
Explanation: The second largest number in the array is 45. */
#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of elements in the array:";
  cin>>n;
  int arr[n];
  cout<<"Enter the array elements:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int largest,secondlargest;
  largest, secondlargest=0;
  for(int i=0;i<n;i++){
    if(arr[i]>largest){
      largest=arr[i];
    }
    if(arr[i]<largest && arr[i]>secondlargest){
      secondlargest=arr[i];
    }
  }
  cout<<"Largest is: "<<largest<<"and second largest is: "<<secondlargest;
  return 0;
}
  
