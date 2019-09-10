#include <bits/stdc++.h> 
#include<map>
using namespace std;    
// Function to check whether two strings are anagram of each other  
bool areAnagram(string str1, string str2) 
{ 
    // If two strings have different size 
    if (str1.size() != str2.size()) { 
        return false; 
    } 
   
    // To build 2 maps
    map<char,int>m1,m2;
    
    for (int i = 0; i < str1.size(); i++) 
    { 
         m1[str1[i]]++;
    } 
    for (int i = 0; i < str2.size(); i++) 
    { 
         m2[str2[i]]++;
    } 
   
    return m1 == m2; 
   
} 
   
// Driver code 
int main() 
{ 
    string str1 = "dormitory"; 
    string str2 = "dirtyroom"; 
    if (areAnagram(str1, str2)) 
        cout << "The two strings are anagram of each other"; 
    else
        cout << "The two strings are not anagram of each other"; 
   
    return 0; 
} 
