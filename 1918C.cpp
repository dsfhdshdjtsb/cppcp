#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;
void printBits(unsigned long long num) {
    // Use std::bitset to convert the number to binary representation
    std::bitset<64> bits(num);
    std::cout << bits << std::endl;
}
int main() { 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    
    int t;
    cin >> t;
    
    while(t--) { 
        unsigned long long a,b,r;
        cin >> a;
        cin >> b;
        cin >> r;

        if(b < a) {
            unsigned long long temp = b;
            b = a;
            a = temp;
        }

        unsigned long long x = 0;
        bool first = true;
        for(int i = 63; i >= 0; i--) {
            unsigned long long abit = (a >> i) & 1;
            unsigned long long bbit = (b >> i) & 1;
            // cout << abit << " " << bbit << endl;
            if(abit == bbit) {
                x = x | (0 << i);
                //ie do nothing
            } else  {
                if(first) {
                    first = false;
                    //0 in this position  to make b big
                } else if ((x| ((abit^1) << i)) <=r){
                    x = x | ((abit^1) << i);
                }
            }

            // cout << x << endl;
        }
        // cout << (a^x) << endl;
        // cout << (b^x) << endl;
        if( (a^x) > (b^x)) {
            cout << (a^x) - (b^x) << endl;
        } else {
            cout << (b^x) - (a^x) << endl;
        }
   }
}