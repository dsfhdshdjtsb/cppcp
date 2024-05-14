#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    
    int t;
    cin >> t;
    
    while(t--) { 
        int r;
        cin >> r;
        int p = r+1;
        long long count = 0; 
        for(int x = 0; x < p; x++) {
            for(int y = (p); y >= 0; y--) {
                int prod = x*x + y*y;
                // cout << x << " " << y << " " << prod << " " << r << " " << p*p << endl;
                if(prod >= r*r && prod < p*p) {
                    count++;
                } else if (prod <= r*r) {
                    break;
                }
            }
        }
        cout << 4*(--count) << endl;
    }
}