#include <bits/stdc++.h>
using namespace std;


int singleElement(const vector<int>& arr) {
    int ans = 0;

    for (int i = 0; i < 32; ++i) {
        int cnt = 0;

        for (int num : arr) {
            if ((num >> i) & 1) {
                cnt++;
            }
        }

        if (cnt % 3 == 1) {
            ans |= (1 << i);
        }
    }

    return ans;
}

int main(){
    vector<int> arr = {2, 2, 3, 2};
    int ans = singleElement(arr);
    cout << ans;
    return 0;
}