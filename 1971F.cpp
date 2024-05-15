#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    
    int t;
    cin >> t;
    
    while(t--) { 
        long long r;
        cin >> r;
        long long p = r+1;
        long long count = 0; 
        long long height = r;
        for(long long x = 0; x <= r; x++) {
            while(x*x+height * height >= p*p) {
                height--;
            }
            for(long long y = (height); y >= 0; y--) {
                long long prod = x*x + y*y;
                // cout << x << " " << y << " " << prod << " " << r << " " << p*p << endl;
                if(prod >= r*r) {
                    count += 1;
                } else if (prod <= r*r) {
                    break;
                }
            }
        }
        cout << 4*(--count) << endl;
    }
}