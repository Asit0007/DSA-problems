#include <iostream>
#include <string>
using namespace std;

bool checkEquals(int a[26], int b[26]) {
    for(int i=0; i<26; i++) {
        if ( a[i] != b[i] ) {
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1, string s2) {

    //character count array
    int count1[26] ={0};

    for (int i=0; i<s1.length(); i++) {
        int index =s1[i]-'a';
        count1[index]++;
    }

    //traversing string s2 in a window of s1 length
    int windowsize = s1.length();
    int i =0;
    int count2[26] ={0};
    while (i<windowsize && i<s2.length()) {
        int index = s2[i]-'a';
        count2[index]++;
        i++;
    }

    if ( checkEquals( count1 , count2 ) ) {
        return 1;
    }

    //further processing the window
    while(i<s2.length()) {
        char newChar=s2[i];
        int index = newChar-'a';
        count2[index]++;

        char oldChar =s2[i-windowsize];
        int oldindex = oldChar-'a';
        count2[oldindex]--;

        i++;

        if(checkEquals(count1, count2)) {
            return 1;
        }

    }
    return 0;
}

int main() {
    string s1="aa";
    string s2="am dani aathanni";
    if(checkInclusion(s1, s2))
        cout<<"Found!"<<endl;
    else
        cout<<"Not found!"<<endl;

}
