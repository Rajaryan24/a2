#include <bits/stdc++.h> 
using namespace std; 
 
int main() { 
    int arr[] = {1, 2, 2, 3, 1}; 
    int n = 5; 
 
    unordered_map<int, int> freq; //for hashing the count of each element in the array

 
    for (int i = 0; i < n; i++) { 
        freq[arr[i]]++; 
    } 
 
    for (auto it : freq) { 
        cout << it.first << " -> " << it.second << endl; //to print the element and its frequency in the array as the first is array element and the second is its frequency in the array
    } //first and secoND FOR pairs and begin() and end() for arrau
    return 0; 
} 