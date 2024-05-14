#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    
    int t;
    cin >> t;
    
    while(t--) { 
        string input;
        cin >> input;
        string output(input.length(), '*');
        char beg = input.at(0);
        bool done = false;
        int i = 0;
        for(int i = 1; i < input.length(); i++) {
            if(done || input[i] == beg ) {
                output[i] = input[i];
            } else {
                output[0] = input[i];
                output[i] = beg;
                done = true;
            }
        }
        if(done) {
            cout << "YES" << endl;
            cout << output << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}