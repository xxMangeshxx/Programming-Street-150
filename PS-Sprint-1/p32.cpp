/* Finding the Median of an Array
Difficulty: Medium
Topics: Arrays, Sorting
Description: Write a program to find the median of an array of numbers.
Example:
Input: array = [3, 1, 2, 4, 5]
Output: 3
Explanation: The median of the sorted array [1, 2, 3, 4, 5] is 3. */
#include<iostream>
#include<algorithm>
int main(){
    std::cout<<"Enter the number of elements in the array: ";
    int n;
    std::cin>>n;
    int arr[n];
    float result;
    std::cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::sort(arr,arr+n);
    if(n%2==0){
        result=(arr[n/2-1]+arr[n/2])/2.0;
    }
    else{
        result=arr[n/2];
    }
    std::cout<<"The median of the array is: "<<result;
    return 0;
}