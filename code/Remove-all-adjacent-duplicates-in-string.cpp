#include <iostream>
#include <string>
using namespace std;


    string removeDuplicates(string s) {

        int sIndex=1;
        int tempIndex=0;
        string temp = "";
        temp.push_back(s[0]);
        
        while ( sIndex < s.length() ) {
            
            //conditon if the temp string gets empty
            if ( tempIndex < 0 ) {
                temp.push_back(s[sIndex]);
                tempIndex++;
                sIndex++;
                continue;
            }
            
            //condition to check if the charaters match in both strings and if input string comes to an end
            if( temp[tempIndex]  != s[sIndex] && s[sIndex] ) {
                
                temp.push_back(s[sIndex]);
                tempIndex++;
                sIndex++; 
            }
            // deleting the temporary string if duplicate string encountered      
            else {
                
                temp.pop_back();
                tempIndex--;
                sIndex++;
                  
            }
               
            
        }
        return temp;
    }

    int main() {
        // taking user input
        string s;
        cout<<"\nEnter a string : ";
        cin>>s;
        cout<<removeDuplicates(s)<<endl;
    }
