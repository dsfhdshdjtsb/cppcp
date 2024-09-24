#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    int t;
    cin >> t;
    while(t--) { 
        int n, k;
        cin >> n;
        cin >> k;
        if(n % 2 == 1 && k % 2 == 0) {
            cout << "NO" << endl;
            continue;
        }
        if(k == 1) {
            cout << "YES" << endl;
            cout << n << endl;
            continue;
        }
        int firsts = (n-1) / (k-1);
        int remainder = n - firsts * (k-1);
        if(firsts % 2 != remainder % 2) {
            remainder += (k-1);
            firsts--;
        }
        if(firsts % 2 != remainder % 2 || firsts == 0) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        string answer;
        for(int i = 0; i < k-1; i++) {
            
            cout << firsts << " ";
        }
        cout << remainder;
        cout << endl;
    }
}