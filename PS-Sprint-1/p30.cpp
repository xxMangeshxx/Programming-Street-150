/* Finding Missing Numbers in a Sequence
Difficulty: Easy
Topics: Basic Programming, Arrays
Description: Write a program to find missing numbers in a sequence from 1 to n.
Example:
Input: sequence = [1, 2, 4, 5]
Output: [3]
Explanation: The missing number in the sequence from 1 to 5 is 3. */
#include <iostream>
#include<algorithm>
int main() {
    int n;
    std::cout<<"Enter the number of elements in the continuous number sequence:";
    std::cin>>n;
    int arr[n];
    std::cout<<"Enter the array elements: \n";
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int greatest=*std::max_element(arr,arr+n);
    std::sort(arr,arr+n);
    int maxarray[greatest];
    for(int i=1;i<=greatest;i++){
        maxarray[i-1]=i;
    }
    std::cout<<"The proper sequence should be: \n";
    for(int i=0;i<greatest;i++){
        std::cout<<maxarray[i]<<"\t";
    }
    std::cout<<"\nMissing numbers in the sequence are(if any): \n";
    int i,j;
    for( j=i=0; i<n; i++,j++){
        if(arr[i]==maxarray[j]){
            continue;
        }
        else{
              while(arr[i]!=maxarray[j]){
                std::cout<<maxarray[j]<<"\t";
                j++;
            }
        }
    }
    return 0;
}