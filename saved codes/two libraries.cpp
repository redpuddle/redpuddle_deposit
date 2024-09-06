#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, ans = 0;
    vector<string> lib1, lib2;
    cin >> n >> m;
    s1.resize(n);
    s2.resize(m);
    
    for (int i = 0; i < n; i++) {
        cin >> lib1[i];
    }
    sort(lib1.begin(), lib1.end());
    for (int i = 0; i < m; i++) {
        cin >> lib2[i];
        if (binary_search(lib1.begin(), lib1.end(), lib2[i])) ans++;
    }
    cout << ans;
}

