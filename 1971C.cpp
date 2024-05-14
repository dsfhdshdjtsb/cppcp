#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    
    int t;
    cin >> t;
    
    while(t--) { 
        int a, b, c, d;
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;

        int e = max(a, b);
        int f = min(a, b);

        if(((c < e && c > f) && !(d < e && d > f) )|| (d < e && d > f) && !(c < e && c > f)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
}