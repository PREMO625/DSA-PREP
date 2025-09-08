/*
Check if String is Palindrome or Not


0

100
Easy

Given a string s, return true if the string is palindrome, otherwise false.



A string is called palindrome if it reads the same forward and backward.


Examples:
Input : s = "hannah"

Output : true

Explanation : The string when reversed is --> "hannah", which is same as original string , so we return true.

Input : s = "aabbaaa"

Output : false

Explanation : The string when reversed is --> "aaabbaa", which is not same as original string, So we return false.
Constraints:
1 <= s.length <= 10^3
s consist of only uppercase and lowercase English characters.
Expected time complexity:O(n^2)
*/
#include<iostream>
using namespace std;

bool isPalindrome(string s) {
        int i = 0, j = (int)s.size() - 1;
        while (i < j) {
            // Advance i to next alphanumeric
            while (i < j && !isalnum(s[i])) 
                ++i;
            // Retreat j to previous alphanumeric
            while (i < j && !isalnum(s[j])) 
                --j;
            // Compare in lowercase
            if (i < j && tolower(s[i]) != tolower(s[j])) 
                return false;
            ++i;
            --j;
        }
        return true;
    }

int main(){
    string line;
    getline(cin,line);
   cout << "\n" << (isPalindrome(line) ? "true" : "false");
    
    return 0;
}