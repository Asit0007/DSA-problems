#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        
        //variable space
        vector<string> result;
        string temp="";
        int l = s.length();
        int count=0;
        int rem = l%k;
        
        
        //edge case where string ends halfway
        if ( rem != 0 ) {
            count = k-rem;
            for (int j=0; j<count; j++) {
                s.push_back(fill);
             }    
        }
        
        // taraversing the string and breaking it into substrings of k size
        int newl = s.length();
        for(int i=0; i<newl; i++) {
           
            if( (i+1) % k != 0 ) {
                temp.push_back(s[i]);
            }
            else {
                temp.push_back(s[i]); 
                result.push_back(temp);
                temp="";
            }
            
        }
        // returning the result
        return result;
        
    }
};