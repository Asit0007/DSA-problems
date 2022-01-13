#include <iostream>
#include <string>
using namespace std;
string replaceSpaces(string &str){
	
    //traversing the string and looking for space
    string temp="";
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else {
            temp.push_back(str[i]);
        }
    }
    return temp;
    
}
int main() {
	
    //taking user input
    string s="";
    cout<<"\nEnter a string : ";
    getline(cin,s);
    cout<< replaceSpaces(s);
}
