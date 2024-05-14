#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    
    int t;
    cin >> t;
    
    while(t--) { 
        int n,k,q;
        cin >> n >> k >> q;
        int a[k+1];
        int b[k+1];
        a[0] = 0;
        b[0] = 0;
        for(int i = 1; i < k+1; i++) {
            cin >> a[i];
        } 
        for(int i = 1; i < k+1; i++) {
            cin >> b[i];
        }

        for(int i = 0; i < q; i++) {
            int c;
            cin >> c;

            long long mins = 0;
            int j = 0;
            for(; j < k+1; j++) {
                if(c >= a[j]) {
                    mins += b[j];
                } else {
                    break;
                }
            }
        
            if( j == k+1 ) {
                cout << mins << ' ';
            } else {
                 double vel = (double)(b[j] - b[j-1]) / (a[j] - a[j-1]);
                 mins += floor(vel * (c-a[j-1]));
                 cout << mins << ' ';
            }
        }
        cout << endl;
    }
}