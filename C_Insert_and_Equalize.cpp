#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int fgcd(int x, int y) {
    if(y == 0) return x;
    return fgcd(y, x % y);
}

int main() {
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        
        unordered_set<int> cont;
        int max = INT_MIN;
        
        for(int i = 0; i < n; i++) {
            
            cin >> arr[i];
            

            if(arr[i] > max) max = arr[i];
            // cont.insert(arr[i]);
        }
        
        int gcd = 0;
        for(int i = 0; i < n; i ++) {
            gcd = fgcd(gcd, max - arr[i]);
        }
        if(gcd == 0) gcd = 1;

        sort(arr, arr + n);
        long long count = 0;
        int j = 1;
        while(true) {
            if(j < n && arr[n-j-1] == max - j * gcd) {
                // cout << "term:" << max - j * gcd;
                j++;
            } else {
                if(j == n) {
                    count += n;
                } else {
                    count += j;
                }
                break;
            }
        }
        

        for(int i = 0; i < n; i++) {
            count += (max - arr[i]) / gcd;
            
        }
        cout << count << endl;



    }
}

