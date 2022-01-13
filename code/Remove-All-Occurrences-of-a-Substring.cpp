#include <iostream>
#include <string>
using namespace std;


    string removeOccurrences(string s, string part) {
        
        //string operation to remove the occurrences
        while (s.length()!=0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
    
    int main() {
        string s,part;
        
        //taking first input
        cout<<"\nEnter a sentennce : ";
        getline(cin, s);

        //taking second input
        cout<<"\nEnter the sequence to be deleated : ";
        cin>>part;

        //creating an object
        string result = removeOccurrences(s, part); 
        cout<<result<<endl;
    }
