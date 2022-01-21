#include<iostream>
#include<math.h>
using namespace std;


int main() {
    //taking user input
    int n;
    cin >> n;


    int ans  = 0;
    int i = 0;
    
    //traversing the digts
    while(n != 0 ) {
        //using bitwise operator
        int bit  = n & 1;

        ans = (bit * pow(10, i) ) + ans;

        n = n >> 1;
        i++;

    }

    cout<<" Answer is " << ans << endl;
    return 0;
}
