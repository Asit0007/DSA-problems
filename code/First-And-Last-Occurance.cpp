#include <vector>
#include <iostream>
using namespace std;



int firstOccurance(vector<int>& arr, int n, int k) {

    int start = 0;
    int end = n-1;
    int mid = start + (end - start )/2;
    int ans = -1 ;

    while (start <= end) {
        //if mid == key
        if (arr[mid]== k ) {
            ans = mid;
            end = mid - 1; 
        }
        //if mid < key
        else if ( k > arr[mid]) {
            start = mid + 1;
        }

        //it mid > key
        else if (k < arr[mid]) {
            end = mid - 1;
        }

        mid = start + (end - start )/2;
    } 
    return ans;
}

int lastOccurance(vector<int>& arr, int n, int k) {

    int start = 0;
    int end = n-1;
    int mid = start + (end - start )/2;
    int ans = -1;

    while (start <= end) {
        //if mid == key
        if (arr[mid] == k) {
            ans = mid;
            start = mid + 1; 
        }

        //if mid < key
        else if (k > arr[mid]) {
            start = mid + 1;
        }
        //it mid > key
        else if (k < arr[mid] ) {
            end = mid - 1;
        }
        mid = start + (end - start )/2;
    } 
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    //creating a pair value
    pair<int, int> p;
    p.first = firstOccurance(arr, n, k);
    p.second = lastOccurance(arr, n, k);
    return p;
}