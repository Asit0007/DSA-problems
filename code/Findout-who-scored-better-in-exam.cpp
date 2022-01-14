#include <iostream>
using namespace std;

int total(int a, int b, int c ) {
    return (a+b+c); 
}

string topRank(int DSA1, int TOC1, int DM1, int DSA2, int TOC2, int DM2 ) {
    string result="";

    //all marks equal condition
    if( DSA1==DSA2 && TOC1==TOC2 && DM1==DM2 ){
        result = "Tie";
    }
    //total marks equal condition
    else if ( total(DSA1,TOC1,DM1) == total(DSA2,TOC2,DM2) ) {
        if( DSA1==DSA2 ){
            TOC1>TOC2 ? result= "Dragon" : result = "Sloth";
        }
        else
        DSA1>DSA2 ? result = "Dragon" : result = "Sloth"; 
    }
    //total marks different condition
    else {
        total(DSA1,TOC1,DM1) > total(DSA2,TOC2,DM2) ? result = "Dragon" : result = "Sloth";
    }
    return result;
}




int main() {
	//variable space
    int t;
    int DSA1,TOC1,DM1;
    int DSA2,TOC2,DM2;
    
    // taking user input
    cin>>t;
    while (t>0) {

        cin>>DSA1>>TOC1>>DM1;
        cin>>DSA2>>TOC2>>DM2;

        //computation
        cout<<topRank(DSA1, TOC1, DM1, DSA2, TOC2, DM2)<<endl;
        t--;

    }
    return 0;
    
}
