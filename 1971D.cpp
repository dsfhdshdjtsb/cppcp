#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    
    int t;
    cin >> t;
    
    while(t--) { 
        string n;
        cin >> n;

        char prev = 'g';
        int count = 0;
        bool used = false;
        for(int i = 0; i < n.length(); i++) {
            if(n[i] != prev) {
                if(!used && prev == '0') {
                    used = true;
                } else {
                    count++;
                }
            }
            prev = n[i];
        }
        cout << count << endl;
    }
}