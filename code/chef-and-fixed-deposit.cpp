#include <iostream>
using namespace std;


int sum(int array[], int N) {
    int sum=0;
    for(int i=0; i<N; i++) {
        sum = sum + array[i];
    }
    return sum;
    
}

int check(int array[], int N, int K) {
    int count=0,sol=0;

    // condition for bal < than K
    if (sum(array, N)<K) {
        return -1;
    }// condition for bal > than k
    else {
        for (int i=0; i<N; i++) {
            sol=sol+array[i];
            count++;
            if (sol >= K) {
                return count;
            }
        }
    }
    return 0;
}

int main() {
    //variable space
    int t,N,K,l;
    
    //taking user input
    cin>>t;
    while(t>0) {
        cin>>N>>K;
        int arr[N] ;
        for(int i=0; i<N; i++) {
            cin>>arr[i];
        }
        //sorting the array in decending order
        sort(arr, arr + N, greater<int>());
        //performing operation
        int result = check(arr, N, K);
        cout<<result;
        t--;
    }

}