#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    
    int t;
    cin >> t;
    
    while(t--) { 
        int x, y;
        cin >> x;
        cin >> y;
        cout << (x < y ? x : y) << " " << (x > y ? x : y) << endl ;
    }
}