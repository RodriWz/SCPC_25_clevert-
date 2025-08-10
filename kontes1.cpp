#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int min_ops = abs(a[0]);
    for (int i = 1; i < n; i++) {
        min_ops = min(min_ops, abs(a[i]));
    }
    
    cout << min_ops << endl;
    
    return 0;
}