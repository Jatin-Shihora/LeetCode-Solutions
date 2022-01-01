// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    // strings at index 0 is not used, it is to make array
    // indexing simple
    string one[20] = {"",         "one ",     "two ",       "three ",    "four ",
                    "five ",    "six ",     "seven ",     "eight ",    "nine ",
                    "ten ",     "eleven ",  "twelve ",    "thirteen ", "fourteen ",
                    "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "};

    // strings at index 0 and 1 are not used, they is to
    // make array indexing simple
    string ten[10] = {"",       "",       "twenty ",  "thirty ", "forty ",
                    "fifty ", "sixty ", "seventy ", "eighty ", "ninety "};

    // n is 1- or 2-digit number
    string numToWords(int n, string s) {
        string str = "";
        // if n is more than 19, divide it
        if (n > 19)
            str += ten[n / 10] + one[n % 10];
        else
            str += one[n];

        // if n is non-zero
        if (n) str += s;

        return str;
    }

    // Function to print a given number in words
    string convertToWords(long n) {
        // stores word representation of given number n
        string out;

        // handles digits at ten millions and hundred
        // millions places (if any)
        out += numToWords((n / 10000000), "crore ");

        // handles digits at hundred thousands and one
        // millions places (if any)
        out += numToWords(((n / 100000) % 100), "lakh ");

        // handles digits at thousands and tens thousands
        // places (if any)
        out += numToWords(((n / 1000) % 100), "thousand ");

        // handles digit at hundreds places (if any)
        out += numToWords(((n / 100) % 10), "hundred ");

        if (n > 100 && n % 100) out += "and ";

        // handles digits at ones and tens places (if any)
        out += numToWords((n % 100), "");

        return out;
    }

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        Solution ob;
        auto ans = ob.convertToWords(n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends