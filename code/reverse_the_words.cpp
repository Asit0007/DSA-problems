#include <iostream>
#include <string>
#include <vector>

using namespace std;


// function for checking spaces
bool checkSpace(char ch) {
    if (ch==' ') {
        return 1;
    }
    return 0;

}

// function for reversing the word
string reverse(string str) {
    string temp;
    
    for(int i=str.size(); i>=0; i--) {
        temp= temp + (str[i]);
    }
    return temp;
}

//function for printing the string
void print(string r) {
    cout<<"result : ";
    for(int l=0; l<=r.size(); l++) {
        cout<<r[l];
    }
}


int main() {
    //taking user input and initializing variables
    string s;
    string temp;
    string result;
    cout<<"enter a string : ";
    getline(cin, s);
    s=s+" ";
    int l=s.length();
    
    for (int i=0; i<l; i++ ) {
        //check for space
        if (checkSpace(s[i])) {
            //reverse
            result.append(reverse(temp));
            result.append(" ");
            temp="";
            continue;     

        }
        else { //extract words
            temp.push_back(s[i]);
        }
    }
    //print in reverse
    print(result);


}