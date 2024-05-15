#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int binary(int* a, int c, int low, int high) {
     if(low == high ) return low;
     int mid = (low + high + 1) / 2;
     int rand = a[mid];
     if(c < a[mid]) return binary(a, c, low, mid-1);
     else return binary(a, c, mid, high);
}

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
            long long c;
            cin >> c;


            int j = binary(a, c, 0, k);
            
            if(a[j] == c) {
                cout << b[j] << ' ';
            } else {
                 long long mins = b[j] + (c-a[j]) * (b[j+1] - b[j]) / (a[j+1] - a[j]);
                 int test = (c-a[j]);
                 int test2 = (b[j+1] - b[j]);
                 int test3 = (a[j+1] - a[j]);
                 int test4 = 0;
                 cout << mins << ' ';
            }
        }
        cout << endl;
    }
}
