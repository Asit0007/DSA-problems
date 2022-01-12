
#include <iostream>
using namespace std;




class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int l=str.size();
        int arr[26] = {0};
        int number=0;
        for (int i=0; i<l; i++) {
            
            int number=0;
            
            // for lowercase
            if( str[i] >= 'a' && str[i] <= 'z' ) {
                number = str[i] - 'a';
            }
            else {// for uppercase
                number =str[i] -'A';
            }
            arr[number]++;
        }
        // for finding maximum occured character
        int max=0;
        char ans;
        for (int j=0; j<26; j++) {
            if(max<arr[j]) {
                ans=j;
                max=arr[j];
            }
        }
        char finalans='a'+ans;
        return finalans;
    }

};


int main()
{
    //taking user input
    int t;
    cout<<"\nenter no of testcases : ";
    cin >> t;
    while(t--)
    {
        string str;
        cout<<"\nenter your string : ";
        cin >> str;
    	Solution obj;
        cout<<"\nMaximum occuring character is :  ";
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
