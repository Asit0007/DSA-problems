#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n,digit,i=0,ans=0;
    cin>>n;

    while(n!=00) {

        digit = n%10;

        if(digit==1) {

            ans = ans + (digit * pow(2,i));    

        }
        
        n = n/10;
        i++;
    }
    cout<<ans<<endl;

}