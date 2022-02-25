#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int factorial(int n) {
    int i;
    int fact = 1;

    if ( n==0 ) {
        return 1;
    }
    
    for (i=n; i>0; i--) {
        fact = (fact * i);
    }
    return fact;
}

long long countWays (int N, vector<string> A) {
    //edge case
    if ( N < 3 ) {
        return 0;
    }


   // Write your code here
   string subString = "";
   char alphabet;
   int m,n;
   int r=3;
   long long c = 0;
   int i=0;
   char ch[]={'a','e','i','o','u','\0'};
   char v=ch[i];
   cout<<v<<" :first v"<<endl;

   //checking for each vowel
   while ( v != '\0' ) {
        n=0;

        //traversing the vector string
        for (int i=0; i<A.size(); i++) {
            subString = A[i];
            cout<<subString<<" :substring"<<endl;

            //checking for vowels
            for (int j=0; j<subString.size(); j++) {
                alphabet = subString[j];
                cout<<alphabet<<" :alphabet"<<endl;
                if ( alphabet == v ) {
                    n++;
                    cout<<n<<" :n"<<endl;
                    break;
                }
            }     
        }
        i++;
        v = ch[i];
        cout<<v<<" :next v"<<endl;
        m = n - r;
        if ( n >= 3 && n!=N ) {
            c = c + ( factorial(n) / ( factorial(r) * factorial(m) ) );
            cout<<c<<" :c"<<endl;
        }
        else if (n==N) {
            c = ( factorial(n) / ( factorial(r) * factorial(m) ) );
            break;
        }
         
    }
    cout<<c<<" :c"<<endl;
    return c;
}

int main() {

    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        vector<string> A(N);
        for(int i_A = 0; i_A < N; i_A++)
        {
        	cin >> A[i_A];
        }

        long long out_;
        out_ = countWays(N, A);
        cout << out_;
        cout << "\n";
    }
}